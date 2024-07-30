#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TLorentzVector.h"
#include "TSystem.h"
#include "TCut.h"
#include "TChain.h"
#include "fstream"
#include "iostream"
#include <iomanip>

using namespace std;
typedef std::vector<int> Vint;
typedef std::vector<double> Vdouble;

void copytree_presel(TString Input, TString Output, TString KS, Int_t IFMC){

    TChain *tr_data = new TChain("DecayTree");
    tr_data->Add(Input);

    // --- Trigger
    // TCut cut_l0 = "(B0_L0Global_TIS||B0_L0HadronDecision_TOS )";//B0_Hlt1TrackAllL0Decision_TOS
    // TCut cut_h1 = "(B0_Hlt1TrackMVADecision_TOS||B0_Hlt1TwoTrackMVADecision_TOS)"; 
    // TCut cut_h2 = "( B0_Hlt2Topo2BodyBBDTDecision_TOS||B0_Hlt2Topo3BodyBBDTDecision_TOS||B0_Hlt2Topo4BodyBBDTDecision_TOS )";
    //             //    ||  \(( B0_Hlt2Topo2BodyDecision_TOS||B0_Hlt2Topo3BodyDecision_TOS||B0_Hlt2Topo4BodyDecision_TOS ))";
    // TCut cut_trg = cut_l0 && cut_h1 && cut_h2;
    
    // --- D-
    TCut cut_d_chi2dof = "(D_ENDVERTEX_CHI2/D_ENDVERTEX_NDOF)<5";
    TCut cut_d_fdchi2  = "(D_FDCHI2_OWNPV>36)";
    TCut cut_d_mass = "(D_M < 2000)";
    TCut cut_d_diraorivx = "(D_DIRA_ORIVX > 0)"

    // ------ D3h
    TCut cut_d2h_dau_p       = "pi1_P>2000 && pi2_P>2000 && K_P>2000";
    TCut cut_d2h_dau_pt      = "(pi1_PT + pi2_PT + K_PT)>1800";

    TCut cut_d2h_k_probnn = "";
    TCut cut_d2h_pi1_probnn = "";
    TCut cut_d2h_pi2_probnn = "";
    
    // ------ D2h PID 
    if (IFMC) // If Monte Carlo files are the input
    {
        cut_d2h_k_probnn  = "(K_ProbNNk_corr*(1.-K_ProbNNpi_corr)*(1.-K_ProbNNp_corr))>0.1";
        cut_d2h_pi1_probnn = "(pi1_ProbNNpi_corr*(1.-pi1_ProbNNk_corr)*(1.-pi1_ProbNNp_corr))>0.1";
        cut_d2h_pi2_probnn = "(pi2_ProbNNpi_corr*(1.-pi2_ProbNNk_corr)*(1.-pi2_ProbNNp_corr))>0.1";
    }
    else
    {
        cut_d2h_k_probnn  = "(K_ProbNNk*(1.-K_ProbNNpi)*(1.-K_ProbNNp))>0.1";
        cut_d2h_pi1_probnn = "(pi1_ProbNNpi*(1.-pi1_ProbNNk)*(1.-pi1_ProbNNp))>0.1";
        cut_d2h_pi2_probnn = "(pi2_ProbNNpi*(1.-pi2_ProbNNk)*(1.-pi2_ProbNNp))>0.1";

    }
    // ------ Sum Dz
    TCut cut_dm;
    cut_dm += cut_d_chi2dof;
    cut_dm += cut_d_fdchi2;
    cut_dm += cut_d_mass;
    cut_dm += cut_d_diraorivx;
    cut_dm += cut_d2h_dau_p;
    cut_dm += cut_d2h_dau_pt;
    cut_dm += cut_d2h_k_probnn;
    cut_dm += cut_d2h_pi1_probnn;
    cut_dm += cut_d2h_pi2_probnn;

    TCut cut_p1 = "";
    TCut cut_p2 = "";
    TCut cut_pi = "";

    // --- a
    // ------  PID 
    if (IFMC) // If Monte Carlo files are the input
    {
        cut_p1 = "(p_ProbNNp_corr*(1.-p_ProbNNk_corr)*(1.-p_ProbNNpi_corr))>0.2";
        cut_p2 = "(pbar_ProbNNp_corr*(1.-pbar_ProbNNk_corr)*(1.-pbar_ProbNNpi_corr))>0.2";
        cut_pi = "(pi_ProbNNpi_corr*(1.-pi_ProbNNk_corr)*(1.-pi_ProbNNp_corr))>0.1";
    }
    else
    {
        cut_p1 = "(p_ProbNNp*(1.-p_ProbNNk)*(1.-p_ProbNNpi))>0.2";
        cut_p2 = "(pbar_ProbNNp*(1.-pbar_ProbNNk)*(1.-pbar_ProbNNpi))>0.2";
        cut_pi = "(pi_ProbNNpi*(1.-pi_ProbNNk)*(1.-pi_ProbNNp))>0.1";
    }
    TCut cut_a  = cut_p1 + cut_p2 + cut_pi;

    // --- B0
    TCut cut_bp_end    = "(B0_ENDVERTEX_CHI2/B0_ENDVERTEX_NDOF)<9";
    TCut cut_bp_ipchi2 = "B0_IPCHI2_OWNPV<20";
    TCut cut_bp_dira   = "B0_DIRA_OWNPV>0.99";
    TCut cut_bp_mass   = "( B0_M>5000&&B0_M<5600 )";
    TCut cut_bp = cut_bp_end && cut_bp_ipchi2 && cut_bp_dira && cut_bp_mass;

    // --- All Cuts
    TCut cut_base="1";
    //cut_base += cut_trg;
    cut_base += cut_dm;
    cut_base += cut_a;
    cut_base += cut_bp;

    TFile *f_output=new TFile(Output,"recreate");
    TTree *tr_sub;

    cout<<"--------------------------------------------------"<<endl;
    cout<<"Output : " << Output << endl;
    cout<<"total in old tree :  "<<tr_data->GetEntries()<<endl;
    cout<<cut_base.GetTitle()<<endl;
    double m=tr_data->GetEntries(cut_base);
    cout<<"total in new tree should :  "<<m<<endl;

    tr_sub=tr_data->CopyTree(cut_base,"",1000000000,0);
    double n=tr_sub->GetEntries();
    cout<<"total in new tree fact :  "<<n<<endl;

    if(m!=n) cout<<"**********error**************error*****************"<<endl;
    cout<<endl;
    f_output->Write();
    delete f_output;

}
