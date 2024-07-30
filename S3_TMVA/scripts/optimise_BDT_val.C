#include <iostream>
#include <TFile.h>
#include <TGraph.h>
#include <TH1.h>
#include <TF1.h>
#include <TTree.h>
#include <TChain.h>
#include <TString.h>
#include <TCut.h>
#include <TCanvas.h>
#include <TROOT.h>
#include <TRint.h>
#include <TStyle.h>
#include <TPaveText.h>
#include <TText.h>
#include <TLegend.h>
#include <cmath>
#include "/home/yunxuan/useful/lhcbStyle.h"


using namespace std;

int optimise_BDT_val()
{
    // Open the files for number of signal event calculation (MC file/panfs/gogia/LHCb/B2Dpppi/Analysis/S2_CutTuples/Draw/plotss in this case)
    TChain *signalChain = new TChain("DecayTree");
    signalChain->Add("../root/mc_2018_MD_precut_add_BDT.root");

    // Open the files for number of background event calculation (Data files in this case)
    TChain *bkgChain = new TChain("DecayTree");
    bkgChain->Add("../root/data_2018_MD_precut_add_BDT.root");

    lhcbStyle();
    gStyle->SetOptStat(0);
    gStyle->SetPadLeftMargin(0.16); // increase for colz plots
    gStyle->SetPadRightMargin(0.05); // increase for colz plots
    gStyle->SetPadBottomMargin(0.16);
    gStyle->SetPaintTextFormat("3.2f");

    TCanvas *c1 = new TCanvas("c1", "FOM vs BDT", 800, 600);
    c1->SetLeftMargin(0.12);
    c1->SetRightMargin(0.12);
    c1->SetTopMargin(0.06);
    c1->SetBottomMargin(0.12);
    
    // Initializing the calculated S and B values from fitting
    Double_t S = 45963.2;
    Double_t B = 6334.44;

    // Initialise the a few variables
    Double_t BDTmin = -0.6;
    Double_t BDTmax = 0.2;
    Double_t BDTstep = 0.01;
    Int_t nsteps = (BDTmax - BDTmin) / BDTstep + 1;
    Int_t fomMaxID = 0;
    Double_t maxFOM;

    //Initialise the sideband cut for background event estimation
    TCut SBCut = "(5350<B0_PVDFit_M && B0_PVDFit_M<5400)";

    // Initialise # of signal and bakground events before BDT cut
    Double_t sigevents = signalChain->GetEntries();
    Double_t bkgevents = bkgChain->GetEntries(SBCut); 

    // Initialise the array that will store the BDT values, number of signal, number of background and the FOM values
    Double_t BDTval[nsteps];
    Double_t nsig[nsteps];
    Double_t nbkg[nsteps];
    Double_t effsig[nsteps];
    Double_t effbkg[nsteps];
    Double_t s[nsteps];
    Double_t b[nsteps];
    Double_t fom[nsteps];
    Double_t nevents;

    // Calculating the number of signal events with BDT Cut 
    for(Int_t i = 0; i < nsteps; i++)
    {
        BDTval[i] = BDTmin + BDTstep*i;
        TCut BDTCut = Form("BDT > %f", BDTval[i]);
        nevents = signalChain->GetEntries(BDTCut);
        effsig[i] = nevents / sigevents;
        s[i] = S * effsig[i];
       // cout << "BDT = " << BDTval[i] << ": #events " << nsig[i] << endl;
        cout << "Efficiency after #" << i << " BDT cut: " << effsig[i] << endl;
    }
    delete signalChain;

    // Calculating the number of backgound events with sideband and BDT cut 
    for (Int_t i = 0; i < nsteps; i++)
    {
        BDTval[i] = BDTmin + BDTstep*i;
        TCut BDTCut = Form("BDT > %f", BDTval[i]);
        nevents = bkgChain->GetEntries(SBCut+BDTCut);
        effbkg[i] = nevents / bkgevents;
        b[i] = B * effbkg[i];
        // cout << "BDT = " << BDTval[i] << ": #events " << nbkg[i] << endl;
	    cout << "Efficiency after #" << i << " BDT cut: " << effbkg[i] << endl;
    }
    delete bkgChain;

    // Now we write the steps for computing the FOM
    for (Int_t i = 0; i < nsteps; i ++)
    {
        Double_t purity = (s[i]) / (s[i] + b[i]);
        Double_t significance = (s[i]) / (sqrt(s[i] + b[i]));
        fom[i] = purity * significance;
        
        // Finding out the max value
        if (fom[i] > maxFOM)
        {
            maxFOM = fom[i];
            fomMaxID = i;
        }
        // cout << "FOM value: " << fom[i] << " for BDT cut value: " << BDTval[i] << endl; 

    }

    // Printing the max FOM and BDT cut value
    cout << "Max FOM value: " << maxFOM << " and BDT value is " << BDTval[fomMaxID] << endl;

    // Draw the desired graph 
    auto g = new TGraph(nsteps, BDTval, fom);
    g->SetTitle("FOM vs BDT value;BDT value;FOM value");
    g->SetLineWidth(2);
    g->GetXaxis()->SetTitle("BDT value");
    g->GetYaxis()->SetTitle("FOM value");
    g->GetXaxis()->CenterTitle();
    g->GetYaxis()->CenterTitle();
    g->GetXaxis()->SetTitleSize(0.05);
    g->GetYaxis()->SetTitleSize(0.05);
    g->GetXaxis()->SetLabelSize(0.04);
    g->GetYaxis()->SetLabelSize(0.04);
    g->GetXaxis()->SetNdivisions(510);
    g->GetYaxis()->SetNdivisions(510);
    g->Draw("ALP");



    // Drawing a line to show the optimal BDT cut value
    Double_t yMin = g->GetYaxis()->GetXmin();
    Double_t yMax = g->GetYaxis()->GetXmax();
    Double_t xVal = BDTval[fomMaxID];
    TLine *line = new TLine(xVal, yMin, xVal, yMax);
    line->SetLineColor(kRed);
    line->SetLineWidth(2);  
    line->Draw();
    
    // Add a legend
    TLegend *legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(g, "FOM", "lp");
    legend->AddEntry(line, "Maximum FOM", "l");
    legend->Draw();

    TLatex *tex = new TLatex(0.2, 0.2, "Very Preliminary"); 
    tex->SetNDC(); 
    tex->SetTextColor(18); 
    tex->SetTextSize(0.15); 
    tex->SetTextAngle(26.15998);
    tex->SetLineWidth(2);
    tex->Draw("sames");

    c1->SetGrid();
    c1->Update();

    c1->SaveAs("../FOM.png");

    return 0;

}
