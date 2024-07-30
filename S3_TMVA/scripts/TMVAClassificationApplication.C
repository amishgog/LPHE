/// \file
/// \ingroup tutorial_tmva
/// \notebook -nodraw
/// This macro provides a simple example on how to use the trained classifiers
/// within an analysis module
/// - Project   : TMVA - a Root-integrated toolkit for multivariate data analysis
/// - Package   : TMVA
/// - Executable: TMVAClassificationApplication
///
/// \macro_output
/// \macro_code
/// \author Andreas Hoecker

#include <cstdlib>
#include <vector>
#include <iostream>
#include <map>
#include <string>

#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TStopwatch.h"
#include "TApplication.h"

#include "TMVA/Tools.h"
#include "TMVA/Reader.h"
#include "TMVA/MethodCuts.h"

using namespace TMVA;

void TMVAClassificationApplication(TString inputFile, TString outputFile, TString myMethodList = "")
{

	//---------------------------------------------------------------
	// This loads the library
	TMVA::Tools::Instance();

	// Default MVA methods to be trained + tested
	std::map<std::string,int> Use;

	// Cut optimisation
	Use["Cuts"]            = 0;
	Use["CutsD"]           = 0;
	Use["CutsPCA"]         = 0;
	Use["CutsGA"]          = 0;
	Use["CutsSA"]          = 0;
	//
	// 1-dimensional likelihood ("naive Bayes estimator")
	Use["Likelihood"]      = 0;
	Use["LikelihoodD"]     = 0; // the "D" extension indicates decorrelated input variables (see option strings)
	Use["LikelihoodPCA"]   = 0; // the "PCA" extension indicates PCA-transformed input variables (see option strings)
	Use["LikelihoodKDE"]   = 0;
	Use["LikelihoodMIX"]   = 0;
	//
	// Mutidimensional likelihood and Nearest-Neighbour methods
	Use["PDERS"]           = 0;
	Use["PDERSD"]          = 0;
	Use["PDERSPCA"]        = 0;
	Use["PDEFoam"]         = 0;
	Use["PDEFoamBoost"]    = 0; // uses generalised MVA method boosting
	Use["KNN"]             = 0; // k-nearest neighbour method
	//
	// Linear Discriminant Analysis
	Use["LD"]              = 0; // Linear Discriminant identical to Fisher
	Use["Fisher"]          = 0;
	Use["FisherG"]         = 0;
	Use["BoostedFisher"]   = 0; // uses generalised MVA method boosting
	Use["HMatrix"]         = 0;
	//
	// Function Discriminant analysis
	Use["FDA_GA"]          = 0; // minimisation of user-defined function using Genetics Algorithm
	Use["FDA_SA"]          = 0;
	Use["FDA_MC"]          = 0;
	Use["FDA_MT"]          = 0;
	Use["FDA_GAMT"]        = 0;
	Use["FDA_MCMT"]        = 0;
	//
	// Neural Networks (all are feed-forward Multilayer Perceptrons)
	Use["MLP"]             = 0; // Recommended ANN
	Use["MLPBFGS"]         = 0; // Recommended ANN with optional training method
	Use["MLPBNN"]          = 0; // Recommended ANN with BFGS training method and bayesian regulator
	Use["CFMlpANN"]        = 0; // Depreciated ANN from ALEPH
	Use["TMlpANN"]         = 0; // ROOT's own ANN
	Use["DNN_CPU"] = 0;         // CUDA-accelerated DNN training.
	Use["DNN_GPU"] = 0;         // Multi-core accelerated DNN.
	//
	// Support Vector Machine
	Use["SVM"]             = 0;
	//
	// Boosted Decision Trees
	Use["BDT"]             = 1; // uses Adaptive Boost
	Use["BDTG"]            = 0; // uses Gradient Boost
	Use["BDTB"]            = 0; // uses Bagging
	Use["BDTD"]            = 0; // decorrelation + Adaptive Boost
	Use["BDTF"]            = 0; // allow usage of fisher discriminant for node splitting
	//
	// Friedman's RuleFit method, ie, an optimised series of cuts ("rules")
	Use["RuleFit"]         = 0;
	// ---------------------------------------------------------------
	Use["Plugin"]          = 0;
	Use["Category"]        = 0;
	Use["SVM_Gauss"]       = 0;
	Use["SVM_Poly"]        = 0;
	Use["SVM_Lin"]         = 0;

	std::cout << std::endl;
	std::cout << "==> Start TMVAClassificationApplication" << std::endl;

	// Select methods (don't look at this code - not of interest)
	if (myMethodList != "") {
		for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) it->second = 0;

		std::vector<TString> mlist = gTools().SplitString( myMethodList, ',' );
		for (UInt_t i=0; i<mlist.size(); i++) {
			std::string regMethod(mlist[i]);

			if (Use.find(regMethod) == Use.end()) {
				std::cout << "Method \"" << regMethod
					<< "\" not known in TMVA under this name. Choose among the following:" << std::endl;
				for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) {
					std::cout << it->first << " ";
				}
				std::cout << std::endl;
				return;
			}
			Use[regMethod] = 1;
		}
	}

	// --------------------------------------------------------------------------------------------------

	// Create the Reader object

	TMVA::Reader *reader = new TMVA::Reader( "!Color:!Silent" );

	// Create a set of variables and declare them to the reader
	// - the variable names MUST corresponds in name and type to those given in the weight file(s) used
	Float_t var1, var2; 
	Float_t var3, var4; 
	Float_t var5;
	Float_t var6, var7;
	Float_t var8, var9;
	Float_t var10; 
	Float_t var11;
	Float_t var12;

	// -- B0 variables
    reader->AddVariable( "log(B0_IPCHI2_OWNPV)", &var1);
    reader->AddVariable( "log(B0_ENDVERTEX_CHI2)", &var2);

    // -- D variables
    reader->AddVariable( "log(D_ENDVERTEX_CHI2)", &var3);
	reader->AddVariable( "log(D_FDCHI2_ORIVX)", &var4);

    // -- K variables
    reader->AddVariable( "log(K_IPCHI2_OWNPV)", &var5);

    // -- pi1 variables
    reader->AddVariable( "log(pi1_PT)", &var6);
    reader->AddVariable( "log(pi1_IPCHI2_OWNPV)", &var7);

    // -- pi2 variables 
    reader->AddVariable( "log(pi2_PT)", &var8);
    reader->AddVariable( "log(pi2_IPCHI2_OWNPV)", &var9);

    // -- p variables
    reader->AddVariable( "log(p_PT)", &var10);

    // -- pbar variables
    reader->AddVariable( "log(pbar_PT)", &var11);

    // -- pi variables
    reader->AddVariable( "log(pi_PT)", &var12);
	/*
	// Spectator variables declared in the training have to be added to the reader, too
	Float_t spec1,spec2;
	reader->AddSpectator( "spec1 := var1*2",   &spec1 );
	reader->AddSpectator( "spec2 := var1*3",   &spec2 );

	Float_t Category_cat1, Category_cat2, Category_cat3;
	if (Use["Category"]){
	// Add artificial spectators for distinguishing categories
	reader->AddSpectator( "Category_cat1 := var3<=0",             &Category_cat1 );
	reader->AddSpectator( "Category_cat2 := (var3>0)&&(var4<0)",  &Category_cat2 );
	reader->AddSpectator( "Category_cat3 := (var3>0)&&(var4>=0)", &Category_cat3 );
	}
	*/
	// Book the MVA methods

	TString dir    = "dataset/weights/";
	TString prefix = "TMVAClassification";

	// Book method(s)
	for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) {
		if (it->second) {
			TString methodName = TString(it->first) + TString(" method");
			TString weightfile = dir + prefix + TString("_") + TString(it->first) + TString(".weights.xml");
			reader->BookMVA( methodName, weightfile );
		}
	}


	//TFile *input(0);
	//TString fname = "/mnt/data3/songyx/B2JpsiPhiKst/Samples/output_data_2/data_all.root";
	//input = TFile::Open( fname ); // check if file in local directory exists


	// Prepare input tree (this must be replaced by your data source)
	// in this example, there is a toy tree with signal and one with background events
	// we'll later on use only the "signal" events for the test in this example.
	//
	TFile *input(0);
	input = TFile::Open( inputFile ); // check if file in local directory exists
	if (input->IsZombie()){
		cout << "File not found, skipping file: " << input << endl;
		if (input) delete input;
        gApplication->Terminate(1);
        return;
	}

	/*
	   TFile *input(0);
	   TString fname = "./tmva_class_example.root";
	   if (!gSystem->AccessPathName( fname )) {
	   input = TFile::Open( fname ); // check if file in local directory exists
	   }
	   else {
	   TFile::SetCacheFileDir(".");
	   input = TFile::Open("http://root.cern.ch/files/tmva_class_example.root", "CACHEREAD"); // if not: download from ROOT server
	   }
	   if (!input) {
	   std::cout << "ERROR: could not open data file" << std::endl;
	   exit(1);
	   }
	   */
	std::cout << "--- TMVAClassificationApp    : Using input file: " << input->GetName() << std::endl;

	// Event loop

	// Prepare the event tree
	// - Here the variable names have to corresponds to your tree
	// - You can use the same variables as above which is slightly faster,
	//   but of course you can use different ones and copy the values inside the event loop
	//
	std::cout << "--- Select signal sample" << std::endl;
	TTree* theTree = (TTree*)input->Get("DecayTree");


	/*
	Float_t userVar1, userVar2;
	theTree->SetBranchAddress( "var1", &userVar1 );
	theTree->SetBranchAddress( "var2", &userVar2 );
	theTree->SetBranchAddress( "var3", &var3 );
	theTree->SetBranchAddress( "var4", &var4 );
	*/

	Double_t dvar1, dvar2; 
	Double_t dvar3, dvar4; 
	Double_t dvar5;
	Double_t dvar6, dvar7;
	Double_t dvar8, dvar9;
	Double_t dvar10; 
	Double_t dvar11;
	Double_t dvar12;

    // -- B0 variables
    theTree->SetBranchAddress( "B0_IPCHI2_OWNPV", &dvar1);
    theTree->SetBranchAddress( "B0_ENDVERTEX_CHI2", &dvar2);

    // -- D dvariables
    theTree->SetBranchAddress( "D_ENDVERTEX_CHI2", &dvar3);
	theTree->SetBranchAddress( "D_FDCHI2_ORIVX", &dvar4);

    // -- K dvariables
    theTree->SetBranchAddress( "K_IPCHI2_OWNPV", &dvar5);
    // -- pi1 dvariables
    theTree->SetBranchAddress( "pi1_PT", &dvar6);
    theTree->SetBranchAddress( "pi1_IPCHI2_OWNPV", &dvar7);

    // -- pi2 dvariables 
    theTree->SetBranchAddress( "pi2_PT", &dvar8);
    theTree->SetBranchAddress( "pi2_IPCHI2_OWNPV", &dvar9);

    // -- p dvariables
    theTree->SetBranchAddress( "p_PT", &dvar10);

    // -- pbar dvariables
    theTree->SetBranchAddress( "pbar_PT", &dvar11);

    // -- pi dvariables
    theTree->SetBranchAddress( "pi_PT", &dvar12);

	// Efficiency calculator for cut method
	Int_t    nSelCutsGA = 0;
	Double_t effS       = 0.7;

	std::vector<Float_t> vecVar(4); // vector for EvaluateMVA tests

	std::cout << "--- Processing: " << theTree->GetEntries() << " events" << std::endl;
	TStopwatch sw;
	sw.Start();

	TFile *target  = new TFile( outputFile,"RECREATE" );
	Float_t BDT;
	Float_t BDTG;

	TCut cut="1";
	TTree *tree= theTree->CloneTree(0);

	tree->Branch("BDT" ,&BDT ,"BDT/F");
	//tree->Branch("BDTG",&BDTG,"BDTG/F");

	for (Long64_t ievt=0; ievt<theTree->GetEntries();ievt++) {

		BDT =-100;
		BDTG=-100;

		if (ievt%1000 == 0) std::cout << "--- ... Processing event: " << ievt << std::endl;

		theTree->GetEntry(ievt);

		//var1 = userVar1 + userVar2;
		//var2 = userVar1 - userVar2;

		var1  = (double)log(dvar1);
		var2  = (double)log(dvar2);
		var3  = (double)log(dvar3);
		var4  = (double)log(dvar4);
		var5  = (double)log(dvar5);
		var6  = (double)log(dvar6);
		var7  = (double)log(dvar7);
		var8  = (double)log(dvar8);
		var9  = (double)log(dvar9);
		var10 = (double)log(dvar10);
		var11 = (double)log(dvar11);
		var12 = (double)log(dvar12);

		BDT =reader->EvaluateMVA("BDT method");
		//BDTG=reader->EvaluateMVA("BDTG method");
		tree->Fill();
	}
	tree->Write();
	// Get elapsed time
	sw.Stop();
	std::cout << "--- End of event loop: "; sw.Print();

	target->Close();

	std::cout << "--- Created root file: \"TMVApp.root\" containing the MVA output histograms" << std::endl;

	delete reader;

	std::cout << "==> TMVAClassificationApplication is done!" << std::endl << std::endl;
}

int main( int argc, char** argv )
{
	TString methodList, inputFile, outputFile;
	for (int i=1; i<argc; i++) {
		TString regMethod(argv[i]);
		if(regMethod=="-b" || regMethod=="--batch") continue;
		if (!methodList.IsNull()) methodList += TString(",");
		methodList += regMethod;
	}
	TMVAClassificationApplication(methodList, inputFile, outputFile);
	return 0;
}
