#define make_add_mc_cxx
#include "make_add_mc.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TLorentzVector.h"
#include "TSystem.h"
#include "fstream"
#include "iostream"
#include <iomanip>
#include <math.h>
#include "TRandom3.h"
#include "TVector3.h"

void make(TString Input, TString Output){

		char treename[]={"DecayTree"};

		//do for data
		TChain *dis_chain = new TChain(treename, treename);
		dis_chain->Add(Input);
		cout<<"====Loaded the files. Please be patient......======"<<endl;
		cout<<"Loading   --- "   << Input << endl;
		cout<<"TreeName --- "   << treename << endl;
		cout<<"Total entries : "<< dis_chain->GetEntries()<<endl;
		cout<<"Output   --- "   << Output << endl;

		dis_chain -> SetBranchStatus("*",1);

		TFile *newf = new TFile(Output,"recreate");
		TTree* t_data = dis_chain->CloneTree(0);

		// Invariant Mass
		// --- Raw
		// three body D+X
		Double_t DmPpPm_M; t_data->Branch("DmPpPm_M", &DmPpPm_M, "DmPpPm_M/D");
		Double_t DmPmpi_M; t_data->Branch("DmPmpi_M", &DmPmpi_M, "DmPmpi_M/D");
		Double_t DmPppi_M; t_data->Branch("DmPppi_M", &DmPppi_M, "DmPppi_M/D");

		// two body D+X
		Double_t DmPp_M; t_data->Branch("DmPp_M", &DmPp_M, "DmPp_M/D");
		Double_t DmPm_M; t_data->Branch("DmPm_M", &DmPm_M, "DmPm_M/D");
		Double_t Dmpi_M; t_data->Branch("Dmpi_M", &Dmpi_M, "Dmpi_M/D");
		// two body: p pbar pi
		Double_t Pppi_M; t_data->Branch("Pppi_M", &Pppi_M, "Pppi_M/D");
		Double_t Pmpi_M; t_data->Branch("Pmpi_M", &Pmpi_M, "Pmpi_M/D");
		Double_t PpPm_M; t_data->Branch("PpPm_M", &PpPm_M, "PpPm_M/D");

		// three body D+X
		Double_t DmPpPm_M2; t_data->Branch("DmPpPm_M2", &DmPpPm_M2, "DmPpPm_M2/D");
		Double_t DmPmpi_M2; t_data->Branch("DmPmpi_M2", &DmPmpi_M2, "DmPmpi_M2/D");
		Double_t DmPppi_M2; t_data->Branch("DmPppi_M2", &DmPppi_M2, "DmPppi_M2/D");

		// two body D+X
		Double_t DmPp_M2; t_data->Branch("DmPp_M2", &DmPp_M2, "DmPp_M2/D");
		Double_t DmPm_M2; t_data->Branch("DmPm_M2", &DmPm_M2, "DmPm_M2/D");
		Double_t Dmpi_M2; t_data->Branch("Dmpi_M2", &Dmpi_M2, "Dmpi_M2/D");
		// two body: p pbar pi
		Double_t Pppi_M2; t_data->Branch("Pppi_M2", &Pppi_M2, "Pppi_M2/D");
		Double_t Pmpi_M2; t_data->Branch("Pmpi_M2", &Pmpi_M2, "Pmpi_M2/D");
		Double_t PpPm_M2; t_data->Branch("PpPm_M2", &PpPm_M2, "PpPm_M2/D");
		
		// -- PVALLFit
		// three body D+X
		Double_t PVALLFit_DmPpPm_M; t_data->Branch("PVALLFit_DmPpPm_M", &PVALLFit_DmPpPm_M, "PVALLFit_DmPpPm_M/D");
		Double_t PVALLFit_DmPmpi_M; t_data->Branch("PVALLFit_DmPmpi_M", &PVALLFit_DmPmpi_M, "PVALLFit_DmPmpi_M/D");
		Double_t PVALLFit_DmPppi_M; t_data->Branch("PVALLFit_DmPppi_M", &PVALLFit_DmPppi_M, "PVALLFit_DmPppi_M/D");
		Double_t PVALLFit_PpPmpi_M; t_data->Branch("PVALLFit_PpPmpi_M", &PVALLFit_PpPmpi_M, "PVALLFit_PpPmpi_M/D");

		// two body D+X
		Double_t PVALLFit_DmPp_M; t_data->Branch("PVALLFit_DmPp_M", &PVALLFit_DmPp_M, "PVALLFit_DmPp_M/D");
		Double_t PVALLFit_DmPm_M; t_data->Branch("PVALLFit_DmPm_M", &PVALLFit_DmPm_M, "PVALLFit_DmPm_M/D");
		Double_t PVALLFit_Dmpi_M; t_data->Branch("PVALLFit_Dmpi_M", &PVALLFit_Dmpi_M, "PVALLFit_Dmpi_M/D");
		// two body: p pbar pi
		Double_t PVALLFit_Pppi_M; t_data->Branch("PVALLFit_Pppi_M", &PVALLFit_Pppi_M, "PVALLFit_Pppi_M/D");
		Double_t PVALLFit_Pmpi_M; t_data->Branch("PVALLFit_Pmpi_M", &PVALLFit_Pmpi_M, "PVALLFit_Pmpi_M/D");
		Double_t PVALLFit_PpPm_M; t_data->Branch("PVALLFit_PpPm_M", &PVALLFit_PpPm_M, "PVALLFit_PpPm_M/D");

		// three body D+X
		Double_t PVALLFit_DmPpPm_M2; t_data->Branch("PVALLFit_DmPpPm_M2", &PVALLFit_DmPpPm_M2, "PVALLFit_DmPpPm_M2/D");
		Double_t PVALLFit_DmPmpi_M2; t_data->Branch("PVALLFit_DmPmpi_M2", &PVALLFit_DmPmpi_M2, "PVALLFit_DmPmpi_M2/D");
		Double_t PVALLFit_DmPppi_M2; t_data->Branch("PVALLFit_DmPppi_M2", &PVALLFit_DmPppi_M2, "PVALLFit_DmPppi_M2/D");
		Double_t PVALLFit_PpPmpi_M2; t_data->Branch("PVALLFit_PpPmpi_M2", &PVALLFit_PpPmpi_M2, "PVALLFit_PpPmpi_M2/D");

		// two body D+X
		Double_t PVALLFit_DmPp_M2; t_data->Branch("PVALLFit_DmPp_M2", &PVALLFit_DmPp_M2, "PVALLFit_DmPp_M2/D");
		Double_t PVALLFit_DmPm_M2; t_data->Branch("PVALLFit_DmPm_M2", &PVALLFit_DmPm_M2, "PVALLFit_DmPm_M2/D");
		Double_t PVALLFit_Dmpi_M2; t_data->Branch("PVALLFit_Dmpi_M2", &PVALLFit_Dmpi_M2, "PVALLFit_Dmpi_M2/D");
		// two body: p pbar pi
		Double_t PVALLFit_Pppi_M2; t_data->Branch("PVALLFit_Pppi_M2", &PVALLFit_Pppi_M2, "PVALLFit_Pppi_M2/D");
		Double_t PVALLFit_Pmpi_M2; t_data->Branch("PVALLFit_Pmpi_M2", &PVALLFit_Pmpi_M2, "PVALLFit_Pmpi_M2/D");
		Double_t PVALLFit_PpPm_M2; t_data->Branch("PVALLFit_PpPm_M2", &PVALLFit_PpPm_M2, "PVALLFit_PpPm_M2/D");	
                
		// -- PVDFit_
        // three body D+X
		Double_t PVDFit_DmPpPm_M; t_data->Branch("PVDFit_DmPpPm_M", &PVDFit_DmPpPm_M, "PVDFit_DmPpPm_M/D");
		Double_t PVDFit_DmPmpi_M; t_data->Branch("PVDFit_DmPmpi_M", &PVDFit_DmPmpi_M, "PVDFit_DmPmpi_M/D");
		Double_t PVDFit_DmPppi_M; t_data->Branch("PVDFit_DmPppi_M", &PVDFit_DmPppi_M, "PVDFit_DmPppi_M/D");

		// two body D+X
		Double_t PVDFit_DmPp_M; t_data->Branch("PVDFit_DmPp_M", &PVDFit_DmPp_M, "PVDFit_DmPp_M/D");
		Double_t PVDFit_DmPm_M; t_data->Branch("PVDFit_DmPm_M", &PVDFit_DmPm_M, "PVDFit_DmPm_M/D");
		Double_t PVDFit_Dmpi_M; t_data->Branch("PVDFit_Dmpi_M", &PVDFit_Dmpi_M, "PVDFit_Dmpi_M/D");
		// two body: p pbar pi
		Double_t PVDFit_Pppi_M; t_data->Branch("PVDFit_Pppi_M", &PVDFit_Pppi_M, "PVDFit_Pppi_M/D");
		Double_t PVDFit_Pmpi_M; t_data->Branch("PVDFit_Pmpi_M", &PVDFit_Pmpi_M, "PVDFit_Pmpi_M/D");
		Double_t PVDFit_PpPm_M; t_data->Branch("PVDFit_PpPm_M", &PVDFit_PpPm_M, "PVDFit_PpPm_M/D");

		// three body D+X
		Double_t PVDFit_DmPpPm_M2; t_data->Branch("PVDFit_DmPpPm_M2", &PVDFit_DmPpPm_M2, "PVDFit_DmPpPm_M2/D");
		Double_t PVDFit_DmPmpi_M2; t_data->Branch("PVDFit_DmPmpi_M2", &PVDFit_DmPmpi_M2, "PVDFit_DmPmpi_M2/D");
		Double_t PVDFit_DmPppi_M2; t_data->Branch("PVDFit_DmPppi_M2", &PVDFit_DmPppi_M2, "PVDFit_DmPppi_M2/D");

		// two body D+X
		Double_t PVDFit_DmPp_M2; t_data->Branch("PVDFit_DmPp_M2", &PVDFit_DmPp_M2, "PVDFit_DmPp_M2/D");
		Double_t PVDFit_DmPm_M2; t_data->Branch("PVDFit_DmPm_M2", &PVDFit_DmPm_M2, "PVDFit_DmPm_M2/D");
		Double_t PVDFit_Dmpi_M2; t_data->Branch("PVDFit_Dmpi_M2", &PVDFit_Dmpi_M2, "PVDFit_Dmpi_M2/D");
		// two body: p pbar pi
		Double_t PVDFit_Pppi_M2; t_data->Branch("PVDFit_Pppi_M2", &PVDFit_Pppi_M2, "PVDFit_Pppi_M2/D");
		Double_t PVDFit_Pmpi_M2; t_data->Branch("PVDFit_Pmpi_M2", &PVDFit_Pmpi_M2, "PVDFit_Pmpi_M2/D");
		Double_t PVDFit_PpPm_M2; t_data->Branch("PVDFit_PpPm_M2", &PVDFit_PpPm_M2, "PVDFit_PpPm_M2/D");
    		
		// -- PVFit
		// three body D+X
		Double_t PVFit_DmPpPm_M; t_data->Branch("PVFit_DmPpPm_M", &PVFit_DmPpPm_M, "PVFit_DmPpPm_M/D");
		Double_t PVFit_DmPmpi_M; t_data->Branch("PVFit_DmPmpi_M", &PVFit_DmPmpi_M, "PVFit_DmPmpi_M/D");
		Double_t PVFit_DmPppi_M; t_data->Branch("PVFit_DmPppi_M", &PVFit_DmPppi_M, "PVFit_DmPppi_M/D");

		// two body D+X
		Double_t PVFit_DmPp_M; t_data->Branch("PVFit_DmPp_M", &PVFit_DmPp_M, "PVFit_DmPp_M/D");
		Double_t PVFit_DmPm_M; t_data->Branch("PVFit_DmPm_M", &PVFit_DmPm_M, "PVFit_DmPm_M/D");
		Double_t PVFit_Dmpi_M; t_data->Branch("PVFit_Dmpi_M", &PVFit_Dmpi_M, "PVFit_Dmpi_M/D");
		// two body: p pbar pi
		Double_t PVFit_Pppi_M; t_data->Branch("PVFit_Pppi_M", &PVFit_Pppi_M, "PVFit_Pppi_M/D");
		Double_t PVFit_Pmpi_M; t_data->Branch("PVFit_Pmpi_M", &PVFit_Pmpi_M, "PVFit_Pmpi_M/D");
		Double_t PVFit_PpPm_M; t_data->Branch("PVFit_PpPm_M", &PVFit_PpPm_M, "PVFit_PpPm_M/D");

		// three body D+X
		Double_t PVFit_DmPpPm_M2; t_data->Branch("PVFit_DmPpPm_M2", &PVFit_DmPpPm_M2, "PVFit_DmPpPm_M2/D");
		Double_t PVFit_DmPmpi_M2; t_data->Branch("PVFit_DmPmpi_M2", &PVFit_DmPmpi_M2, "PVFit_DmPmpi_M2/D");
		Double_t PVFit_DmPppi_M2; t_data->Branch("PVFit_DmPppi_M2", &PVFit_DmPppi_M2, "PVFit_DmPppi_M2/D");

		// two body D+X
		Double_t PVFit_DmPp_M2; t_data->Branch("PVFit_DmPp_M2", &PVFit_DmPp_M2, "PVFit_DmPp_M2/D");
		Double_t PVFit_DmPm_M2; t_data->Branch("PVFit_DmPm_M2", &PVFit_DmPm_M2, "PVFit_DmPm_M2/D");
		Double_t PVFit_Dmpi_M2; t_data->Branch("PVFit_Dmpi_M2", &PVFit_Dmpi_M2, "PVFit_Dmpi_M2/D");
		// two body: p pbar pi
		Double_t PVFit_Pppi_M2; t_data->Branch("PVFit_Pppi_M2", &PVFit_Pppi_M2, "PVFit_Pppi_M2/D");
		Double_t PVFit_Pmpi_M2; t_data->Branch("PVFit_Pmpi_M2", &PVFit_Pmpi_M2, "PVFit_Pmpi_M2/D");
		Double_t PVFit_PpPm_M2; t_data->Branch("PVFit_PpPm_M2", &PVFit_PpPm_M2, "PVFit_PpPm_M2/D");

		// MVA Vars
		// Double_t minip_Bzdau; t_data->Branch("minip_Bzdau", &minip_Bzdau, "minip_Bzdau/D");
		// Double_t minpt_Bzdau; t_data->Branch("minpt_Bzdau", &minpt_Bzdau, "minpt_Bzdau/D");
		// Double_t SDB;         t_data->Branch("SDB", &SDB, "SDB/D");

		Int_t N = dis_chain->GetEntries();

		cout<< "total entries :"<<N<<endl;
		make_add_mc tag(dis_chain);
		for(Int_t ii=0; ii<N; ii++){
				//cout<<ii<<endl;
				if(ii==Int_t(N*0.1)) cout<<"**********completed 10%"<<"*********"<<endl;
				if(ii==Int_t(N*0.2)) cout<<"**********completed 20%"<<"*********"<<endl;
				if(ii==Int_t(N*0.3)) cout<<"**********completed 30%"<<"*********"<<endl;
				if(ii==Int_t(N*0.4)) cout<<"**********completed 40%"<<"*********"<<endl;
				if(ii==Int_t(N*0.5)) cout<<"**********completed 50%"<<"*********"<<endl;
				if(ii==Int_t(N*0.6)) cout<<"**********completed 60%"<<"*********"<<endl;
				if(ii==Int_t(N*0.7)) cout<<"**********completed 70%"<<"*********"<<endl;
				if(ii==Int_t(N*0.8)) cout<<"**********completed 80%"<<"*********"<<endl;
				if(ii==Int_t(N*0.9)) cout<<"**********completed 90%"<<"*********"<<endl;
				if(ii==Int_t(N*1-1)) cout<<"**********completed 100%"<<endl;

				tag.GetEntry(ii);

				bool isPplus = false;
				bool isPbarplus = false;

				if (tag.B0_PVALLFit_a_1_1260_plus_pplus_0_ID * tag.D_ID < 0)
				{
					isPplus = true;
				}
				else {isPbarplus = true;}

				//-------------------------------------------------------------
				//-------------------------------------------------------------
				// *** Add some vars
				// RAW
				TLorentzVector vD  = TLorentzVector(tag.D_PX, tag.D_PY, tag.D_PZ, tag.D_PE);
				TLorentzVector vPp = TLorentzVector(tag.p_PX, tag.p_PY, tag.p_PZ, tag.p_PE);
				TLorentzVector vPm = TLorentzVector(tag.pbar_PX, tag.pbar_PY, tag.pbar_PZ, tag.pbar_PE); // Pm is basically pbar
				TLorentzVector vpi = TLorentzVector(tag.pi_PX, tag.pi_PY, tag.pi_PZ, tag.pi_PE);

				TLorentzVector vDmPpPm = vD + vPp + vPm;
				TLorentzVector vDmPmpi = vD + vPm + vpi;
				TLorentzVector vDmPppi = vD + vPp + vpi;

				TLorentzVector vDmPp   = vD + vPp;
				TLorentzVector vDmPm   = vD + vPm;
				TLorentzVector vDmpi   = vD + vpi;

				TLorentzVector vPppi   = vPp + vpi;
				TLorentzVector vPmpi   = vPm + vpi;
				TLorentzVector vPpPm   = vPp + vPm;

				DmPpPm_M = (vDmPpPm).M();       DmPpPm_M2 = (vDmPpPm).M2();
				DmPppi_M = (vDmPppi).M();       DmPppi_M2 = (vDmPppi).M2();
				DmPmpi_M = (vDmPmpi).M();       DmPmpi_M2 = (vDmPmpi).M2();

				DmPp_M = (vDmPp).M();      	DmPp_M2 = (vDmPp).M2();
				DmPm_M = (vDmPm).M();       DmPm_M2 = (vDmPm).M2();
				Dmpi_M = (vDmpi).M();       Dmpi_M2 = (vDmpi).M2();

				Pppi_M = (vPppi).M();      	Pppi_M2 = (vPppi).M2();
				Pmpi_M = (vPmpi).M();       Pmpi_M2 = (vPmpi).M2();
				PpPm_M = (vPpPm).M();       PpPm_M2 = (vPpPm).M2();

				// --- PVALLFit
				// Reconstructing D
				TLorentzVector PVALLFit_vDplus_Kplus = TLorentzVector(tag.B0_PVALLFit_Dplus_Kplus_PX, tag.B0_PVALLFit_Dplus_Kplus_PY, tag.B0_PVALLFit_Dplus_Kplus_PZ, tag.B0_PVALLFit_Dplus_Kplus_PE);
				TLorentzVector PVALLFit_vDplus_piplus = TLorentzVector(tag.B0_PVALLFit_Dplus_piplus_PX, tag.B0_PVALLFit_Dplus_piplus_PY, tag.B0_PVALLFit_Dplus_piplus_PZ, tag.B0_PVALLFit_Dplus_piplus_PE);
				TLorentzVector PVALLFit_vDplus_piplus_0 = TLorentzVector(tag.B0_PVALLFit_Dplus_piplus_0_PX, tag.B0_PVALLFit_Dplus_piplus_0_PY, tag.B0_PVALLFit_Dplus_piplus_0_PZ, tag.B0_PVALLFit_Dplus_piplus_0_PE);
				
				// Reconstructing pi
				TLorentzVector PVALLFit_vpiplus = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_piplus_PX, tag.B0_PVALLFit_a_1_1260_plus_piplus_PY, tag.B0_PVALLFit_a_1_1260_plus_piplus_PZ, tag.B0_PVALLFit_a_1_1260_plus_piplus_PE);

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
						

				TLorentzVector PVALLFit_vDplus = PVALLFit_vDplus_Kplus + PVALLFit_vDplus_piplus + PVALLFit_vDplus_piplus_0;

				// 3 body D p pbar pi
				TLorentzVector PVALLFit_DmPpPm = PVALLFit_vDplus + PVALLFit_vpplus + PVALLFit_vpbar;						
				TLorentzVector PVALLFit_DmPmpi = PVALLFit_vDplus + PVALLFit_vpiplus + PVALLFit_vpbar;						
				TLorentzVector PVALLFit_DmPppi = PVALLFit_vDplus + PVALLFit_vpiplus + PVALLFit_vpplus;
				TLorentzVector PVALLFit_PpPmpi = PVALLFit_vpplus + PVALLFit_vpbar + PVALLFit_vpiplus;						

				// 2 body D pbar p pi
				TLorentzVector PVALLFit_Dmpi =  PVALLFit_vDplus + PVALLFit_vpiplus;									
				TLorentzVector PVALLFit_DmPp =  PVALLFit_vDplus + PVALLFit_vpplus;									
				TLorentzVector PVALLFit_DmPm =  PVALLFit_vDplus + PVALLFit_vpbar;									

				// 2 body p pbar pi
				TLorentzVector PVALLFit_Pppi = PVALLFit_vpplus + PVALLFit_vpiplus;							
				TLorentzVector PVALLFit_Pmpi = PVALLFit_vpbar + PVALLFit_vpiplus;							
				TLorentzVector PVALLFit_PpPm = PVALLFit_vpplus + PVALLFit_vpbar;	

				// Computing all the masses 
				 PVALLFit_DmPpPm_M = (PVALLFit_DmPpPm).M();									PVALLFit_DmPpPm_M2 = (PVALLFit_DmPpPm).M2();
				 PVALLFit_DmPmpi_M = (PVALLFit_DmPmpi).M();									PVALLFit_DmPmpi_M2 = (PVALLFit_DmPmpi).M2();
				 PVALLFit_DmPppi_M = (PVALLFit_DmPppi).M();									PVALLFit_DmPppi_M2 = (PVALLFit_DmPppi).M2();
				 PVALLFit_PpPmpi_M = (PVALLFit_PpPmpi).M();									PVALLFit_PpPmpi_M2 = (PVALLFit_PpPmpi).M2();

				 PVALLFit_Dmpi_M = (PVALLFit_Dmpi).M();										PVALLFit_Dmpi_M2 = (PVALLFit_Dmpi).M2();
				 PVALLFit_DmPp_M = (PVALLFit_DmPp).M();										PVALLFit_DmPp_M2 = (PVALLFit_DmPp).M2();
				 PVALLFit_DmPm_M = (PVALLFit_DmPm).M();									    PVALLFit_DmPm_M2 = (PVALLFit_DmPm).M2();

				 PVALLFit_Pppi_M = (PVALLFit_Pppi).M();										PVALLFit_Pppi_M2 = (PVALLFit_Pppi).M2();
				 PVALLFit_Pmpi_M = (PVALLFit_Pmpi).M();										PVALLFit_Pmpi_M2 = (PVALLFit_Pmpi).M2();
				 PVALLFit_PpPm_M = (PVALLFit_PpPm).M();										PVALLFit_PpPm_M2 = (PVALLFit_PpPm).M2();

			
				// --- PVDFit
				// Reconstructing D
				TLorentzVector PVDFit_vDplus_Kplus = TLorentzVector(tag.B0_PVDFit_Dplus_Kplus_PX, tag.B0_PVDFit_Dplus_Kplus_PY, tag.B0_PVDFit_Dplus_Kplus_PZ, tag.B0_PVDFit_Dplus_Kplus_PE);
				TLorentzVector PVDFit_vDplus_piplus = TLorentzVector(tag.B0_PVDFit_Dplus_piplus_PX, tag.B0_PVDFit_Dplus_piplus_PY, tag.B0_PVDFit_Dplus_piplus_PZ, tag.B0_PVDFit_Dplus_piplus_PE);
				TLorentzVector PVDFit_vDplus_piplus_0 = TLorentzVector(tag.B0_PVDFit_Dplus_piplus_0_PX, tag.B0_PVDFit_Dplus_piplus_0_PY, tag.B0_PVDFit_Dplus_piplus_0_PZ, tag.B0_PVDFit_Dplus_piplus_0_PE);
				
				// Reconstructing pi
				TLorentzVector PVDFit_vpiplus = TLorentzVector(tag.B0_PVDFit_a_1_1260_plus_piplus_PX, tag.B0_PVDFit_a_1_1260_plus_piplus_PY, tag.B0_PVDFit_a_1_1260_plus_piplus_PZ, tag.B0_PVDFit_a_1_1260_plus_piplus_PE);

				TLorentzVector PVDFit_vpplus = TLorentzVector(0,0,0,0);
				TLorentzVector PVDFit_vpbar = TLorentzVector(0,0,0,0); 
				if (isPplus){
				// Reconstructing p
					PVDFit_vpplus = TLorentzVector(tag.B0_PVDFit_a_1_1260_plus_pplus_0_PX, tag.B0_PVDFit_a_1_1260_plus_pplus_0_PY, tag.B0_PVDFit_a_1_1260_plus_pplus_0_PZ, tag.B0_PVDFit_a_1_1260_plus_pplus_0_PE);
					PVDFit_vpbar = TLorentzVector(tag.B0_PVDFit_a_1_1260_plus_pplus_PX, tag.B0_PVDFit_a_1_1260_plus_pplus_PY, tag.B0_PVDFit_a_1_1260_plus_pplus_PZ, tag.B0_PVDFit_a_1_1260_plus_pplus_PE);}
				else if (isPbarplus){
				// Reconstructing p bar
					PVDFit_vpbar = TLorentzVector(tag.B0_PVDFit_a_1_1260_plus_pplus_0_PX, tag.B0_PVDFit_a_1_1260_plus_pplus_0_PY, tag.B0_PVDFit_a_1_1260_plus_pplus_0_PZ, tag.B0_PVDFit_a_1_1260_plus_pplus_0_PE);
					PVDFit_vpplus = TLorentzVector(tag.B0_PVDFit_a_1_1260_plus_pplus_PX, tag.B0_PVDFit_a_1_1260_plus_pplus_PY, tag.B0_PVDFit_a_1_1260_plus_pplus_PZ, tag.B0_PVDFit_a_1_1260_plus_pplus_PE);}

				TLorentzVector PVDFit_vDplus = PVDFit_vDplus_Kplus + PVDFit_vDplus_piplus + PVDFit_vDplus_piplus_0;

				// 3 body D p pbar pi
				TLorentzVector PVDFit_DmPpPm = PVDFit_vDplus + PVDFit_vpplus + PVDFit_vpbar;						
				TLorentzVector PVDFit_DmPmpi = PVDFit_vDplus + PVDFit_vpiplus + PVDFit_vpbar;						
				TLorentzVector PVDFit_DmPppi = PVDFit_vDplus + PVDFit_vpiplus + PVDFit_vpplus;						


				// 2 body D pbar p pi
				TLorentzVector PVDFit_Dmpi =  PVDFit_vDplus + PVDFit_vpiplus;									
				TLorentzVector PVDFit_DmPp =  PVDFit_vDplus + PVDFit_vpplus;									
				TLorentzVector PVDFit_DmPm =  PVDFit_vDplus + PVDFit_vpbar;									

				// 2 body p pbar pi
				TLorentzVector PVDFit_Pppi = PVDFit_vpplus + PVDFit_vpiplus;							
				TLorentzVector PVDFit_Pmpi = PVDFit_vpbar + PVDFit_vpiplus;							
				TLorentzVector PVDFit_PpPm = PVDFit_vpplus + PVDFit_vpbar;	

				// Computing all the masses 
				 PVDFit_DmPpPm_M = (PVDFit_DmPpPm).M();									PVDFit_DmPpPm_M2 = (PVDFit_DmPpPm).M2();
				 PVDFit_DmPmpi_M = (PVDFit_DmPmpi).M();									PVDFit_DmPmpi_M2 = (PVDFit_DmPmpi).M2();
				 PVDFit_DmPppi_M = (PVDFit_DmPppi).M();									PVDFit_DmPppi_M2 = (PVDFit_DmPppi).M2();

				 PVDFit_Dmpi_M = (PVDFit_Dmpi).M();										PVDFit_Dmpi_M2 = (PVDFit_Dmpi).M2();
				 PVDFit_DmPp_M = (PVDFit_DmPp).M();										PVDFit_DmPp_M2 = (PVDFit_DmPp).M2();
				 PVDFit_DmPm_M = (PVDFit_DmPm).M();									    PVDFit_DmPm_M2 = (PVDFit_DmPm).M2();

				 PVDFit_Pppi_M = (PVDFit_Pppi).M();										PVDFit_Pppi_M2 = (PVDFit_Pppi).M2();
				 PVDFit_Pmpi_M = (PVDFit_Pmpi).M();										PVDFit_Pmpi_M2 = (PVDFit_Pmpi).M2();
				 PVDFit_PpPm_M = (PVDFit_PpPm).M();										PVDFit_PpPm_M2 = (PVDFit_PpPm).M2();	

				
				// --- PVFit
				// Re-constructing D
				TLorentzVector PVFit_vDplus_Kplus = TLorentzVector(tag.B0_PVFit_Dplus_Kplus_PX, tag.B0_PVFit_Dplus_Kplus_PY, tag.B0_PVFit_Dplus_Kplus_PZ, tag.B0_PVFit_Dplus_Kplus_PE);
				TLorentzVector PVFit_vDplus_piplus = TLorentzVector(tag.B0_PVFit_Dplus_piplus_PX, tag.B0_PVFit_Dplus_piplus_PY, tag.B0_PVFit_Dplus_piplus_PZ, tag.B0_PVFit_Dplus_piplus_PE);
				TLorentzVector PVFit_vDplus_piplus_0 = TLorentzVector(tag.B0_PVFit_Dplus_piplus_0_PX, tag.B0_PVFit_Dplus_piplus_0_PY, tag.B0_PVFit_Dplus_piplus_0_PZ, tag.B0_PVFit_Dplus_piplus_0_PE);
				
				//  Reconstructing pi 
				TLorentzVector PVFit_vpiplus = TLorentzVector(tag.B0_PVFit_a_1_1260_plus_piplus_PX, tag.B0_PVFit_a_1_1260_plus_piplus_PY, tag.B0_PVFit_a_1_1260_plus_piplus_PZ, tag.B0_PVFit_a_1_1260_plus_piplus_PE);

				TLorentzVector PVFit_vpplus = TLorentzVector(0,0,0,0); 
				TLorentzVector PVFit_vpbar = TLorentzVector(0,0,0,0); 
				if (isPplus){
				// Reconstructing p
					PVFit_vpplus = TLorentzVector(tag.B0_PVFit_a_1_1260_plus_pplus_0_PX, tag.B0_PVFit_a_1_1260_plus_pplus_0_PY, tag.B0_PVFit_a_1_1260_plus_pplus_0_PZ, tag.B0_PVFit_a_1_1260_plus_pplus_0_PE);
					PVFit_vpbar = TLorentzVector(tag.B0_PVFit_a_1_1260_plus_pplus_PX, tag.B0_PVFit_a_1_1260_plus_pplus_PY, tag.B0_PVFit_a_1_1260_plus_pplus_PZ, tag.B0_PVFit_a_1_1260_plus_pplus_PE);}
				else if (isPbarplus){
				// Reconstructing p bar
					PVFit_vpbar = TLorentzVector(tag.B0_PVFit_a_1_1260_plus_pplus_0_PX, tag.B0_PVFit_a_1_1260_plus_pplus_0_PY, tag.B0_PVFit_a_1_1260_plus_pplus_0_PZ, tag.B0_PVFit_a_1_1260_plus_pplus_0_PE);
					PVFit_vpplus = TLorentzVector(tag.B0_PVFit_a_1_1260_plus_pplus_PX, tag.B0_PVFit_a_1_1260_plus_pplus_PY, tag.B0_PVFit_a_1_1260_plus_pplus_PZ, tag.B0_PVFit_a_1_1260_plus_pplus_PE);}


				TLorentzVector PVFit_vDplus = PVFit_vDplus_Kplus + PVFit_vDplus_piplus + PVFit_vDplus_piplus_0;

				// 3 body D p pbar pi
				TLorentzVector PVFit_DmPpPm = PVFit_vDplus + PVFit_vpplus + PVFit_vpbar;						
				TLorentzVector PVFit_DmPmpi = PVFit_vDplus + PVFit_vpiplus + PVFit_vpbar;						
				TLorentzVector PVFit_DmPppi = PVFit_vDplus + PVFit_vpiplus + PVFit_vpplus;						


				// 2 body D pbar p pi
				TLorentzVector PVFit_Dmpi =  PVFit_vDplus + PVFit_vpiplus;									
				TLorentzVector PVFit_DmPp =  PVFit_vDplus + PVFit_vpplus;									
				TLorentzVector PVFit_DmPm =  PVFit_vDplus + PVFit_vpbar;									

				// 2 body p pbar pi
				TLorentzVector PVFit_Pppi = PVFit_vpplus + PVFit_vpiplus;							
				TLorentzVector PVFit_Pmpi = PVFit_vpbar + PVFit_vpiplus;							
				TLorentzVector PVFit_PpPm = PVFit_vpplus + PVFit_vpbar;	

				// Computing all the masses 
				 PVFit_DmPpPm_M = (PVFit_DmPpPm).M();									PVFit_DmPpPm_M2 = (PVFit_DmPpPm).M2();
				 PVFit_DmPmpi_M = (PVFit_DmPmpi).M();									PVFit_DmPmpi_M2 = (PVFit_DmPmpi).M2();
				 PVFit_DmPppi_M = (PVFit_DmPppi).M();									PVFit_DmPppi_M2 = (PVFit_DmPppi).M2();

				 PVFit_Dmpi_M = (PVFit_Dmpi).M();										PVFit_Dmpi_M2 = (PVFit_Dmpi).M2();
				 PVFit_DmPp_M = (PVFit_DmPp).M();										PVFit_DmPp_M2 = (PVFit_DmPp).M2();
				 PVFit_DmPm_M = (PVFit_DmPm).M();									    PVFit_DmPm_M2 = (PVFit_DmPm).M2();

				 PVFit_Pppi_M = (PVFit_Pppi).M();										PVFit_Pppi_M2 = (PVFit_Pppi).M2();
				 PVFit_Pmpi_M = (PVFit_Pmpi).M();										PVFit_Pmpi_M2 = (PVFit_Pmpi).M2();
				 PVFit_PpPm_M = (PVFit_PpPm).M();										PVFit_PpPm_M2 = (PVFit_PpPm).M2();

				//-------------------------------------------------------------
				//-------------------------------------------------------------
				// *** Add Variable and Filter; angle for clone tracks
				// 
				TLorentzVector P4[6];
				P4[0] = TLorentzVector(tag.p_PX, tag.p_PY, tag.p_PZ, tag.p_PE);
				P4[1] = TLorentzVector(tag.pbar_PX, tag.pbar_PY, tag.pbar_PZ, tag.pbar_PE);
				P4[2] = TLorentzVector(tag.pi_PX, tag.pi_PY, tag.pi_PZ, tag.pi_PE);
				P4[3] = TLorentzVector(tag.K_PX, tag.K_PY, tag.K_PZ, tag.K_PE);
				P4[4] = TLorentzVector(tag.pi1_PX, tag.pi1_PY, tag.pi1_PZ, tag.pi1_PE);
				P4[5] = TLorentzVector(tag.pi2_PX, tag.pi2_PY, tag.pi2_PZ, tag.pi2_PE);
				double angle_clone = 5;
				// Find smallest angle between any 2 of the 6 tracks
				for(Int_t i=0; i<6; i++){
						for(Int_t j=i+1; j<6; j++){
								Double_t angle_ = P4[i].Vect().Angle(P4[j].Vect());
								if(angle_ < angle_clone) angle_clone = angle_;
						}
				}
				// Apply filter
				if ( !(angle_clone > 0.0005) ) continue;


				//-------------------------------------------------------------
				//-------------------------------------------------------------
				// *** Add MVA vars
				// minip_Bzdau = std;;min({ tag.Bp_D0_LOKI_IPCHI2, tag.Bp_Ks_LOKI_IPCHI2, tag.Bp_Kp_LOKI_IPCHI2});
				// minpt_Bzdau = std;;min({ tag.Bp_D0_PT, tag.Bp_Ks_PT, tag.Bp_Kp_PT});
				// SDB = (tag.Bp_D0_ENDVERTEX_Z-tag.Bp_ENDVERTEX_Z) / sqrt(pow(tag.Bp_D0_ENDVERTEX_ZERR,2)+pow(tag.Bp_ENDVERTEX_ZERR,2));

				//-------------------------------------------------------------
				t_data->Fill();
		}
		newf->cd();
		t_data->Write();
}
