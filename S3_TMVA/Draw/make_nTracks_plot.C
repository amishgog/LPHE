#include "TCanvas.h"
#include <math.h>
#include <iostream>
#include "TH1F.h"
#include <TH2.h>
#include <TStyle.h>
#include "ROOT/RDataFrame.hxx"
#include "TCut.h"
#include "TTree.h"
#include "TLatex.h"
#include <iostream>
#include "/home/yunxuan/useful/lhcbStyle.h"


using namespace std;

void make_nTracks_plot()
{
	TChain *t_data = new TChain ("DecayTree");
	TChain *t_mc = new TChain ("DecayTree");

	t_data->Add("../root/data_*BDT.root");
	t_mc->Add("../root/mc_*BDT.root");

	TCanvas *c = new TCanvas("c1", "c1", 800, 600);

	t_data->Draw("nTracks >> hist1", "BDT > -0.03 && B0_PVDFit_M > 5247.06 && B0_PVDFit_M < 5312.91 && B0_PVFit_Dplus_M > 1840 && B0_PVFit_Dplus_M < 1900");
	t_mc->Draw("nTracks >> hist2", "BDT > -0.03 && B0_PVDFit_M > 5247.06 && B0_PVDFit_M < 5312.91 && B0_PVFit_Dplus_M > 1840 && B0_PVFit_Dplus_M < 1900");

	TH1F *hist1 = (TH1F*)gDirectory->Get("hist1");
	TH1F *hist2 = (TH1F*)gDirectory->Get("hist2");

	hist1->SetStats(0);
	hist2->SetStats(0);
	hist1->SetTitle("nTracks comparison Data vs MC");
	hist1->SetLineColor(kRed);
	hist2->SetLineColor(kBlue);
	hist2->Scale(12);
	hist2->Sumw2(0);
	hist1->Draw();
	hist2->Draw("SAME");


	TLegend *legend = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend->AddEntry(hist1, "Data nTracks", "l");
	legend->AddEntry(hist2, "MC nTracks", "l");
	legend->Draw("SAME");

	c->Update();

	c->SaveAs("./plots/PIDCorr.png");

}

