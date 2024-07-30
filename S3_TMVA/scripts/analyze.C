#include "TChain.h"
#include "TCanvas.h"
#include "TH1.h"
#include "/home/yunxuan/useful/lhcbStyle.h"

void analyze() {
    // Create a TChain and add files to it
    TChain *chain = new TChain("DecayTree");
    chain->Add("../root/data*_BDT.root");

    // TCanvas *c1 = new TCanvas("c1", "2D plot with B sb and D sig", 800, 600);
    TCanvas *c2 = new TCanvas("c2", "2D plot with B and D sig", 800, 600);

    // Draw the histogram with the specified cuts
    // c1->cd();
    // chain->Draw("PVALLFit_DmPm_M:PVALLFit_Pppi_M>>hist1", " B0_PVDFit_M>5350 && B0_PVDFit_M<5600 && B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1890");

    c2->cd();
    chain->Draw("PVALLFit_DmPm_M:PVALLFit_Pppi_M>>hist2(100, 1000, 2500, 100, 2700, 4200)", " BDT > 0.25 && B0_PVDFit_M>5250 && B0_PVDFit_M<5310 && B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1890");

    // Get the histogram and set the x-axis range
    // TH2F *hist1 = (TH2F*)gDirectory->Get("hist1");
    // if (hist1)
    // {
    //     hist1->SetStats(0);
    //     hist1->SetTitle("2D plot of D pbar and p pi");
    //     hist1->SetXTitle("M(p pi)");
    //     hist1->SetYTitle("M(D pbar)");
    //     hist1->GetXaxis()->SetTitleSize(0.05);
    //     hist1->GetYaxis()->SetTitleSize(0.05);
    //     hist1->GetXaxis()->SetLabelSize(0.04);
    //     hist1->GetYaxis()->SetLabelSize(0.04); 
    //     hist1->Draw("COLZ");
    // }

    TH2F *hist2 = (TH2F*)gDirectory->Get("hist2");
    if (hist2)
    {
        hist2->SetStats(0);
        hist2->SetTitle("2D plot of D pbar and p pi");
        hist2->SetXTitle("M(p pi)");
        hist2->SetYTitle("M(D pbar)");
        hist2->GetXaxis()->SetTitleSize(0.05);
        hist2->GetYaxis()->SetTitleSize(0.05);
        hist2->GetXaxis()->SetLabelSize(0.04);
        hist2->GetYaxis()->SetLabelSize(0.04); 
        hist2->Draw("COLZ");
    }
    c2->Update();

}
