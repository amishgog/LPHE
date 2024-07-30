#define draw_class_cxx
#include "draw_class.h"
#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TLorentzVector.h"
#include "TSystem.h"
#include "TCut.h"
#include "TString.h"
#include "TH1F.h"
#include "TLegend.h"
#include "TChain.h"
#include "TGraphAsymmErrors.h"
#include "iostream"
#include "TStyle.h"
#include "TPaveText.h"
#include "TGraph2D.h"
#include "TText.h"
#include "TLatex.h"
#include "TSystem.h"
#include "/home/yunxuan/useful/lhcbStyle.h"


void draw_Dalitz()
{
    // Opening al the data files
    TChain *chain = new TChain("DecayTree");
    chain->Add("../root/data_*_BDT.root");

    TString cut = "BDT > -0.03 && B0_PVDFit_M>5247.06 && B0_PVDFit_M<5312.91 && B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1900";

    lhcbStyle();
    gStyle->SetOptStat(0);
    gStyle->SetTitleOffset(1.2,"Y");
    gStyle->SetTitleOffset(1.1,"Y");

    gStyle->SetPadLeftMargin(0.2); // increase for colz plots
    gStyle->SetPadRightMargin(0.2); // increase for colz plots
    gStyle->SetPadBottomMargin(0.16);
    gStyle->SetPaintTextFormat("3.2f");

    TCanvas *c1 = new TCanvas("Dalitz Plot Dp vs pbarpi", "Dalitz Plot Dp vs pbarpi", 800, 600);
    c1->SetLeftMargin(0.12);
    c1->SetRightMargin(0.12);
    c1->SetTopMargin(0.06);
    c1->SetBottomMargin(0.12);
    TCanvas *c2 = new TCanvas("Dalitz Plot Dpbar vs ppi", "Dalitz Plot Dpbar vs ppi", 800, 600);
    c2->SetLeftMargin(0.12);
    c2->SetRightMargin(0.12);
    c2->SetTopMargin(0.06);
    c2->SetBottomMargin(0.12);
    TCanvas *c3 = new TCanvas("Dalitz Plot Dpi vs ppbar", "Dalitz Plot Dpi vs ppbar", 800, 600);
    c3->SetLeftMargin(0.12);
    c3->SetRightMargin(0.12);
    c3->SetTopMargin(0.06);
    c3->SetBottomMargin(0.12);

    // Dalitz plot for Dp vs pbarpi
    c1->cd();
    chain->Draw("PVALLFit_DmPp_M2:PVALLFit_Pmpi_M2>>hist1("", "", 180, 1000000, 6000000)", cut);
    TH2F *hist1 = (TH2F*)gDirectory->Get("hist1");
    hist1->SetStats(0);
    hist1->GetXaxis()->SetTitle("M^{2}(#bar{p}#pi) [MeV^{2}/c^{4}]");
    hist1->GetYaxis()->SetTitle("M^{2}(Dp) [MeV^{2}/c^{4}]");
    hist1->GetXaxis()->SetTitleSize(0.05);
    hist1->GetYaxis()->SetTitleSize(0.05);
    hist1->GetXaxis()->SetLabelSize(0.04);
    hist1->GetYaxis()->SetLabelSize(0.04); 
    hist1->Draw("COLZ");

    TLatex *tex1 = new TLatex(0.2, 0.2, "Very Preliminary"); 
    tex1->SetNDC(); 
    tex1->SetTextColor(18); 
    tex1->SetTextSize(0.15); 
    tex1->SetTextAngle(26.15998);
    tex1->SetLineWidth(2)
    tex1->Draw();

    c1->Update();
    c1->SaveAs("./plots/DalitzPlot_Dp_vs_pbarpi.png");

    //Dalitz plot for Dpbar vs ppi
    c2->cd();
    chain->Draw("PVALLFit_DmPm_M2:PVALLFit_Pppi_M2>>hist2("", "", 180, 1000000, 6000000)", cut);
    TH2F *hist2 = (TH2F*)gDirectory->Get("hist2");
    hist2->SetStats(0);
    hist2->GetXaxis()->SetTitle("M^{2}(D^{-}#bar{p}) [MeV^{2}/c^{4}]");
    hist2->GetYaxis()->SetTitle("M^{2}(p#pi) [MeV^{2}/c^{4}]");
    hist2->GetXaxis()->SetTitleSize(0.05);
    hist2->GetYaxis()->SetTitleSize(0.05);
    hist2->GetXaxis()->SetLabelSize(0.04);
    hist2->GetYaxis()->SetLabelSize(0.04); 
    hist2->Draw("COLZ");

    TLatex *tex2 = new TLatex(0.2, 0.2, "Very Preliminary"); 
    tex2->SetNDC(); 
    tex2->SetTextColor(18); 
    tex2->SetTextSize(0.15); 
    tex2->SetTextAngle(26.15998);
    tex2->SetLineWidth(2);
    tex2->Draw("sames");

    c2->Update();
    c2->SaveAs("./plots/DalitzPlot_Dpbar_vs_ppi.png");

    // Dalitz plot for Dpi and ppbar
    c3->cd();
    chain->Draw("PVALLFit_Dmpi_M2:PVALLFit_PpPm_M2>>hist3("", "", 180, 1000000, 6000000)", cut);
    TH2F *hist3 = (TH2F*)gDirectory->Get("hist3");
    hist3->SetStats(0);
    hist3->GetXaxis()->SetTitle("M^{2}(D^{-}#pi) [MeV^{2}/c^{4}]");
    hist3->GetYaxis()->SetTitle("M^{2}(p#bar{p}) [MeV^{2}/c^{4}]");
    hist3->GetXaxis()->SetTitleSize(0.05);
    hist3->GetYaxis()->SetTitleSize(0.05);
    hist3->GetXaxis()->SetLabelSize(0.04);
    hist3->GetYaxis()->SetLabelSize(0.04); 
    hist3->Draw("COLZ");

    TLatex *tex3 = new TLatex(0.2, 0.2, "Very Preliminary"); 
    tex3->SetNDC(); 
    tex3->SetTextColor(18); 
    tex3->SetTextSize(0.15); 
    tex3->SetTextAngle(26.15998);
    tex3->SetLineWidth(2);
    tex3->Draw("sames");

    c3->Update();
    c3->SaveAs("./plots/DalitzPlot_Dpi_vs_ppbar.png");


}