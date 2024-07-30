#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "ROOT/RDataFrame.hxx"
#include "TCut.h"
#include "TTree.h"
#include <iostream>


void make_PIDCorr_plots()
{
	TChain *chain = new TChain("DecayTree");
	chain->Add("../root/mc_2018_MD_PIDCorr.root");

	TCanvas *c = new TCanvas("c1", "c1", 800, 600);	

	chain->Draw("p_ProbNNp>>hist1");
	chain->Draw("p_ProbNNp_corr>>hist2");

	TH1F *hist1 = (TH1F*)gDirectory->Get("hist1");
	TH1F *hist2 = (TH1F*)gDirectory->Get("hist2");
	
	hist1->SetStats(0);
	hist2->SetStats(0);
	hist1->SetTitle("PIDCalib correction");
	hist1->SetLineColor(kRed);
	hist2->SetLineColor(kBlue);
	hist1->Draw();
	hist2->Draw("SAME");
	
	TLegend *legend = new TLegend(0.2, 0.7, 0.4, 0.9);
	legend->AddEntry(hist1, "before PID corr", "l");
	legend->AddEntry(hist2, "after PID corr", "l");
	legend->Draw("SAME");

	TLatex *tex = new TLatex(0.2, 0.2, "Very Preliminary"); 
	tex->SetNDC(); 
	tex->SetTextColor(18); 
	tex->SetTextSize(0.15); 
	tex->SetTextAngle(26.15998);
	tex->SetLineWidth(2);
	tex->Draw("sames");
		
	c->Update();

	c->SaveAs("../PIDCorrplots/p.png");
}
