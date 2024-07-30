#include "ROOT/RDataFrame.hxx"
#include "TFile.h"
#include "TCut.h"
#include <vector>

void make_RawTuples_mc(TString Input, TString OutputBase)
{
		ROOT::EnableImplicitMT(); // Allow for multi threading and parallel processing
		Input +="/options_*.root";

		// Putting all the data in RDataFrame
		ROOT::RDataFrame df("B2Dpppi/DecayTree", Input);

		TString outputFileName = "../root/mc_";

		outputFileName  += OutputBase + "_RawTuples.root"; // Defining the output root file format

		// Define the first stage of trigger cuts for B meson
		TString cut_l0 = "( B0_L0HadronDecision_TOS==1 || B0_L0Global_TIS==1 )&&";//
    		TString cut_h1 = "( B0_Hlt1TrackMVADecision_TOS==1 || B0_Hlt1TwoTrackMVADecision_TOS==1 || B0_Hlt1TrackAllL0Decision_TOS ==1 )&&"; 
    		TString cut_h2 = "( B0_Hlt2Topo2BodyBBDTDecision_TOS==1 || B0_Hlt2Topo3BodyBBDTDecision_TOS==1 || B0_Hlt2Topo4BodyBBDTDecision_TOS==1 || B0_Hlt2Topo2BodyDecision_TOS==1 || B0_Hlt2Topo3BodyDecision_TOS==1 || B0_Hlt2Topo4BodyDecision_TOS==1)&&";
    		TString cut_trg = cut_l0 + cut_h1 + cut_h2;

		// This cut has ben added in the precut step
		// TString cut_mass = "( D_M<2000 && D_DIRA_ORIVX>0 )";

		TString cut_data;
		cut_data += cut_trg;
		//cut_data += cut_mass;

		df.Filter(cut_data.Data()).Snapshot("DecayTree", outputFileName.Data());
		//df_Bc1e.Filter(cut_data).Snapshot("DecayTree", outputFileName_Bc1e.Data());
		//df_Bc2e.Filter("Bcs_L0Global_TOS && Bcs_Hlt1Phys_TOS && Bcs_Hlt2Phys_TOS && ep_VeloCharge>1.2 && em_VeloCharge>1.2").Snapshot("DecayTree", outputFileName_Bc2e.Data());
}
