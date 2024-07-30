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
#include "TText.h"
#include "TLatex.h"
#include "TSystem.h"
#include "/home/yunxuan/useful/lhcbStyle.h"

void draw()
{
    char title[50];
    char value[50];
    int SAVE=1;

    TChain *tr_dt = new TChain("DecayTree"); tr_dt->Add("../root/data_201*add.root");
    //TChain *tr_mc = new TChain("DecayTree"); tr_mc->Add("../mc_B2DKsK_" + DZ + "_KS" + KS + "_" + Year + "_clean_match_pidcalib_precut_add_vetoDs_MVA_cutMLP.root");
    TChain *tr_sb = new TChain("DecayTree"); tr_sb->Add("../root/data_201*add.root");
    
    vector<string> vare; vector<double> Xmin; vector<double> Xmax; vector<double> Xbins; vector<string> Xtitle;
    vector<double> Ymin; vector<double> Ymax; vector<double> Ybins; vector<string> Ytitle;
    vector<string> Savename;

    
    vare.push_back("B0_PVDFit_M"); Xbins.push_back(100); Xmin.push_back(5000); Xmax.push_back(5600); Xtitle.push_back("M(D^{-}p#bar{p}#pi^{+}) MeV/c^{2} (DTF)"); Savename.push_back("B0_PVDFit_M");
    vare.push_back("B0_PVFit_Dplus_M"); Xbins.push_back(100); Xmin.push_back(1800); Xmax.push_back(2000); Xtitle.push_back("M(D^{-}) MeV/c^{2}"); Savename.push_back("B0_PVFit_Dplus_M");
  
    // // --- Raw
    // vare.push_back("PpPm_M");  Xbins.push_back(150); Xmin.push_back(1850); Xmax.push_back(3000); Xtitle.push_back("M(p#bar{p}) MeV/c^{2}");  Savename.push_back("PpPm_M");
    // vare.push_back("Pmpi_M");  Xbins.push_back(100); Xmin.push_back(1000); Xmax.push_back(2500); Xtitle.push_back("M(#bar{p}#pi^{+}) MeV/c^{2}");  Savename.push_back("Pmpi_M");
    // vare.push_back("Pppi_M");  Xbins.push_back(100); Xmin.push_back(1000); Xmax.push_back(2500); Xtitle.push_back("M(p#pi^{+}) MeV/c^{2}");  Savename.push_back("Pppi_M");

    // vare.push_back("Dmpi_M");  Xbins.push_back(100); Xmin.push_back(2000); Xmax.push_back(3300); Xtitle.push_back("M(D^{-}#pi^{+}) MeV/c^{2}");  Savename.push_back("Dmpi_M");
    // vare.push_back("DmPm_M");  Xbins.push_back(100); Xmin.push_back(2700); Xmax.push_back(4100); Xtitle.push_back("M(D^{-}#bar{p}) MeV/c^{2}");  Savename.push_back("DmPm_M");
    // vare.push_back("DmPp_M");  Xbins.push_back(100); Xmin.push_back(2700); Xmax.push_back(4100); Xtitle.push_back("M(D^{-}p) MeV/c^{2}");  Savename.push_back("DmPp_M");

    // vare.push_back("DmPppi_M");  Xbins.push_back(400); Xmin.push_back(3000); Xmax.push_back(4400); Xtitle.push_back("M(D^{-}p#pi^{+}) MeV/c^{2}");  Savename.push_back("DmPppi_M");
    // vare.push_back("DmPmpi_M");  Xbins.push_back(400); Xmin.push_back(3000); Xmax.push_back(4600); Xtitle.push_back("M(D^{-}#bar{p}#pi^{+}) MeV/c^{2}");  Savename.push_back("DmPmpi_M");
    // vare.push_back("DmPpPm_M");  Xbins.push_back(400); Xmin.push_back(3800); Xmax.push_back(5200); Xtitle.push_back("M(D^{-}p#bar{p}) MeV/c^{2}");  Savename.push_back("DmPpPm_M");

    //-- PVALLFit
    vare.push_back("PVALLFit_PpPm_M");  Xbins.push_back(125); Xmin.push_back(1800); Xmax.push_back(3000); Xtitle.push_back("M(p#bar{p}) MeV/c^{2}");  Savename.push_back("PVALLFit_PpPm_M");
    vare.push_back("PVALLFit_Pmpi_M");  Xbins.push_back(125); Xmin.push_back(1000); Xmax.push_back(2100); Xtitle.push_back("M(#bar{p}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVALLFit_Pmpi_M");
    vare.push_back("PVALLFit_Pppi_M");  Xbins.push_back(125); Xmin.push_back(1000); Xmax.push_back(2400); Xtitle.push_back("M(p#pi^{+}) MeV/c^{2}");  Savename.push_back("PVALLFit_Pppi_M");

    vare.push_back("PVALLFit_Dmpi_M");  Xbins.push_back(100); Xmin.push_back(2000); Xmax.push_back(3050); Xtitle.push_back("M(D^{-}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVALLFit_Dmpi_M");
    vare.push_back("PVALLFit_DmPm_M");  Xbins.push_back(155); Xmin.push_back(2750); Xmax.push_back(4000); Xtitle.push_back("M(D^{-}#bar{p}) MeV/c^{2}");  Savename.push_back("PVALLFit_DmPm_M");
    vare.push_back("PVALLFit_DmPp_M");  Xbins.push_back(125); Xmin.push_back(2750); Xmax.push_back(4100); Xtitle.push_back("M(D^{-}p) MeV/c^{2}");  Savename.push_back("PVALLFit_DmPp_M");

    vare.push_back("PVALLFit_DmPppi_M");  Xbins.push_back(200); Xmin.push_back(3000); Xmax.push_back(4400); Xtitle.push_back("M(D^{-}p#pi^{+}) MeV/c^{2}");  Savename.push_back("PVALLFit_DmPppi_M");
    vare.push_back("PVALLFit_DmPmpi_M");  Xbins.push_back(200); Xmin.push_back(3000); Xmax.push_back(4400); Xtitle.push_back("M(D^{-}#bar{p}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVALLFit_DmPmpi_M");
    vare.push_back("PVALLFit_DmPpPm_M");  Xbins.push_back(150); Xmin.push_back(3800); Xmax.push_back(5200); Xtitle.push_back("M(D^{-}p#bar{p}) MeV/c^{2}");  Savename.push_back("PVALLFit_DmPpPm_M");
    vare.push_back("PVALLFit_PpPmpi_M");  Xbins.push_back(150); Xmin.push_back(2000); Xmax.push_back(3500); Xtitle.push_back("M(p#bar{p}#pi) MeV/c^{2}");  Savename.push_back("PVALLFit_PpPmpi_M");

    // -- PVDFit
    // vare.push_back("PVDFit_PpPm_M");  Xbins.push_back(125); Xmin.push_back(1800); Xmax.push_back(3000); Xtitle.push_back("M(p#bar{p}) MeV/c^{2}");  Savename.push_back("PVDFit_PpPm_M");
    // vare.push_back("PVDFit_Pmpi_M");  Xbins.push_back(125); Xmin.push_back(1000); Xmax.push_back(2100); Xtitle.push_back("M(#bar{p}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVDFit_Pmpi_M");
    // vare.push_back("PVDFit_Pppi_M");  Xbins.push_back(125); Xmin.push_back(1000); Xmax.push_back(2400); Xtitle.push_back("M(p#pi^{+}) MeV/c^{2}");  Savename.push_back("PVDFit_Pppi_M");

    // vare.push_back("PVDFit_Dmpi_M");  Xbins.push_back(100); Xmin.push_back(2000); Xmax.push_back(3050); Xtitle.push_back("M(D^{-}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVDFit_Dmpi_M");
    // vare.push_back("PVDFit_DmPm_M");  Xbins.push_back(155); Xmin.push_back(2750); Xmax.push_back(4000); Xtitle.push_back("M(D^{-}#bar{p}) MeV/c^{2}");  Savename.push_back("PVDFit_DmPm_M");
    // vare.push_back("PVDFit_DmPp_M");  Xbins.push_back(125); Xmin.push_back(2750); Xmax.push_back(4100); Xtitle.push_back("M(D^{-}p) MeV/c^{2}");  Savename.push_back("PVDFit_DmPp_M");

    // vare.push_back("PVDFit_DmPppi_M");  Xbins.push_back(200); Xmin.push_back(3000); Xmax.push_back(4400); Xtitle.push_back("M(D^{-}p#pi^{+}) MeV/c^{2}");  Savename.push_back("PVDFit_DmPppi_M");
    // vare.push_back("PVDFit_DmPmpi_M");  Xbins.push_back(200); Xmin.push_back(3000); Xmax.push_back(4400); Xtitle.push_back("M(D^{-}#bar{p}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVDFit_DmPmpi_M");
    //  vare.push_back("PVDFit_DmPpPm_M");  Xbins.push_back(150); Xmin.push_back(3800); Xmax.push_back(5200); Xtitle.push_back("M(D^{-}p#bar{p}) MeV/c^{2}");  Savename.push_back("PVDFit_DmPpPm_M");

    // // -- PVFit
    // vare.push_back("PVFit_PpPm_M");  Xbins.push_back(125); Xmin.push_back(1800); Xmax.push_back(3000); Xtitle.push_back("M(p#bar{p}) MeV/c^{2}");  Savename.push_back("PVFit_PpPm_M");
    // vare.push_back("PVFit_Pmpi_M");  Xbins.push_back(125); Xmin.push_back(1000); Xmax.push_back(2100); Xtitle.push_back("M(#bar{p}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVFit_Pmpi_M");
    // vare.push_back("PVFit_Pppi_M");  Xbins.push_back(125); Xmin.push_back(1000); Xmax.push_back(2400); Xtitle.push_back("M(p#pi^{+}) MeV/c^{2}");  Savename.push_back("PVFit_Pppi_M");

    // vare.push_back("PVFit_Dmpi_M");  Xbins.push_back(100); Xmin.push_back(2000); Xmax.push_back(3050); Xtitle.push_back("M(D^{-}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVFit_Dmpi_M");
    // vare.push_back("PVFit_DmPm_M");  Xbins.push_back(155); Xmin.push_back(2750); Xmax.push_back(4000); Xtitle.push_back("M(D^{-}#bar{p}) MeV/c^{2}");  Savename.push_back("PVFit_DmPm_M");
    // vare.push_back("PVFit_DmPp_M");  Xbins.push_back(125); Xmin.push_back(2750); Xmax.push_back(4100); Xtitle.push_back("M(D^{-}p) MeV/c^{2}");  Savename.push_back("PVFit_DmPp_M");

    // vare.push_back("PVFit_DmPppi_M");  Xbins.push_back(200); Xmin.push_back(3000); Xmax.push_back(4400); Xtitle.push_back("M(D^{-}p#pi^{+}) MeV/c^{2}");  Savename.push_back("PVFit_DmPppi_M");
    // vare.push_back("PVFit_DmPmpi_M");  Xbins.push_back(200); Xmin.push_back(3000); Xmax.push_back(4400); Xtitle.push_back("M(D^{-}#bar{p}#pi^{+}) MeV/c^{2}");  Savename.push_back("PVFit_DmPmpi_M");
    // vare.push_back("PVFit_DmPpPm_M");  Xbins.push_back(150); Xmin.push_back(3800); Xmax.push_back(5200); Xtitle.push_back("M(D^{-}p#bar{p}) MeV/c^{2}");  Savename.push_back("PVFit_DmPpPm_M");


    TCanvas *can[50];
    TH1::SetDefaultSumw2();
    TH1F *th1f_data[50], *th1f_mc[50], *th1f_data_sb[50];
    TH1F *th1f_part[50];

    for(int i=0; i<vare.size(); i++){
        //if(i!=0) continue;
        //if(vare[i]!="log(Xim_L0pim_PT)") continue;
        // Add the BDT cut 
        TCut cut_b_mass;
        cut_b_mass = "B0_PVDFit_M>5246.82 && B0_PVDFit_M<5313.37";
        TCut cut_b_side;
        cut_b_side = "B0_PVDFit_M>5350 && B0_PVDFit_M<5600";

        TCut cut_d_mass;
        cut_d_mass = "B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1900";
        TCut cut_d_side;
        cut_d_side = "B0_PVFit_Dplus_M>1900 && B0_PVFit_Dplus_M<2000";

        // TCut cut_d2h_k_probnn  = "(K_ProbNNk*(1.-K_ProbNNpi)*(1.-K_ProbNNp))>0.2";
        // TCut cut_d2h_pi1_probnn = "(pi1_ProbNNpi*(1.-pi1_ProbNNk)*(1.-pi1_ProbNNp))>0.2";
        // TCut cut_d2h_pi2_probnn = "(pi2_ProbNNpi*(1.-pi2_ProbNNk)*(1.-pi2_ProbNNp))>0.2";
        // TCut cut_p1 = "(p_ProbNNp*(1.-p_ProbNNk)*(1.-p_ProbNNpi))>0.2";
        // TCut cut_p2 = "(p_ProbNNp*(1.-p_ProbNNk)*(1.-p_ProbNNpi))>0.2";
        // TCut cut_pi = "(pi_ProbNNpi*(1.-pi_ProbNNk)*(1.-pi_ProbNNp))>0.2";
        //TCut cut_sig = "MVA_BDTG>0.7&&Bp_M>5250&&Bp_M<5310&&(KSKp_M<1920||KSKp_M>2000)&&(KSKp_M<1600)";
        //TCut cut_sb  = "MVA_BDTG>0.7&&Bp_M>5400&&Bp_M<5600&&(KSKp_M<1920||KSKp_M>2000)&&(KSKp_M<1600)";
        //TCut cut_sig = "MVA_BDTG>0.7&&Bp_M>5250&&Bp_M<5310&&(KSKp_M>2000)";
        //TCut cut_sb  = "MVA_BDTG>0.7&&Bp_M>5400&&Bp_M<5600&&(KSKp_M>2000)";
        
        TCut cut_part= "1";
        // cut_part += cut_d2h_k_probnn;
        // cut_part += cut_d2h_pi1_probnn;
        // cut_part += cut_d2h_pi2_probnn;
        // cut_part += cut_p1;
        // cut_part += cut_p2;
        // cut_part += cut_pi;

        TCut cut_sig = "1";
        if(vare[i]!="B0_PVDFit_M")cut_sig += cut_b_mass;
        if(vare[i]!="B0_PVFit_Dplus_M")cut_sig += cut_d_mass;
        cut_sig += cut_part;

        TCut cut_b_sb  = "1";
        if(vare[i]!="B0_PVDFit_M")cut_b_sb += cut_b_side;
        if(vare[i]!="B0_PVFit_Dplus_M")cut_b_sb += cut_d_mass;
        cut_b_sb += cut_part;

        TCut cut_d_sb  = "1";
        if(vare[i]!="B0_PVDFit_M")cut_d_sb += cut_b_mass;
        if(vare[i]!="B0_PVFit_Dplus_M")cut_d_sb += cut_d_side;
        cut_d_sb += cut_part;


        TString draw_var= vare[i];
        cout << "-------------------------------------------------------------------" << endl;
        cout << "Loop num : " << i << endl;
        cout <<" starting draw : "<<draw_var<<endl;
        //cout<<cut_base.GetTitle()<<endl;
    
        Double_t xmin=Xmin[i], xmax=Xmax[i], xbins=Xbins[i]; TString xtitle =Xtitle[i];
        TString a("Events/("); char b[20];  sprintf(b, "%4.1f",(xmax-xmin)/xbins); TString c(" MeV/c^{2})"); TString ytitle = a + b + c;
        cout << "i = " << i << "; ytitle = " << ytitle << endl;

        char th1f_data_name[20];    sprintf(th1f_data_name,    "th1f_data_%1.0i",i+1);//data
        char th1f_part_name[20];    sprintf(th1f_part_name,    "th1f_part_%1.0i",i+1);//d side
        char th1f_data_sb_name[20]; sprintf(th1f_data_sb_name, "th1f_data_sb_%1.0i",i+1);//b side
        //char th1f_mc_name[20]; sprintf(th1f_mc_name, "th1f_mc_%1.0i",i+1);
        
        TH1::SetDefaultSumw2();
        th1f_data[i]   = new TH1F(th1f_data_name,   th1f_data_name,    xbins, xmin, xmax); th1f_data[i]->SetMinimum(0);
        th1f_part[i]   = new TH1F(th1f_part_name,   th1f_part_name,    xbins, xmin, xmax); th1f_part[i]->SetMinimum(0);
        th1f_data_sb[i]= new TH1F(th1f_data_sb_name,th1f_data_sb_name, xbins, xmin, xmax); th1f_data_sb[i]->SetMinimum(0);
        //th1f_mc[i]     = new TH1F(th1f_mc_name,     th1f_mc_name,      xbins, xmin, xmax); th1f_mc[i]->SetMinimum(0);
        
        lhcbStyle();
        gStyle->SetOptStat(0);
        gStyle->SetPadLeftMargin(0.16); // increase for colz plots
        gStyle->SetPadRightMargin(0.05); // increase for colz plots
        gStyle->SetPadBottomMargin(0.16);
        gStyle->SetPaintTextFormat("3.2f");

        can[i]=new TCanvas(th1f_data_name,th1f_data_name,800,600);

        can[i]->SetLeftMargin(0.12);
        can[i]->SetRightMargin(0.07);
        can[i]->SetTopMargin(0.04);
        can[i]->SetBottomMargin(0.14);
        can[i]->cd();
 
        tr_dt->Project(th1f_data_name,    draw_var, cut_sig);
        tr_dt->Project(th1f_part_name,    draw_var, cut_d_sb);
        tr_dt->Project(th1f_data_sb_name, draw_var, cut_b_sb);
        //tr_mc->Project(th1f_mc_name,      draw_var, cut_sig);
   
        th1f_data_sb[i]->Scale(1);
        th1f_part[i]->Scale(1);
        //th1f_mc[i]->Scale(0.6*th1f_data[i]->GetMaximum()/th1f_mc[i]->GetMaximum());

        double maxY = 1.55*std::max({ th1f_data[i]->GetMaximum(), th1f_data_sb[i]->GetMaximum() });
        
	// // Calculate dynamic x-axis range
	//     xmin = std::min({xmin, th1f_data[i]->GetXaxis()->GetXmin(), th1f_data_sb[i]->GetXaxis()->GetXmin(), th1f_part[i]->GetXaxis()->GetXmin()});
	//     xmax = std::max({xmax, th1f_data[i]->GetXaxis()->GetXmax(), th1f_data_sb[i]->GetXaxis()->GetXmax(), th1f_part[i]->GetXaxis()->GetXmax()});


		
        // th1f_mc[i]->Draw("HIST");
        // th1f_mc[i]->SetMaximum(maxY);
        // th1f_mc[i]->SetMinimum(0.);
        // th1f_mc[i]->SetLineWidth(2); th1f_mc[i]->SetLineColor(kBlue);
        // th1f_mc[i]->SetLineStyle(1); th1f_mc[i]->SetMarkerStyle(21);
        // th1f_mc[i]->GetXaxis()->SetTitle(xtitle);
        // th1f_mc[i]->GetXaxis()->SetTitleSize(0.05);
        // th1f_mc[i]->GetXaxis()->SetTitleOffset(1.1);
        // th1f_mc[i]->GetXaxis()->SetLabelSize(0.04);
        // th1f_mc[i]->GetYaxis()->SetTitle(ytitle);
        // th1f_mc[i]->GetYaxis()->CenterTitle(true);
        // th1f_mc[i]->GetYaxis()->SetTitleSize(0.04);
        // th1f_mc[i]->GetYaxis()->SetTitleOffset(1.4);
        // th1f_mc[i]->GetYaxis()->SetLabelSize(0.04);


        th1f_data[i]->Draw("EP");
        th1f_data[i]->SetMaximum(maxY);
        th1f_data[i]->SetMinimum(0.);
        th1f_data[i]->GetXaxis()->SetTitle(xtitle);
        th1f_data[i]->GetXaxis()->SetTitleSize(0.05);
        th1f_data[i]->GetXaxis()->SetTitleOffset(1.1);
        th1f_data[i]->GetXaxis()->SetLabelSize(0.04);
        th1f_data[i]->GetYaxis()->SetTitle(ytitle);
        th1f_data[i]->GetYaxis()->CenterTitle(true);
        th1f_data[i]->GetYaxis()->SetTitleSize(0.04);
        th1f_data[i]->GetYaxis()->SetTitleOffset(1.4);
        th1f_data[i]->GetYaxis()->SetLabelSize(0.04);

        th1f_data[i]->SetLineWidth(2); th1f_data[i]->SetLineColor(kBlack);
        th1f_data[i]->SetLineStyle(1); th1f_data[i]->SetMarkerStyle(21);

        th1f_part[i]->Draw("HIST,SAME");
        th1f_part[i]->SetFillColor(kGray); th1f_part[i]->SetFillStyle(3001);
        th1f_part[i]->SetLineWidth(0); th1f_part[i]->SetLineColor(kBlack);
        th1f_part[i]->SetLineStyle(1);

        th1f_data_sb[i]->Draw("HIST,SAME");
        th1f_data_sb[i]->SetLineWidth(2); th1f_data_sb[i]->SetLineColor(kBlack);
        th1f_data_sb[i]->SetLineStyle(1); th1f_data_sb[i]->SetMarkerStyle(21);

        TPaveText *pt = new TPaveText(0.6352254,0.7648402,0.8689482,0.8881279,"blNDC");
        pt->SetBorderSize(0);
        pt->SetFillColor(0);
        pt->SetFillStyle(0);    
        pt->SetLineColor(5);
        pt->SetTextSize(0.045);
        pt->AddText("Data");
        pt->AddText("B^{0}#rightarrow D^{-}p#bar{p}#pi^{+}");
        pt->Draw("sames");

        TLegend *leg = new TLegend(0.1340852,0.7152778,0.4636591,0.9357639,NULL,"brNDC");
        leg->AddEntry(th1f_data_name,"Data","EP");
        if(vare[i] == "B0_PVDFit_M") {leg->AddEntry(th1f_part_name,"D^{-} Sideband","F");}
        else if(vare[i] == "B0_PVFit_Dplus_M") {leg->AddEntry(th1f_data_sb_name,"B^{0} Sideband","L");}
        else
        {
            leg->AddEntry(th1f_part_name,"D^{-} Sideband","F");
            leg->AddEntry(th1f_data_sb_name,"B^{0} Sideband","L");
        }
        //leg->AddEntry(th1f_mc_name,  "MC","L");
        leg->SetFillColor(0);
        leg->SetFillStyle(0);
        leg->SetBorderSize(0);
        leg->SetTextSize(0.04);
        leg->Draw();


        TLatex *tex = new TLatex(0.2, 0.2, "Very Preliminary"); 
        tex->SetNDC(); 
        tex->SetTextColor(18); 
        tex->SetTextSize(0.15); 
        tex->SetTextAngle(26.15998);
        tex->SetLineWidth(2);
        tex->Draw("sames");

        can[i]->Update();

        TString savename = Savename[i];
        TString sv1_png;
        //sv1_png = "./plots/" + KS + "_Plot1D";
        sv1_png = "./plots/";
        //v1_png = "./plots/D2HH_" + KS + "/Plot1D_" + Year + "_" + KS + "_";
        TString sv2_png = ".png";
        TString can_path1= sv1_png + savename + sv2_png;
        if(SAVE==1) can[i]->SaveAs(can_path1);


    }
    
}
