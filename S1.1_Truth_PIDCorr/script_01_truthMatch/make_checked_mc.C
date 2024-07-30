#include "ROOT/RDataFrame.hxx"
#include "TFile.h"
#include <cmath>
#include "TString.h"
#include <iostream>

void make(TString Input, TString Output, TString Branch)
{   
    int count = 0;

    ROOT::RDataFrame df(Branch, Input);
    int n = df.Count().GetValue();
    cout << "Number of entries before: " << n << endl;

    // checking for pi
    TString cut_pi = "(abs(pi_TRUEID) == 211 && abs(pi_MC_MOTHER_ID) == 511) && ";

    // checking for p
    TString cut_p = "(abs(p_TRUEID) == 2212 && abs(p_MC_MOTHER_ID) == 511) && ";

    // checking for pbar
    TString cut_pbar = "(abs(pbar_TRUEID) == 2212 && abs(pbar_MC_MOTHER_ID) == 511) && ";

    // checking for D
    TString cut_D = "(abs(D_TRUEID) == 411 && abs(D_MC_MOTHER_ID) == 511) && ";


    // checking for D Kaon and pions
    TString cut_D_K = "(abs(K_TRUEID) == 321 && abs(K_MC_MOTHER_ID) == 411 && abs(K_MC_GD_MOTHER_ID) == 511) && ";
    TString cut_D_pi1 = "(abs(pi1_TRUEID) == 211 && abs(pi1_MC_MOTHER_ID) == 411 && abs(pi1_MC_GD_MOTHER_ID) == 511) && ";
    TString cut_D_pi2 = "(abs(pi2_TRUEID) == 211 && abs(pi2_MC_MOTHER_ID) == 411 && abs(pi2_MC_GD_MOTHER_ID) == 511) && ";

    // checking for B
    TString cut_B = "(abs(B0_TRUEID) == 511)";

    // Combining all the cuts
    TString cut = cut_pi + cut_p + cut_pbar + cut_D + cut_D_K + cut_D_pi1 + cut_D_pi2 + cut_B;

    df.Filter(cut.Data()).Snapshot("DecayTree", Output.Data());

    ROOT::RDataFrame output_df("DecayTree", Output);
    int m = output_df.Count().GetValue();
    cout << "Number of entries after: " << m << endl;

    float efficiency = (static_cast<float>(m) / n) * 100.0f;

    cout << "Efficiency: "<< efficiency << endl;
    cout << "Number of entries having particle other than D^0: " << count << endl;


}
