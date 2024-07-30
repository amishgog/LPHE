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
#include "RooArgList.h"
#include "RooFitResult.h"
#include "RooChebychev.h"
#include "RooPolynomial.h"
#include "RooChi2Var.h"
//#include "RooMinuit.h"
#include "RooMsgService.h"
#include "RooPlot.h"
#include "RooVoigtian.h"
#include "RooGaussModel.h"
#include "RooFFTConvPdf.h"
#include "RooCrystalBall.h"
#include "RooProdPdf.h"
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
using namespace RooFit;

void fit2D()
{
    int SAVE = 1;

    //Add all the data to a TChain
    TChain *t_data = new TChain("DecayTree");
    t_data->Add("../../root/data_*_precut_add_BDT.root");

    TString cut = '1';

    // Define the mass and BDT cut (B mass and D mass)
    // cut = "B0_PVDFit_M>5250 && B0_PVDFit_M<5310 && B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1890 && BDT > -0.03";
    int xbins = 200;

    // Define the plotting range for the B and D mass which is also trated as a cut for CopyTree
    double_t Brange[2] = {5200, 5400};
    double_t Drange[2] = {1820, 1920};

    TString Bcut = Form("B0_PVDFit_M >%.2f && B0_PVDFit_M < %.2f", Brange[0],Brange[1]);
    TString Dcut = Form("B0_PVFit_Dplus_M > %.2f && B0_PVFit_Dplus_M < %2.f", Drange[0], Drange[1]);
    TString BDTcut = "BDT > -0.14";
    TCut cut_data;

    cut_data += Bcut;
    cut_data += Dcut;
    cut_data += BDTcut;

    cout << "Applied cut: " << cut_data << endl;

    // CopyTree with the B and D cut 
    TTree *t_data_cut = t_data->CopyTree(cut_data); 

    // cout << "\n\n\n\n\n\n" << t_data->GetEntries() << " " << t_data_cut->GetEntries() << " " << t_data_cut->GetEntries("B0_PVDFit_M>5260.23 && B0_PVDFit_M<5299.74 && B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1900") << "\n\n\n\n\n\n" << endl;

    // Create 2 RooRealVar 
    RooRealVar mB("B0_PVDFit_M", "B0_PVDFit_M", Brange[0], Brange[1]); // First observable
    RooRealVar mD("B0_PVFit_Dplus_M", "B0_PVFit_Dplus_M", Drange[0], Drange[1]); // Second observable

    // Setting the # of bins for FFT sampling for both the observables

    // Create the RooDataSet
    RooDataSet *data = new RooDataSet("data", "data", t_data_cut, RooArgSet(mB, mD));

// --- Creating the model for B ---

    // Signal Model
    // RooRealVar BGaussmean("BGaussmean", "BGaussmean", 0, -1, 1);
    RooRealVar BGausssigma("BGausssigma", "BGausssigma", 10., 0, 20);
    //RooGaussian BGauss("BGauss", "BGauss", mB, BGaussmean, BGausssigma);
    //RooGaussian Bsig("BGauss", "BGauss", mB, BGaussmean, BGausssigma);

    RooRealVar mean("BBWmean", "BBWmean", 5279., 5265., 5295.);
    RooRealVar BBWgamma("BBWgamma", "BBWgamma", 10., 0, 20);
    // RooBreitWigner BBW("BBW", "BBW", mB, BBWmean, BBWgamma);

    // Convolution of Breit Wigner and Gaussian
    //RooProdPdf Bsig("Bsig", "Bsig", RooArgList(BGauss, BBW));
    //RooFFTConvPdf Bsig("Bsig", "Bsig", mB, BGauss, BBW);
    RooVoigtian Bsig("Bsig", "Bsig", mB, mean, BBWgamma, BGausssigma);

    // Background model 
    RooRealVar Ba0("Ba0","Ba0", -1.5e-02, -1e02, 1e02);
    RooRealVar Ba1("Ba1","Ba1", -6.0e-02, -1e02, 1e02);

    RooChebychev Bbkg("Bbkg","Bbkg",mB, RooArgList(Ba0,Ba1));

// --- Creating the model for D ---
    
    // Signal Model
    RooRealVar DGaussmean("DGaussmean", "DGaussmean", 1869.66, 1850, 1890);
    RooRealVar DGausssigma("Dgausswidth", "Dgausswidth",10., 0, 20);
    RooGaussian DGauss("DGauss", "DGauss", mD, DGaussmean, DGausssigma);

    RooRealVar DBWmean("DBWmean", "DBWmean", 1869.66, 1850, 1890);
    RooRealVar DBWgamma("DBWgamma", "DBWgamma", 10., 0, 20);
    RooBreitWigner DBW("DBW", "DBW", mD, DBWmean, DBWgamma);

    // Product of Breit Wigner and a Gaussian
    RooProdPdf Dsig("Dsig", "Dsig", RooArgList(DGauss, DBW));
    //RooFFTConvPdf Dsig("Dsig", "Dsig", mD, DGauss, DBW);
    //RooVoigtian Dsig("Dsig", "Dsig", mD, DBWmean, DBWgamma, DGausssigma);

    // Background Model
    RooRealVar Da0("Da0","Da0", -1.5e-02, -1e02, 1e02);
    RooRealVar Da1("Da1","Da1", -6.0e-02, -1e02, 1e02);

    RooChebychev Dbkg("Dbkg", "Dbkg", mD, RooArgList(Da0, Da1)); 

// Taking the different products 
    // Estimating the # of different componenets 
    RooRealVar nDsigBsig("nDsigBsig", "n Dsig Bsig", 10000., 0, 100000);
    RooRealVar nDsigBbkg("nDsigBbkg", "n Dsig Bbkg", 10000., 0., 50000.);
    RooRealVar nDbkgBsig("nDbkgBsig", "n Dbkg Bsig", 5000., 0., 10000.);
    RooRealVar nDbkgBbkg("nDbkgBbkg", "n Dbkg Bbkg", 5000, 0., 10000.);

    RooProdPdf DsigBsig("DsigBsig", "Dsig Bsig", RooArgList(Dsig, Bsig));
    RooProdPdf DsigBbkg("DsigBbkg", "Dsig Bbkg", RooArgList(Dsig, Bbkg));
    RooProdPdf DbkgBsig("DbkgBsig", "Dbkg Bsig", RooArgList(Dbkg, Bsig));
    RooProdPdf DbkgBbkg("DbkgBbkg", "Dbkg Bbkg", RooArgList(Dbkg, Bbkg));

// Add the different cases to create the final model
    RooAddPdf model("model", "model", RooArgList(DsigBsig, DsigBbkg, DbkgBsig, DbkgBbkg), RooArgList(nDsigBsig, nDsigBbkg, nDbkgBsig, nDbkgBbkg));

// Plotting the fit 
    RooFitResult *fit_result = model.fitTo(*data, Save(), Extended(kTRUE));
    fit_result->Print("v");

// Calculation of the different yield values

    RooMsgService::instance().setGlobalKillBelow(RooFit::ERROR);

    // Set the range of integral calculation
    mB.setRange("SR", 5245.32, 5314.78);
    mD.setRange("SR", 1840, 1900);

    RooAbsReal *int_DsigBsig_mB = DsigBsig.createIntegral(RooArgSet(mB, mD), NormSet(RooArgSet(mB, mD)), Range("SR")); 
    RooAbsReal *int_DsigBbkg_mB = DsigBbkg.createIntegral(RooArgSet(mB, mD), NormSet(RooArgSet(mB, mD)), Range("SR")); 
    RooAbsReal *int_DbkgBsig_mB = DbkgBsig.createIntegral(RooArgSet(mB, mD), NormSet(RooArgSet(mB, mD)), Range("SR")); 
    RooAbsReal *int_DbkgBbkg_mB = DbkgBbkg.createIntegral(RooArgSet(mB, mD), NormSet(RooArgSet(mB, mD)), Range("SR"));

    cout << "Integral value for DsigBsig: " << int_DsigBsig_mB->getVal() << endl;
    cout << "Integral value for DsigBbkg: " << int_DsigBbkg_mB->getVal() << endl;
    cout << "Integral value for DbkgBsig: " << int_DbkgBsig_mB->getVal() << endl;
    cout << "Integral value for DbkgBbkg: " << int_DbkgBbkg_mB->getVal() << endl;

    //Calculate and print the yield and the yield error values
    int yieldDsigBsig = nDsigBsig.getVal() * int_DsigBsig_mB->getVal();
    int yieldDsigBbkg = nDsigBbkg.getVal() * int_DsigBbkg_mB->getVal();
    int yieldDbkgBsig = nDbkgBsig.getVal() * int_DbkgBsig_mB->getVal();
    int yieldDbkgBbkg = nDbkgBbkg.getVal() * int_DbkgBbkg_mB->getVal();

    int yieldDsigBsig_error = nDsigBsig.getError() * int_DsigBsig_mB->getVal();
    int yieldDsigBbkg_error = nDsigBbkg.getError() * int_DsigBbkg_mB->getVal();
    int yieldDbkgBsig_error = nDbkgBsig.getError() * int_DbkgBsig_mB->getVal();
    int yieldDbkgBbkg_error = nDbkgBbkg.getError() * int_DbkgBbkg_mB->getVal();

    cout << "DsigBsig yield: " << yieldDsigBsig << " +/- " << yieldDsigBsig_error << endl;
    cout << "DsigBbkg yield: " << yieldDsigBbkg << " +/- " << yieldDsigBbkg_error << endl;
    cout << "DbkgBsig yield: " << yieldDbkgBsig << " +/- " << yieldDbkgBsig_error << endl;
    cout << "DbkgBbkg yield: " << yieldDbkgBbkg << " +/- " << yieldDbkgBbkg_error << endl;

    cout << "Percentage of non-D contribution is: " << ((float)yieldDbkgBsig / (float)(yieldDbkgBsig + yieldDsigBsig)) * 100 <<  "%" << endl; 

    // Set some formatting stuff
    lhcbStyle(); 
    gStyle->SetOptStat(0);
    gStyle->SetTitleOffset(1.2,"Y");
    gStyle->SetTitleOffset(1.1,"Y");

    gStyle->SetPadLeftMargin(0.16); // increase for colz plots
    gStyle->SetPadRightMargin(0.05); // increase for colz plots
    gStyle->SetPadBottomMargin(0.16);
    gStyle->SetPaintTextFormat("3.2f");
    TString a_B("Events/");char b_B[20];sprintf(b_B, "(%1.1f",(Brange[1]-Brange[0])/xbins); TString c_B(" MeV/c^{2})"); TString ytitle_B = a_B + b_B + c_B;
    TString a_D("Events/");char b_D[20];sprintf(b_D, "(%1.1f",(Drange[1]-Drange[0])/xbins); TString c_D(" MeV/c^{2})"); TString ytitle_D = a_D + b_D + c_D;


// 1-D projection plots

    // --- B meson ---
    RooPlot *Bframe = new RooPlot("", "", mB, Brange[0], Brange[1], xbins);
    //RooPlot *Bframe = mB.frame(Title("BW (x) Gaussian"));
    data->plotOn(Bframe, Name("data"), MarkerSize(1.1));
    model.plotOn(Bframe, Name("model"), LineColor(kBlue), LineWidth(3));
    
    // Plot the 4 different components 
    model.plotOn(Bframe, Name("realD realB"), Components("DsigBsig"), LineColor(kRed), LineWidth(3), LineStyle(kDashed));
    model.plotOn(Bframe, Name("realD fakeB"), Components("DsigBbkg"), LineColor(kOrange), LineWidth(3), LineStyle(kDashed));
    model.plotOn(Bframe, Name("fakeD realB"), Components("DbkgBsig"), LineColor(kViolet), LineWidth(3), LineStyle(kDashed));
    model.plotOn(Bframe, Name("fakeD fakeB"), Components("DbkgBbkg"), LineColor(kGreen), LineWidth(3), LineStyle(kDashed));

    TCanvas *can1 = new TCanvas("can1","2D Fit B", 800,600);
    can1->Divide(1, 2);
    can1->SetLeftMargin(0.15);
    can1->SetRightMargin(0.04);
    can1->SetTopMargin(0.06);
    can1->SetBottomMargin(0.05);

    TCanvas *can2 = new TCanvas("can2","2D Fit D", 800,600);
    can2->Divide(1, 2);
    can2->SetLeftMargin(0.15);
    can2->SetRightMargin(0.04);
    can2->SetTopMargin(0.06);
    can2->SetBottomMargin(0.05);
    
    can1->cd(1);
    TVirtualPad* c1_1 = can1->GetPad(1);
    c1_1->SetPad(0,0.3,1,1);
    c1_1->SetRightMargin(0.05);
    c1_1->SetBottomMargin(0.0);
    c1_1->SetLogy(0);
    c1_1->SetFillColor(0);
    c1_1->SetFrameFillColor(0);

    // Draw the frame
    Bframe->Draw();
    Bframe->GetYaxis()->SetTitle(ytitle_B);
    Bframe->GetXaxis()->SetLabelOffset(0.02);
    Bframe->GetXaxis()->SetLabelSize(0.05);
    Bframe->GetXaxis()->SetTitleSize(0.06);
    Bframe->GetXaxis()->SetTitleOffset(1.1);
    Bframe->GetYaxis()->CenterTitle(true);
    Bframe->GetYaxis()->SetLabelOffset(0.015);
    Bframe->GetYaxis()->SetLabelSize(0.05);
    Bframe->GetYaxis()->SetTitleSize(0.06);
    Bframe->GetYaxis()->SetTitleOffset(1.20);

    // Draw a legend
    TLegend *Bleg = new TLegend(0.1804511,0.6319444,0.5488722,0.9131944,NULL,"brNDC");
    Bleg->AddEntry(Bframe->findObject("data"), "Data", "lep");
    Bleg->AddEntry(Bframe->findObject("model"), "Fit", "l");
    Bleg->AddEntry(Bframe->findObject("realD realB"), "D^{-} sig B^{0} sig",  "l");
    Bleg->AddEntry(Bframe->findObject("realD fakeB"), "D^{-} sig B^{0} bkg",  "l");
    Bleg->AddEntry(Bframe->findObject("fakeD realB"), "D^{-} bkg B^{0} sig",  "l");
    Bleg->AddEntry(Bframe->findObject("fakeD fakeB"), "D^{-} bkg B^{0} bkg", "l");
    Bleg->SetFillColor(0);
    Bleg->SetFillStyle(0);
    Bleg->SetBorderSize(0);
    Bleg->SetLineColor(1);  
    Bleg->SetLineStyle(1);
    Bleg->SetLineWidth(1);
    Bleg->SetTextSize(0.04);
    Bleg->Draw("SAME");
    
    TLatex *tex1 = new TLatex(0.3, 0.05, "Very Preliminary"); 
    tex1->SetNDC(); 
    tex1->SetTextColor(18); 
    tex1->SetTextSize(0.2); 
    tex1->SetTextAngle(30);
    tex1->SetLineWidth(2);
    tex1->Draw("sames");
    
    // Plot the pull histogram for the B meson
    RooHist *hBFitpull = Bframe->pullHist("data", "model");
    RooPlot *BFitpull = new RooPlot("", "", mB, Brange[0], Brange[1], xbins);
    hBFitpull->SetFillColor(1);
    BFitpull->addPlotable(hBFitpull, "BX");
    can1->cd(2);
    TVirtualPad* c1_2 = can1->GetPad(2);
    c1_2->SetPad(0,0,1,0.3);
    c1_2->SetRightMargin(0.05);
    c1_2->SetTopMargin(0.01);
    c1_2->SetBottomMargin(0.5);
    BFitpull->Draw();
    TAxis* xBFitpull = BFitpull->GetXaxis();
    TAxis* yBFitpull = BFitpull->GetYaxis();
    xBFitpull->SetTitleOffset(3.2);
    xBFitpull->SetTickLength(0.06);
    yBFitpull->SetNdivisions(504);
    BFitpull->SetXTitle("#it{M(D^{-}p#bar{p}#pi^{+})} [MeV/#it{c^{2}}]");
    BFitpull->GetXaxis()->CenterTitle(true);
    BFitpull->GetXaxis()->SetTitleOffset(1.);
    BFitpull->SetYTitle("Pull");
    BFitpull->GetYaxis()->CenterTitle(true);
    BFitpull->GetYaxis()->SetRangeUser(-5, 4);
    BFitpull->GetYaxis()->SetTitleOffset(0.3);
    BFitpull->GetXaxis()->SetTitleSize(0.15);
    BFitpull->GetXaxis()->SetLabelSize(0.15); 
    BFitpull->GetYaxis()->SetTitleSize(0.15);
    BFitpull->GetYaxis()->SetLabelSize(0.15);

    can1->Update();
    can1->Draw();
        
    // --- D meson ---
    RooPlot *Dframe = new RooPlot("", "", mD, Drange[0], Drange[1], xbins);
    //RooPlot *Dframe = mD.frame(Title("BW (x) Gaussian"));
    data->plotOn(Dframe, Name("data"), MarkerSize(1.1));
    model.plotOn(Dframe, Name("model"), LineColor(kBlue), LineWidth(3));
    
    // Plot the 4 different components 
    model.plotOn(Dframe, Name("realD realB"), Components("DsigBsig"), LineColor(kRed), LineWidth(3), LineStyle(kDashed));
    model.plotOn(Dframe, Name("realD fakeB"), Components("DsigBbkg"), LineColor(kOrange), LineWidth(3), LineStyle(kDashed));
    model.plotOn(Dframe, Name("fakeD realB"), Components("DbkgBsig"), LineColor(kViolet), LineWidth(3), LineStyle(kDashed));
    model.plotOn(Dframe, Name("fakeD fakeB"), Components("DbkgBbkg"), LineColor(kGreen), LineWidth(3), LineStyle(kDashed));
    
    can2->cd(1);
    TVirtualPad* c2_1 = can2->GetPad(1);
    c2_1->SetPad(0,0.3,1,1);
    c2_1->SetRightMargin(0.05);
    c2_1->SetBottomMargin(0.0);
    c2_1->SetLogy(0);
    c2_1->SetFillColor(0);
    c2_1->SetFrameFillColor(0);

    Dframe->Draw();
    Dframe->GetYaxis()->SetTitle(ytitle_D);
    Dframe->GetXaxis()->SetLabelOffset(0.02);
    Dframe->GetXaxis()->SetLabelSize(0.05);
    Dframe->GetXaxis()->SetTitleSize(0.06);
    Dframe->GetXaxis()->SetTitleOffset(1.1);
    Dframe->GetYaxis()->CenterTitle(true);
    Dframe->GetYaxis()->SetLabelOffset(0.015);
    Dframe->GetYaxis()->SetLabelSize(0.05);
    Dframe->GetYaxis()->SetTitleSize(0.06);
    Dframe->GetYaxis()->SetTitleOffset(1.20);

    TLegend *Dleg = new TLegend(0.1804511,0.6319444,0.5488722,0.9131944,NULL,"brNDC");
    Dleg->AddEntry(Dframe->findObject("data"), "Data", "lep");
    Dleg->AddEntry(Dframe->findObject("model"), "Fit", "l");
    Dleg->AddEntry(Dframe->findObject("realD realB"), "D^{-} sig B^{0} sig",  "l");
    Dleg->AddEntry(Dframe->findObject("realD fakeB"), "D^{-} sig B^{0} bkg",  "l");
    Dleg->AddEntry(Dframe->findObject("fakeD realB"), "D^{-} bkg B^{0} sig",  "l");
    Dleg->AddEntry(Dframe->findObject("fakeD fakeB"), "D^{-} bkg B^{0} bkg", "l");
    Dleg->SetFillColor(0);
    Dleg->SetFillStyle(0);
    Dleg->SetBorderSize(0);
    Dleg->SetLineColor(1);  
    Dleg->SetLineStyle(1);
    Dleg->SetLineWidth(1);
    Dleg->SetTextSize(0.04);
    Dleg->Draw("SAME");

    TLatex *tex2 = new TLatex(0.3, 0.05, "Very Preliminary"); 
    tex2->SetNDC(); 
    tex2->SetTextColor(18); 
    tex2->SetTextSize(0.2); 
    tex2->SetTextAngle(30);
    tex2->SetLineWidth(2);
    tex2->Draw("sames");

    // Plot the pull histogram for D meson
    RooHist *hDFitpull = Dframe->pullHist("data", "model");
    RooPlot *DFitpull = new RooPlot("", "", mD, Drange[0], Drange[1], xbins);
    hDFitpull->SetFillColor(1);
    DFitpull->addPlotable(hDFitpull, "BX");
    can2->cd(2);
    TVirtualPad* c2_2 = can2->GetPad(2);
    c2_2->SetPad(0,0,1,0.3);
    c2_2->SetRightMargin(0.05);
    c2_2->SetTopMargin(0.01);
    c2_2->SetBottomMargin(0.5);
    DFitpull->Draw();
    TAxis* xDFitpull = DFitpull->GetXaxis();
    TAxis* yDFitpull = DFitpull->GetYaxis();
    xDFitpull->SetTitleOffset(3.2);
    xDFitpull->SetTickLength(0.06);
    yDFitpull->SetNdivisions(504);
    DFitpull->SetXTitle("#it{M(D^{-})} [MeV/#it{c^{2}}]");
    DFitpull->GetXaxis()->CenterTitle(true);
    DFitpull->GetXaxis()->SetTitleOffset(1.);
    DFitpull->SetYTitle("Pull");
    DFitpull->GetYaxis()->CenterTitle(true);
    DFitpull->GetYaxis()->SetRangeUser(-5, 4);
    DFitpull->GetYaxis()->SetTitleOffset(0.3);
    DFitpull->GetXaxis()->SetTitleSize(0.15);
    DFitpull->GetXaxis()->SetLabelSize(0.15); 
    DFitpull->GetYaxis()->SetTitleSize(0.15);
    DFitpull->GetYaxis()->SetLabelSize(0.15);

    can2->Update();
    can2->Draw();

    // Save the plots
    TString can1_path = "../plots/2D_fit_B.png";
    TString can2_path = "../plots/2D_fit_D.png";
    if(SAVE==1)
    {
        can1->SaveAs(can1_path);
        can2->SaveAs(can2_path);
    }
}

