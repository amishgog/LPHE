#include "TStyle.h"
#include "TROOT.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TFile.h"
#include "TVector3.h"
#include "TH2F.h"
#include "TCut.h"
#include "TSystem.h"
#include "RooFit.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooHist.h"
#include "RooHistPdf.h"
#include "RooArgSet.h"
#include "RooFitResult.h"
#include "RooChebychev.h"
#include "RooPolynomial.h"
#include "RooChi2Var.h"
//#include "RooMinuit.h"
#include "RooPlot.h"
#include "RooGaussModel.h"
#include "RooVoigtian.h"
#include "RooBifurGauss.h"
#include "RooBukinPdf.h"
#include "RooFFTConvPdf.h"
#include "RooNumConvPdf.h"
#include "RooKeysPdf.h"
#include "RooAddPdf.h"
#include "RooExtendPdf.h"
#include "iostream"
#include "/home/yunxuan/useful/lhcbStyle.h"
using namespace std;
using namespace RooFit ;

void fitB0()
{
    int SAVE = 1;
    double max = 3e03;

    TChain *t_data = new TChain("DecayTree");
    t_data->Add("../root/data_*_precut_add.root");

    int xbins=200;
    double PVDFit_DmPpPmpi_M_cut[2]= {5200,5400};
    double PVFit_Dm_M_cut[2] = {1840, 1900};

    RooRealVar *PVFit_Dm_M = new RooRealVar("B0_PVFit_Dplus_M", "M(D^{-})", PVFit_Dm_M_cut[0], PVFit_Dm_M_cut[1], "MeV/c^{2}");
    RooRealVar *PVDFit_DmPpPmpi_M = new RooRealVar("B0_PVDFit_M","M(D^{-}p#bar{p}#pi^{+})", PVDFit_DmPpPmpi_M_cut[0], PVDFit_DmPpPmpi_M_cut[1], "MeV/c^{2}");

    // --- unbin data
    RooDataSet *data = new RooDataSet("data","data",RooArgSet(*PVDFit_DmPpPmpi_M, *PVFit_Dm_M), Import(*t_data));

    // --- bin data
    // TH1F* h1 = new TH1F("h1", "h1", xbins, PVDFit_DmPpPmpi_M_cut[0], PVDFit_DmPpPmpi_M_cut[1]);
    // t_data->Project("h1", "PVDFit_DmPpPmpi_M", cut);
    // RooDataHist *data = new RooDataHist("dataHist", "data", *PVDFit_DmPpPmpi_M, h1);
    //h1->Draw();
    //data->Print("v");

    // // --- Build Gaussian PDFs ---
    // RooRealVar* mean   = new RooRealVar("mean",   "mean  of gauss",  5279, 5265, 5295);
    // RooRealVar* sigma1 = new RooRealVar("sigma1", "width of gauss1", 10.,    0, 30);
    // RooRealVar* sigma2 = new RooRealVar("sigma2", "width of gauss2", 6.0,    0, 20);
    // RooRealVar* frac   = new RooRealVar("fraction", "fraction", 0.5, 0, 1.0);
    // RooGaussian* gaus1 = new RooGaussian("gaus1","Signal component 1",  *PVDFit_DmPpPmpi_M, *mean, *sigma1) ;
    // RooGaussian* gaus2 = new RooGaussian("gaus2","Signal component 2",  *PVDFit_DmPpPmpi_M, *mean, *sigma2) ;
    // //RooAddModel* sigpdf= new RooAddModel("sigpdf", "title", RooArgList(*gaus1, *gaus2), *frac);
    // RooGaussian* sigpdf = new RooGaussian("sigpdf","Signal component 1",  *PVDFit_DmPpPmpi_M, *mean, *sigma1) ;

    // // --- Build Liner PDFs ---
    // RooRealVar a0("a0","a0", -1.5e-02, -1e02, 1e02);
    // RooRealVar a1("a1","a1", -6.0e-02, -1e02, 1e02);
    // RooRealVar a2("a2","a2", -3.0e-03, -1e02, 1e02);
    // //RooPolynomial* bkgpdf = new RooPolyno1ial("bkgpdf", "", *PVDFit_DmPpPmpi_M, RooArgList(a0, a1, a2), 0);
    // RooChebychev* bkgpdf = new RooChebychev("bkgpdf","",*PVDFit_DmPpPmpi_M, RooArgList(a0,a1,a2));

    RooRealVar *meanGauss   = new RooRealVar("mean", "mean  of gauss", 5279, 5265, 5295);
    RooRealVar *sigmaGauss = new RooRealVar("sigma1","width of gauss1", 10., 0., 30.);
    RooRealVar *gammaBW = new RooRealVar("gammaBW", "width of the BW", 10., 0., 30.);

    // //DCB parameters
    // RooRealVar mu("mu","mu",5279,5265,5295);
    // RooRealVar width("width","width",10., 0, 30);
    // RooRealVar a1("a1","a1",par[3], 0., 100.);
    // RooRealVar p1("p1","p1",par[4],0.,100.);
    // RooRealVar a2("a2","a2",par[5],0.,100.);
    // RooRealVar p2("p2","p2",par[6],0.,100.);    

    // RooCrystalBall dcbPDF("dcbPDF", "DoubleSidedCB", *PVDFit_DmPpPmpi_M, )

    // BW parameters
    // RooRealVar *mu = new RooRealVar("mean", "mean of BW", 5279, 5265, 5295);
    // RooFFTConvPdf sigpdf("sigpdf", "Signal Component 1*2", *PVDFit_DmPpPmpi_M, *Gausspdf, *BWpdf);

    RooVoigtian *sigpdf = new RooVoigtian("sigpdf", "Signal Component 1*2", *PVDFit_DmPpPmpi_M, *meanGauss, *gammaBW, *sigmaGauss);

    // --- Build Liner PDFs ---
    RooRealVar a0("a0","a0", -1.5e-02, -1e02, 1e02);
    RooRealVar a1("a1","a1", -6.0e-02, -1e02, 1e02);
    RooRealVar a2("a2","a2", -3.0e-03, -1e02, 1e02);
    //RooPolynomial* bkgpdf = new RooPolyno1ial("bkgpdf", "", *PVDFit_DmPpPmpi_M, RooArgList(a0, a1, a2), 0);
    RooChebychev *bkgpdf = new RooChebychev("bkgpdf","",*PVDFit_DmPpPmpi_M, RooArgList(a0,a1,a2));


    // --- Total PDFs ---
    RooRealVar nsig("nsig", "", 4e4, 0, 1e6);
    RooRealVar nbkg("nbkg", "", 6e4 , 0, 1e7);
    RooArgList shapes, yields;
    shapes.add(*sigpdf);  yields.add(nsig);
    shapes.add(*bkgpdf);  yields.add(nbkg);

    RooAddPdf *model=new RooAddPdf("model", "model",  shapes, yields);

    RooFitResult* result = model->fitTo(*data, Extended(kTRUE), Save(kTRUE)) ;
    result->Print("v");

    // --- Print Doubl Gauss
    // Double_t v_f  = frac->getVal(),   e_f  = frac->getError();
    // Double_t v_s0 = sigma1->getVal(), e_s0 = sigma1->getError();
    // Double_t v_s1 = sigma2->getVal(), e_s1 = sigma2->getError();
    // Double_t v_m0 = mean->getVal(),   e_m0 = mean->getError();
    // Double_t v_m1 = mean->getVal(),   e_m1 = mean->getError();

    // Double_t Mean     = v_f*v_m0 + (1-v_f)*v_m1;
    // Double_t Mean_err = sqrt( pow(v_f*e_m0, 2)
    //                         + pow((1-v_f)*e_m1, 2)
    //                         + pow((v_m0-v_m1)*e_f, 2)
    //                         );

    // Double_t Sigma    = sqrt( v_f*pow(v_s0, 2)
    //                         + (1-v_f)*pow(v_s1, 2)
    //                         + v_f*(1-v_f)*pow(v_m0-v_m1, 2)
    //                         );
    // Double_t Sigma_err = (1./(2.*Sigma)) *
    //                      sqrt( pow(2.*v_f*v_s0*e_s0, 2)
    //                          + pow(2.*(1-v_f)*v_s1*e_s1, 2)
    //                          + pow((v_s0*v_s0 - v_s1*v_s1 + (1.-2.*v_f)*(v_m0-v_m1)*(v_m0-v_m1) )*e_f, 2)
    //                          + pow(2.*v_f*(1-v_f)*(v_m0-v_m1), 2) * (e_m0*e_m0 + e_m1*e_m1)
                            //  );


    cout << "Mean  = " << meanGauss->getVal()  << "+/-" << meanGauss->getError()  << endl;
    cout << "Sigma = " << sigmaGauss->getVal() << "+/-" << sigmaGauss->getError() << endl;

    Double_t mean_max = meanGauss->getVal() + 5.0*sigmaGauss->getVal();
    Double_t mean_min = meanGauss->getVal() - 5.0*sigmaGauss->getVal();
    cout << "Mean(+/- 5.0*Sigma) = " << mean_min << ", " << mean_max << endl;

    PVDFit_DmPpPmpi_M->setRange("signal", mean_min, mean_max);


    RooAbsReal* int_bkg_tot_region = bkgpdf->createIntegral(*PVDFit_DmPpPmpi_M,NormSet(*PVDFit_DmPpPmpi_M)) ;
    RooAbsReal* int_bkg_sig_region = bkgpdf->createIntegral(*PVDFit_DmPpPmpi_M,NormSet(*PVDFit_DmPpPmpi_M),Range("signal"));
    cout << "int BKG tot, sig = " << int_bkg_tot_region->getVal() << ", " << int_bkg_sig_region->getVal() << endl;
    

    RooAbsReal* int_sig_tot_region = sigpdf->createIntegral(*PVDFit_DmPpPmpi_M,NormSet(*PVDFit_DmPpPmpi_M)) ;
    RooAbsReal* int_sig_sig_region = sigpdf->createIntegral(*PVDFit_DmPpPmpi_M,NormSet(*PVDFit_DmPpPmpi_M),Range("signal")) ;
    cout << "int SIG tot, sig = " << int_sig_tot_region->getVal() << ", " << int_sig_sig_region->getVal() << endl;

    Double_t num_bkg_comb     = int_bkg_sig_region->getVal()/int_bkg_tot_region->getVal()*nbkg.getVal();
    Double_t num_bkg_comb_err = int_bkg_sig_region->getVal()/int_bkg_tot_region->getVal()*nbkg.getError();
    cout<<"background events in signal region "<<num_bkg_comb<<" +/- "<<num_bkg_comb_err<<endl;

    // Double_t num_bkg_sb   = int_bkg_sb_region->getVal()/int_bkg_tot_region->getVal()*nbkg.getVal();
    // Double_t num_bkg_sb_err = int_bkg_sb_region->getVal()/int_bkg_tot_region->getVal()*nbkg.getError();
    // cout<<"background events in sideband region "<<num_bkg_sb<<" +/- "<<num_bkg_sb_err<<endl;

    Double_t num_sig_comb     = int_sig_sig_region->getVal()/int_sig_tot_region->getVal()*nsig.getVal();
    Double_t num_sig_comb_err = int_sig_sig_region->getVal()/int_sig_tot_region->getVal()*nsig.getError();
    cout<<"signal events in signal region "<<num_sig_comb<<" +/- "<<num_sig_comb_err<<endl;

    cout<<"Purity in signal range = " << 100.*(num_sig_comb)/(num_sig_comb+num_bkg_comb) << "%" << endl;


    //cout << "edm: " << m_fitres->edm() <<  "   minNll: " << m_fitres->minNll() << "   " << endl;
    // to draw
    lhcbStyle(); 
    gStyle->SetOptStat(0);
    gStyle->SetTitleOffset(1.2,"Y");
    gStyle->SetTitleOffset(1.1,"Y");

    gStyle->SetPadLeftMargin(0.16); // increase for colz plots
    gStyle->SetPadRightMargin(0.05); // increase for colz plots
    gStyle->SetPadBottomMargin(0.16);
    gStyle->SetPaintTextFormat("3.2f");

    TCanvas *can=new TCanvas("can","fit side band", 800,600);
    can->Divide(1, 2);
    can->SetLeftMargin(0.15);
    can->SetRightMargin(0.04);
    can->SetTopMargin(0.06);
    can->SetBottomMargin(0.15);

        //TPad *pad1 = new TPad("pad1","",0.0,0.15,1.00,1.00);
        //TPad *pad2 = new TPad("pad2","",0.0,0.00,1.00,0.15);
        //pad1->Draw();
        //pad2->Draw();
        //
    //pad1->cd();

    //Draw WS
    TString a("Events/");char b[20];sprintf(b, "(%1.1f",(PVDFit_DmPpPmpi_M_cut[1]-PVDFit_DmPpPmpi_M_cut[0])/xbins); TString c(" MeV/c^{2})"); TString ytitle = a + b + c;

    RooPlot *frame = PVDFit_DmPpPmpi_M->frame(PVDFit_DmPpPmpi_M_cut[0], PVDFit_DmPpPmpi_M_cut[1], xbins);
    data->plotOn(frame, RooFit::Name("exp"), MarkerSize(1.1));
    model->plotOn(frame,RooFit::Name("model"), LineColor(kBlack), LineWidth(3), LineStyle(1));
    model->plotOn(frame,RooFit::Name("sig"), Components(RooArgSet(*sigpdf)),LineColor(kRed),  LineWidth(3),LineStyle(1));
    model->plotOn(frame,RooFit::Name("bkg"), Components(RooArgSet(*bkgpdf)),LineColor(kBlue), LineWidth(3),LineStyle(9));
    data->plotOn(frame, RooFit::Name("exp"), MarkerSize(1.1));

    // Make the pull histogram
    RooHist *hFitpull = frame->pullHist("exp", "model");
    RooPlot *Fitpull = new RooPlot("", "", *PVDFit_DmPpPmpi_M, PVDFit_DmPpPmpi_M_cut[0], PVDFit_DmPpPmpi_M_cut[1], xbins);
    hFitpull->SetFillColor(1);
    Fitpull->addPlotable(hFitpull, "BX");
    can->cd(2);
    TVirtualPad* c2 = can->GetPad(2);
    c2->SetPad(0,0,1,0.3);
    c2->SetRightMargin(0.05);
    c2->SetTopMargin(0.01);
    c2->SetBottomMargin(0.5);
    Fitpull->Draw();
    TAxis* xFitpull = Fitpull->GetXaxis();
    TAxis* yFitpull = Fitpull->GetYaxis();
    xFitpull->SetTitleOffset(3.2);
    xFitpull->SetTickLength(0.06);
    yFitpull->SetNdivisions(504);
    Fitpull->SetXTitle("#it{M(D^{-}p#bar{p}#pi^{+})} [MeV/#it{c^{2}}]");
    Fitpull->GetXaxis()->CenterTitle(true);
    Fitpull->GetXaxis()->SetTitleOffset(1.);
    Fitpull->SetYTitle("Pull");
    Fitpull->GetYaxis()->CenterTitle(true);
    Fitpull->GetYaxis()->SetRangeUser(-5, 4);
    Fitpull->GetYaxis()->SetTitleOffset(0.3);
    Fitpull->GetXaxis()->SetTitleSize(0.15);
    Fitpull->GetXaxis()->SetLabelSize(0.15); 
    Fitpull->GetYaxis()->SetTitleSize(0.15);
    Fitpull->GetYaxis()->SetLabelSize(0.15);

    can->cd(1);
    TVirtualPad* c1 = can->GetPad(1);
    c1->SetPad(0,0.3,1,1);
    c1->SetRightMargin(0.05);
    c1->SetBottomMargin(0.0);
    c1->SetLogy(0);
    c1->SetFillColor(0);
    c1->SetFrameFillColor(0);
    frame->Draw();
    frame->SetMaximum(max);
    frame->GetXaxis()->SetTitle("M(D^{-}p#bar{p}#pi^{+}) (MeV/c^{2})");
    frame->GetYaxis()->SetTitle(ytitle);
    frame->GetXaxis()->SetLabelOffset(0.02);
    frame->GetXaxis()->SetLabelSize(0.05);
    frame->GetXaxis()->SetTitleSize(0.06);
    frame->GetXaxis()->SetTitleOffset(1.1);
    frame->GetYaxis()->CenterTitle(true);
    frame->GetYaxis()->SetLabelOffset(0.015);
    frame->GetYaxis()->SetLabelSize(0.05);
    frame->GetYaxis()->SetTitleSize(0.06);
    frame->GetYaxis()->SetTitleOffset(1.20);

    TLegend *leg = new TLegend(0.1804511,0.6319444,0.5488722,0.9131944,NULL,"brNDC");
    leg->AddEntry(frame->findObject("exp"),   "Data",   "lep");
    leg->AddEntry(frame->findObject("model"),   "Fit result",   "l");
    leg->AddEntry(frame->findObject("sig"),     "Signal",       "l");
    leg->AddEntry(frame->findObject("bkg"),     "Background",   "l");
    leg->SetFillColor(0);
    leg->SetFillStyle(0);
    leg->SetBorderSize(0);
    leg->SetLineColor(1);
    leg->SetLineStyle(1);
    leg->SetLineWidth(1);
    leg->SetTextSize(0.05);
    leg->Draw("SAME");

    TLine link;
    link.SetLineWidth(2);
    link.SetLineColor(kBlue);
    link.SetLineStyle(2);
    link.DrawLine(mean_min,0,mean_min,max);
    link.DrawLine(mean_max,0,mean_max,max);

    TPaveText *pt = new TPaveText(0.6428571,0.7673611,0.8847118,0.9114583,"blNDC");
    pt->SetBorderSize(0);
    pt->SetFillColor(0);
    pt->SetFillStyle(0);
    pt->SetTextSize(0.06);
    pt->SetLineColor(5);
    pt->AddText("LHCb run 1 & 2");
    pt->AddText("B^{0}#rightarrow D^{-}p#bar{p}#pi^{+}");
    pt->Draw("SAME");

    TLatex *tex = new TLatex(0.3, 0.05, "Very Preliminary"); 
    tex->SetNDC(); 
    tex->SetTextColor(18); 
    tex->SetTextSize(0.2); 
    tex->SetTextAngle(30);
    tex->SetLineWidth(2);
    tex->Draw("sames");


    //pad2->cd();

        //RooHist *hpull = frame->pullHist();
    //RooPlot *frame2 = PVDFit_DmPpPmpi_M->frame(PVDFit_DmPpPmpi_M_cut[0], PVDFit_DmPpPmpi_M_cut[1], xbins);
        //frame2->addPlotable(hpull,"P") ;
        //frame2->Draw() ;
        //frame2->GetYaxis()->SetTitle("pull");
        //frame2->SetMinimum(-6);
        //frame2->SetMaximum(6);
    //frame2->GetXaxis()->SetNdivisions(4);
    //frame2->GetYaxis()->SetNdivisions(4);
        //frame2->GetXaxis()->SetLabelSize(0.0);
        //frame2->GetXaxis()->SetTitleSize(0.0);
        //frame2->GetYaxis()->SetLabelSize(0.3);
        //frame2->GetYaxis()->SetTitleSize(0.4);
        //frame2->GetYaxis()->SetTitleOffset(0.15);
        //frame2->GetYaxis()->CenterTitle();
    //TLine * line1 = new TLine(PVDFit_DmPpPmpi_M_cut[0], 3.00,PVDFit_DmPpPmpi_M_cut[1], 3.00); line1->SetLineWidth(2); line1->SetLineColor(2); line1->Draw("same");
        //TLine * line2 = new TLine(PVDFit_DmPpPmpi_M_cut[0],-3.00,PVDFit_DmPpPmpi_M_cut[1],-3.00); line2->SetLineWidth(2); line2->SetLineColor(2); line2->Draw("same");


    can->Update();

    TString can_path= "./plots/Plot_fit_B0.png";
    if(SAVE==1) can->SaveAs(can_path);



}
