#define create_input_cxx
#include "create_input.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "ROOT/RDataFrame.hxx"
#include "TChain.h"
#include <iostream>
#include <cmath>
#include "TString.h"
#include "TCut.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLorentzVector.h"

using namespace std;

void create_input_data()
{
    // Opening the files required
    TChain *dt_chain = new TChain("DecayTree");
    dt_chain->Add("/panfs/gogia/LHCb/B2Dpppi/Analysis/S3_TMVA/root/data_*_BDT.root");
    cout << "# of total entries: " << dt_chain->GetEntries() << endl;

    //Define the cuts
    TCut SBcut = "BDT > -0.14 && B0_PVDFit_M>5350 && B0_PVDFit_M<5400";
    //TCut SRcut = "BDT > -0.03 && B0_PVDFit_M>5250 && B0_PVDFit_M<5310 && B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1890";
    TCut SRcut = "BDT > -0.14 && B0_PVDFit_M>5245.32 && B0_PVDFit_M<5314.78 && B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1900";

    // Create a new tree with cut 
    TTree *dis_chain = dt_chain->CopyTree(SBcut);
    cout << "# of entries after cut: " << dis_chain->GetEntries() << endl;

    // File to store the momentum output
    ofstream outputFile1("../files/data_momenta_SB.txt", ios::trunc);

    // File to store the charge output
    ofstream outputFile2("../files/data_charge_SB.txt", ios::trunc);

    // Files to store the weight factor of sideband 
    ofstream outputFile3("../files/data_weights_SB.txt", ios::trunc);

    // Calculation of weight factor
    Double_t B_SR = 1187.08;
    Double_t B_SB = 1449.05;

    Double_t weightFactor = B_SR / B_SB;

    // outputFile1.seekp(0, end);
    // outputFile2.seekp(0, end);

    Int_t N = dis_chain->GetEntries();

    create_input tag(dis_chain);

    // Print header
    outputFile1  << "-------------------------------------------------------------" << endl;
    outputFile1   << setw(5) << "E"
                << setw(15) << "PX" 
                << setw(15) << "PY" 
                << setw(15) << "PZ" << endl;

    for(Int_t ii=0; ii<N; ii++)
    {

        tag.GetEntry(ii);

        // For D
        TLorentzVector PVALLFit_vDplus_Kplus = TLorentzVector(tag.B0_PVALLFit_Dplus_Kplus_PX, tag.B0_PVALLFit_Dplus_Kplus_PY, tag.B0_PVALLFit_Dplus_Kplus_PZ, tag.B0_PVALLFit_Dplus_Kplus_PE);
        TLorentzVector PVALLFit_vDplus_piplus = TLorentzVector(tag.B0_PVALLFit_Dplus_piplus_PX, tag.B0_PVALLFit_Dplus_piplus_PY, tag.B0_PVALLFit_Dplus_piplus_PZ, tag.B0_PVALLFit_Dplus_piplus_PE);
        TLorentzVector PVALLFit_vDplus_piplus_0 = TLorentzVector(tag.B0_PVALLFit_Dplus_piplus_0_PX, tag.B0_PVALLFit_Dplus_piplus_0_PY, tag.B0_PVALLFit_Dplus_piplus_0_PZ, tag.B0_PVALLFit_Dplus_piplus_0_PE);

        TLorentzVector PVALLFit_vDplus = PVALLFit_vDplus_Kplus + PVALLFit_vDplus_piplus + PVALLFit_vDplus_piplus_0;

        // Computing the values for D
        outputFile1  << left << fixed
                    << setw(15) << PVALLFit_vDplus.E() 
                    << setw(15) << PVALLFit_vDplus.Px() 
                    << setw(15) << PVALLFit_vDplus.Py()
                    << setw(15) << PVALLFit_vDplus.Pz() << endl;

        // For p and pbar
        bool isPplus = false;
        bool isPbarplus = false;

        if (tag.B0_PVALLFit_a_1_1260_plus_pplus_0_ID * tag.D_ID < 0)
        {
            isPplus = true;
        }
        else {isPbarplus = true;}

        TLorentzVector PVALLFit_vpplus = TLorentzVector(0,0,0,0); 
		TLorentzVector PVALLFit_vpbar = TLorentzVector(0,0,0,0);
        if (isPplus){
        // Reconstructing p
        PVALLFit_vpplus = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PX, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PY, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PZ, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PE);
        PVALLFit_vpbar = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_pplus_PX, tag.B0_PVALLFit_a_1_1260_plus_pplus_PY, tag.B0_PVALLFit_a_1_1260_plus_pplus_PZ, tag.B0_PVALLFit_a_1_1260_plus_pplus_PE);}
        else if (isPbarplus){
        // Reconstructing p bar
        PVALLFit_vpbar = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PX, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PY, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PZ, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PE);
        PVALLFit_vpplus = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_pplus_PX, tag.B0_PVALLFit_a_1_1260_plus_pplus_PY, tag.B0_PVALLFit_a_1_1260_plus_pplus_PZ, tag.B0_PVALLFit_a_1_1260_plus_pplus_PE);}
            
        outputFile1  << left << fixed
                    << setw(15) << PVALLFit_vpplus.E() 
                    << setw(15) << PVALLFit_vpplus.Px() 
                    << setw(15) << PVALLFit_vpplus.Py()
                    << setw(15) << PVALLFit_vpplus.Pz() << endl;

        outputFile1  << left << fixed
                    << setw(15) << PVALLFit_vpbar.E() 
                    << setw(15) << PVALLFit_vpbar.Px() 
                    << setw(15) << PVALLFit_vpbar.Py()
                    << setw(15) << PVALLFit_vpbar.Pz() << endl;

        // For pi    
		TLorentzVector PVALLFit_vpiplus = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_piplus_PX, tag.B0_PVALLFit_a_1_1260_plus_piplus_PY, tag.B0_PVALLFit_a_1_1260_plus_piplus_PZ, tag.B0_PVALLFit_a_1_1260_plus_piplus_PE);
            
        outputFile1  << left << fixed
                    << setw(15) << PVALLFit_vpiplus.E() 
                    << setw(15) << PVALLFit_vpiplus.Px() 
                    << setw(15) << PVALLFit_vpiplus.Py()
                    << setw(15) << PVALLFit_vpiplus.Pz() << endl;

        // Create the txt file with the charge values
        if (tag.pi_ID < 0)
        {
            outputFile2 << "-1" << endl;
        }
        else outputFile2 << "1" << endl;

        // Create the txt file for the sideband region with weight factor 
        outputFile3 << weightFactor << endl;


    }

outputFile1.close();
outputFile2.close();
outputFile3.close();

cout << "Output Files have been created" << endl;


    
}

