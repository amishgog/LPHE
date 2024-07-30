//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jun 20 15:28:11 2024 by ROOT version 6.30/04
// from TTree DecayTree/DecayTree
// found on file: mc_2018_MD_PIDCorr.root
//////////////////////////////////////////////////////////

#ifndef make_add_mc_h
#define make_add_mc_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class make_add_mc {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxB0_ENDVERTEX_COV = 1;
   static constexpr Int_t kMaxB0_OWNPV_COV = 1;
   static constexpr Int_t kMaxD_ENDVERTEX_COV = 1;
   static constexpr Int_t kMaxD_OWNPV_COV = 1;
   static constexpr Int_t kMaxD_ORIVX_COV = 1;
   static constexpr Int_t kMaxK_OWNPV_COV = 1;
   static constexpr Int_t kMaxK_ORIVX_COV = 1;
   static constexpr Int_t kMaxpi1_OWNPV_COV = 1;
   static constexpr Int_t kMaxpi1_ORIVX_COV = 1;
   static constexpr Int_t kMaxpi2_OWNPV_COV = 1;
   static constexpr Int_t kMaxpi2_ORIVX_COV = 1;
   static constexpr Int_t kMaxa_ENDVERTEX_COV = 1;
   static constexpr Int_t kMaxa_OWNPV_COV = 1;
   static constexpr Int_t kMaxa_ORIVX_COV = 1;
   static constexpr Int_t kMaxp_OWNPV_COV = 1;
   static constexpr Int_t kMaxp_ORIVX_COV = 1;
   static constexpr Int_t kMaxpbar_OWNPV_COV = 1;
   static constexpr Int_t kMaxpbar_ORIVX_COV = 1;
   static constexpr Int_t kMaxpi_OWNPV_COV = 1;
   static constexpr Int_t kMaxpi_ORIVX_COV = 1;

   // Declaration of leaf types
   Double_t        B0_DiraAngleError;
   Double_t        B0_DiraCosError;
   Double_t        B0_DiraAngle;
   Double_t        B0_DiraCos;
   Double_t        B0_ENDVERTEX_X;
   Double_t        B0_ENDVERTEX_Y;
   Double_t        B0_ENDVERTEX_Z;
   Double_t        B0_ENDVERTEX_XERR;
   Double_t        B0_ENDVERTEX_YERR;
   Double_t        B0_ENDVERTEX_ZERR;
   Double_t        B0_ENDVERTEX_CHI2;
   Int_t           B0_ENDVERTEX_NDOF;
   Float_t         B0_ENDVERTEX_COV_[9];
   Double_t        B0_OWNPV_X;
   Double_t        B0_OWNPV_Y;
   Double_t        B0_OWNPV_Z;
   Double_t        B0_OWNPV_XERR;
   Double_t        B0_OWNPV_YERR;
   Double_t        B0_OWNPV_ZERR;
   Double_t        B0_OWNPV_CHI2;
   Int_t           B0_OWNPV_NDOF;
   Float_t         B0_OWNPV_COV_[9];
   Double_t        B0_IP_OWNPV;
   Double_t        B0_IPCHI2_OWNPV;
   Double_t        B0_FD_OWNPV;
   Double_t        B0_FDCHI2_OWNPV;
   Double_t        B0_DIRA_OWNPV;
   Double_t        B0_P;
   Double_t        B0_PT;
   Double_t        B0_PE;
   Double_t        B0_PX;
   Double_t        B0_PY;
   Double_t        B0_PZ;
   Double_t        B0_MM;
   Double_t        B0_MMERR;
   Double_t        B0_M;
   Int_t           B0_BKGCAT;
   Int_t           B0_TRUEID;
   Double_t        B0_TRUECosTheta;
   ULong64_t       B0_MCP_numPseudoTypes;
   Int_t           B0_MCP_MCP_PseudoLen;
   Float_t         B0_MCP_PseudoTypes[5];   //[B0_MCP_MCP_PseudoLen]
   Int_t           B0_MC_MOTHER_ID;
   Int_t           B0_MC_MOTHER_KEY;
   Int_t           B0_MC_GD_MOTHER_ID;
   Int_t           B0_MC_GD_MOTHER_KEY;
   Int_t           B0_MC_GD_GD_MOTHER_ID;
   Int_t           B0_MC_GD_GD_MOTHER_KEY;
   Double_t        B0_TRUEP_E;
   Double_t        B0_TRUEP_X;
   Double_t        B0_TRUEP_Y;
   Double_t        B0_TRUEP_Z;
   Double_t        B0_TRUEPT;
   Double_t        B0_TRUEORIGINVERTEX_X;
   Double_t        B0_TRUEORIGINVERTEX_Y;
   Double_t        B0_TRUEORIGINVERTEX_Z;
   Double_t        B0_TRUEENDVERTEX_X;
   Double_t        B0_TRUEENDVERTEX_Y;
   Double_t        B0_TRUEENDVERTEX_Z;
   Bool_t          B0_TRUEISSTABLE;
   Double_t        B0_TRUETAU;
   Int_t           B0_ID;
   Int_t           B0_MC_ISPROMPT;
   Int_t           B0_MC_LONGLIVED_ID;
   Int_t           B0_MC_LONGLIVED_KEY;
   Int_t           B0_Reconstructible;
   Int_t           B0_Reconstructed;
   Int_t           B0_ProtoParticles;
   Float_t         B0_PP_PX[1];   //[B0_ProtoParticles]
   Float_t         B0_PP_PY[1];   //[B0_ProtoParticles]
   Float_t         B0_PP_PZ[1];   //[B0_ProtoParticles]
   Float_t         B0_PP_Weight[1];   //[B0_ProtoParticles]
   Float_t         B0_PP_tr_pchi2[1];   //[B0_ProtoParticles]
   Float_t         B0_PP_DLLe[1];   //[B0_ProtoParticles]
   Float_t         B0_PP_DLLk[1];   //[B0_ProtoParticles]
   Float_t         B0_PP_DLLp[1];   //[B0_ProtoParticles]
   Float_t         B0_PP_DLLmu[1];   //[B0_ProtoParticles]
   Double_t        B0_TAU;
   Double_t        B0_TAUERR;
   Double_t        B0_TAUCHI2;
   Double_t        B0_X;
   Double_t        B0_Y;
   Double_t        B0_NumVtxWithinChi2WindowOneTrack;
   Double_t        B0_SmallestDeltaChi2OneTrack;
   Double_t        B0_SmallestDeltaChi2MassOneTrack;
   Double_t        B0_SmallestDeltaChi2TwoTracks;
   Double_t        B0_SmallestDeltaChi2MassTwoTracks;
   Double_t        B0_DTF_All;
   Double_t        B0_DTF_MASS;
   Double_t        B0_DOCA12;
   Double_t        B0_DOCACHI2;
   Double_t        B0_ETA;
   Double_t        B0_LOKI_BPVCORRM;
   Double_t        B0_LOKI_BPVLTIME;
   Double_t        B0_LOKI_DIRA;
   Double_t        B0_LOKI_FDCHI2;
   Double_t        B0_LOKI_FDS;
   Double_t        B0_LOKI_IPCHI2;
   Double_t        B0_LOKI_MAXDOCA;
   Double_t        B0_MASS12;
   Double_t        B0_PHI;
   Int_t           B0_PVALLFit_nPV;
   Int_t           B0_PVDFit_nPV;
   Int_t           B0_PVFit_nPV;
   Bool_t          B0_L0Global_Dec;
   Bool_t          B0_L0Global_TIS;
   Bool_t          B0_L0Global_TOS;
   Bool_t          B0_Hlt1Global_Dec;
   Bool_t          B0_Hlt1Global_TIS;
   Bool_t          B0_Hlt1Global_TOS;
   Bool_t          B0_Hlt1Phys_Dec;
   Bool_t          B0_Hlt1Phys_TIS;
   Bool_t          B0_Hlt1Phys_TOS;
   Bool_t          B0_Hlt2Global_Dec;
   Bool_t          B0_Hlt2Global_TIS;
   Bool_t          B0_Hlt2Global_TOS;
   Bool_t          B0_Hlt2Phys_Dec;
   Bool_t          B0_Hlt2Phys_TIS;
   Bool_t          B0_Hlt2Phys_TOS;
   Bool_t          B0_L0HadronDecision_Dec;
   Bool_t          B0_L0HadronDecision_TIS;
   Bool_t          B0_L0HadronDecision_TOS;
   Bool_t          B0_L0GlobalDecision_Dec;
   Bool_t          B0_L0GlobalDecision_TIS;
   Bool_t          B0_L0GlobalDecision_TOS;
   Bool_t          B0_L0ElectronDecision_Dec;
   Bool_t          B0_L0ElectronDecision_TIS;
   Bool_t          B0_L0ElectronDecision_TOS;
   Bool_t          B0_L0MuonDecision_Dec;
   Bool_t          B0_L0MuonDecision_TIS;
   Bool_t          B0_L0MuonDecision_TOS;
   Bool_t          B0_L0MuonHighDecision_Dec;
   Bool_t          B0_L0MuonHighDecision_TIS;
   Bool_t          B0_L0MuonHighDecision_TOS;
   Bool_t          B0_L0PhysDecision_Dec;
   Bool_t          B0_L0PhysDecision_TIS;
   Bool_t          B0_L0PhysDecision_TOS;
   Bool_t          B0_L0PhotonDecision_Dec;
   Bool_t          B0_L0PhotonDecision_TIS;
   Bool_t          B0_L0PhotonDecision_TOS;
   Bool_t          B0_L0DiMuonDecision_Dec;
   Bool_t          B0_L0DiMuonDecision_TIS;
   Bool_t          B0_L0DiMuonDecision_TOS;
   Bool_t          B0_Hlt1TrackMVADecision_Dec;
   Bool_t          B0_Hlt1TrackMVADecision_TIS;
   Bool_t          B0_Hlt1TrackMVADecision_TOS;
   Bool_t          B0_Hlt1TwoTrackMVADecision_Dec;
   Bool_t          B0_Hlt1TwoTrackMVADecision_TIS;
   Bool_t          B0_Hlt1TwoTrackMVADecision_TOS;
   Bool_t          B0_Hlt1TrackAllL0Decision_Dec;
   Bool_t          B0_Hlt1TrackAllL0Decision_TIS;
   Bool_t          B0_Hlt1TrackAllL0Decision_TOS;
   Bool_t          B0_Hlt1TrackMuonDecision_Dec;
   Bool_t          B0_Hlt1TrackMuonDecision_TIS;
   Bool_t          B0_Hlt1TrackMuonDecision_TOS;
   Bool_t          B0_Hlt1TrackPhotonDecision_Dec;
   Bool_t          B0_Hlt1TrackPhotonDecision_TIS;
   Bool_t          B0_Hlt1TrackPhotonDecision_TOS;
   Bool_t          B0_Hlt1GlobalDecision_Dec;
   Bool_t          B0_Hlt1GlobalDecision_TIS;
   Bool_t          B0_Hlt1GlobalDecision_TOS;
   Bool_t          B0_Hlt1TrackMVALooseDecision_Dec;
   Bool_t          B0_Hlt1TrackMVALooseDecision_TIS;
   Bool_t          B0_Hlt1TrackMVALooseDecision_TOS;
   Bool_t          B0_Hlt1TwoTrackMVALooseDecision_Dec;
   Bool_t          B0_Hlt1TwoTrackMVALooseDecision_TIS;
   Bool_t          B0_Hlt1TwoTrackMVALooseDecision_TOS;
   Bool_t          B0_Hlt1L0AnyDecision_Dec;
   Bool_t          B0_Hlt1L0AnyDecision_TIS;
   Bool_t          B0_Hlt1L0AnyDecision_TOS;
   Bool_t          B0_Hlt1TrackForwardPassThroughDecision_Dec;
   Bool_t          B0_Hlt1TrackForwardPassThroughDecision_TIS;
   Bool_t          B0_Hlt1TrackForwardPassThroughDecision_TOS;
   Bool_t          B0_Hlt1TrackForwardPassThroughLooseDecision_Dec;
   Bool_t          B0_Hlt1TrackForwardPassThroughLooseDecision_TIS;
   Bool_t          B0_Hlt1TrackForwardPassThroughLooseDecision_TOS;
   Bool_t          B0_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          B0_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          B0_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          B0_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          B0_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          B0_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          B0_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          B0_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          B0_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          B0_Hlt2GlobalDecision_Dec;
   Bool_t          B0_Hlt2GlobalDecision_TIS;
   Bool_t          B0_Hlt2GlobalDecision_TOS;
   Bool_t          B0_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          B0_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          B0_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          B0_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          B0_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          B0_Hlt2Topo2BodyDecision_Dec;
   Bool_t          B0_Hlt2Topo2BodyDecision_TIS;
   Bool_t          B0_Hlt2Topo2BodyDecision_TOS;
   Bool_t          B0_Hlt2Topo3BodyDecision_Dec;
   Bool_t          B0_Hlt2Topo3BodyDecision_TIS;
   Bool_t          B0_Hlt2Topo3BodyDecision_TOS;
   Bool_t          B0_Hlt2Topo4BodyDecision_Dec;
   Bool_t          B0_Hlt2Topo4BodyDecision_TIS;
   Bool_t          B0_Hlt2Topo4BodyDecision_TOS;
   Double_t        D_CosTheta;
   Double_t        D_ENDVERTEX_X;
   Double_t        D_ENDVERTEX_Y;
   Double_t        D_ENDVERTEX_Z;
   Double_t        D_ENDVERTEX_XERR;
   Double_t        D_ENDVERTEX_YERR;
   Double_t        D_ENDVERTEX_ZERR;
   Double_t        D_ENDVERTEX_CHI2;
   Int_t           D_ENDVERTEX_NDOF;
   Float_t         D_ENDVERTEX_COV_[9];
   Double_t        D_OWNPV_X;
   Double_t        D_OWNPV_Y;
   Double_t        D_OWNPV_Z;
   Double_t        D_OWNPV_XERR;
   Double_t        D_OWNPV_YERR;
   Double_t        D_OWNPV_ZERR;
   Double_t        D_OWNPV_CHI2;
   Int_t           D_OWNPV_NDOF;
   Float_t         D_OWNPV_COV_[9];
   Double_t        D_IP_OWNPV;
   Double_t        D_IPCHI2_OWNPV;
   Double_t        D_FD_OWNPV;
   Double_t        D_FDCHI2_OWNPV;
   Double_t        D_DIRA_OWNPV;
   Double_t        D_ORIVX_X;
   Double_t        D_ORIVX_Y;
   Double_t        D_ORIVX_Z;
   Double_t        D_ORIVX_XERR;
   Double_t        D_ORIVX_YERR;
   Double_t        D_ORIVX_ZERR;
   Double_t        D_ORIVX_CHI2;
   Int_t           D_ORIVX_NDOF;
   Float_t         D_ORIVX_COV_[9];
   Double_t        D_FD_ORIVX;
   Double_t        D_FDCHI2_ORIVX;
   Double_t        D_DIRA_ORIVX;
   Double_t        D_P;
   Double_t        D_PT;
   Double_t        D_PE;
   Double_t        D_PX;
   Double_t        D_PY;
   Double_t        D_PZ;
   Double_t        D_MM;
   Double_t        D_MMERR;
   Double_t        D_M;
   Int_t           D_BKGCAT;
   Int_t           D_TRUEID;
   Double_t        D_TRUECosTheta;
   ULong64_t       D_MCP_numPseudoTypes;
   Int_t           D_MCP_MCP_PseudoLen;
   Float_t         D_MCP_PseudoTypes[5];   //[D_MCP_MCP_PseudoLen]
   Int_t           D_MC_MOTHER_ID;
   Int_t           D_MC_MOTHER_KEY;
   Int_t           D_MC_GD_MOTHER_ID;
   Int_t           D_MC_GD_MOTHER_KEY;
   Int_t           D_MC_GD_GD_MOTHER_ID;
   Int_t           D_MC_GD_GD_MOTHER_KEY;
   Double_t        D_TRUEP_E;
   Double_t        D_TRUEP_X;
   Double_t        D_TRUEP_Y;
   Double_t        D_TRUEP_Z;
   Double_t        D_TRUEPT;
   Double_t        D_TRUEORIGINVERTEX_X;
   Double_t        D_TRUEORIGINVERTEX_Y;
   Double_t        D_TRUEORIGINVERTEX_Z;
   Double_t        D_TRUEENDVERTEX_X;
   Double_t        D_TRUEENDVERTEX_Y;
   Double_t        D_TRUEENDVERTEX_Z;
   Bool_t          D_TRUEISSTABLE;
   Double_t        D_TRUETAU;
   Int_t           D_ID;
   Int_t           D_MC_ISPROMPT;
   Int_t           D_MC_LONGLIVED_ID;
   Int_t           D_MC_LONGLIVED_KEY;
   Int_t           D_Reconstructible;
   Int_t           D_Reconstructed;
   Int_t           D_ProtoParticles;
   Float_t         D_PP_PX[1];   //[D_ProtoParticles]
   Float_t         D_PP_PY[1];   //[D_ProtoParticles]
   Float_t         D_PP_PZ[1];   //[D_ProtoParticles]
   Float_t         D_PP_Weight[1];   //[D_ProtoParticles]
   Float_t         D_PP_tr_pchi2[1];   //[D_ProtoParticles]
   Float_t         D_PP_DLLe[1];   //[D_ProtoParticles]
   Float_t         D_PP_DLLk[1];   //[D_ProtoParticles]
   Float_t         D_PP_DLLp[1];   //[D_ProtoParticles]
   Float_t         D_PP_DLLmu[1];   //[D_ProtoParticles]
   Double_t        D_TAU;
   Double_t        D_TAUERR;
   Double_t        D_TAUCHI2;
   Bool_t          D_L0Global_Dec;
   Bool_t          D_L0Global_TIS;
   Bool_t          D_L0Global_TOS;
   Bool_t          D_Hlt1Global_Dec;
   Bool_t          D_Hlt1Global_TIS;
   Bool_t          D_Hlt1Global_TOS;
   Bool_t          D_Hlt1Phys_Dec;
   Bool_t          D_Hlt1Phys_TIS;
   Bool_t          D_Hlt1Phys_TOS;
   Bool_t          D_Hlt2Global_Dec;
   Bool_t          D_Hlt2Global_TIS;
   Bool_t          D_Hlt2Global_TOS;
   Bool_t          D_Hlt2Phys_Dec;
   Bool_t          D_Hlt2Phys_TIS;
   Bool_t          D_Hlt2Phys_TOS;
   Double_t        D_X;
   Double_t        D_Y;
   Double_t        D_NumVtxWithinChi2WindowOneTrack;
   Double_t        D_SmallestDeltaChi2OneTrack;
   Double_t        D_SmallestDeltaChi2MassOneTrack;
   Double_t        D_SmallestDeltaChi2TwoTracks;
   Double_t        D_SmallestDeltaChi2MassTwoTracks;
   Double_t        D_DOCA12;
   Double_t        D_DOCA13;
   Double_t        D_DOCA23;
   Double_t        D_DOCACHI2_12;
   Double_t        D_DOCACHI2_13;
   Double_t        D_DOCACHI2_23;
   Double_t        D_ETA;
   Double_t        D_LOKI_BPVCORRM;
   Double_t        D_LOKI_BPVLTIME;
   Double_t        D_LOKI_DIRA;
   Double_t        D_LOKI_FDCHI2;
   Double_t        D_LOKI_FDS;
   Double_t        D_LOKI_IPCHI2;
   Double_t        D_LOKI_MAXDOCA;
   Double_t        D_LV01;
   Double_t        D_LV02;
   Double_t        D_MASS12;
   Double_t        D_MASS13;
   Double_t        D_MASS23;
   Double_t        D_PHI;
   Double_t        K_MC12TuneV2_ProbNNe;
   Double_t        K_MC12TuneV2_ProbNNmu;
   Double_t        K_MC12TuneV2_ProbNNpi;
   Double_t        K_MC12TuneV2_ProbNNk;
   Double_t        K_MC12TuneV2_ProbNNp;
   Double_t        K_MC12TuneV2_ProbNNghost;
   Double_t        K_MC12TuneV3_ProbNNe;
   Double_t        K_MC12TuneV3_ProbNNmu;
   Double_t        K_MC12TuneV3_ProbNNpi;
   Double_t        K_MC12TuneV3_ProbNNk;
   Double_t        K_MC12TuneV3_ProbNNp;
   Double_t        K_MC12TuneV3_ProbNNghost;
   Double_t        K_MC12TuneV4_ProbNNe;
   Double_t        K_MC12TuneV4_ProbNNmu;
   Double_t        K_MC12TuneV4_ProbNNpi;
   Double_t        K_MC12TuneV4_ProbNNk;
   Double_t        K_MC12TuneV4_ProbNNp;
   Double_t        K_MC12TuneV4_ProbNNghost;
   Double_t        K_MC15TuneV1_ProbNNe;
   Double_t        K_MC15TuneV1_ProbNNmu;
   Double_t        K_MC15TuneV1_ProbNNpi;
   Double_t        K_MC15TuneV1_ProbNNk;
   Double_t        K_MC15TuneV1_ProbNNp;
   Double_t        K_MC15TuneV1_ProbNNghost;
   Double_t        K_CosTheta;
   Double_t        K_OWNPV_X;
   Double_t        K_OWNPV_Y;
   Double_t        K_OWNPV_Z;
   Double_t        K_OWNPV_XERR;
   Double_t        K_OWNPV_YERR;
   Double_t        K_OWNPV_ZERR;
   Double_t        K_OWNPV_CHI2;
   Int_t           K_OWNPV_NDOF;
   Float_t         K_OWNPV_COV_[9];
   Double_t        K_IP_OWNPV;
   Double_t        K_IPCHI2_OWNPV;
   Double_t        K_ORIVX_X;
   Double_t        K_ORIVX_Y;
   Double_t        K_ORIVX_Z;
   Double_t        K_ORIVX_XERR;
   Double_t        K_ORIVX_YERR;
   Double_t        K_ORIVX_ZERR;
   Double_t        K_ORIVX_CHI2;
   Int_t           K_ORIVX_NDOF;
   Float_t         K_ORIVX_COV_[9];
   Double_t        K_P;
   Double_t        K_PT;
   Double_t        K_PE;
   Double_t        K_PX;
   Double_t        K_PY;
   Double_t        K_PZ;
   Double_t        K_M;
   Int_t           K_TRUEID;
   Double_t        K_TRUECosTheta;
   ULong64_t       K_MCP_numPseudoTypes;
   Int_t           K_MCP_MCP_PseudoLen;
   Float_t         K_MCP_PseudoTypes[1];   //[K_MCP_MCP_PseudoLen]
   Int_t           K_MC_MOTHER_ID;
   Int_t           K_MC_MOTHER_KEY;
   Int_t           K_MC_GD_MOTHER_ID;
   Int_t           K_MC_GD_MOTHER_KEY;
   Int_t           K_MC_GD_GD_MOTHER_ID;
   Int_t           K_MC_GD_GD_MOTHER_KEY;
   Double_t        K_TRUEP_E;
   Double_t        K_TRUEP_X;
   Double_t        K_TRUEP_Y;
   Double_t        K_TRUEP_Z;
   Double_t        K_TRUEPT;
   Double_t        K_TRUEORIGINVERTEX_X;
   Double_t        K_TRUEORIGINVERTEX_Y;
   Double_t        K_TRUEORIGINVERTEX_Z;
   Double_t        K_TRUEENDVERTEX_X;
   Double_t        K_TRUEENDVERTEX_Y;
   Double_t        K_TRUEENDVERTEX_Z;
   Bool_t          K_TRUEISSTABLE;
   Double_t        K_TRUETAU;
   Int_t           K_ID;
   Int_t           K_MC_ISPROMPT;
   Int_t           K_MC_LONGLIVED_ID;
   Int_t           K_MC_LONGLIVED_KEY;
   Int_t           K_Reconstructible;
   Int_t           K_Reconstructed;
   Int_t           K_ProtoParticles;
   Float_t         K_PP_PX[2];   //[K_ProtoParticles]
   Float_t         K_PP_PY[2];   //[K_ProtoParticles]
   Float_t         K_PP_PZ[2];   //[K_ProtoParticles]
   Float_t         K_PP_Weight[2];   //[K_ProtoParticles]
   Float_t         K_PP_tr_pchi2[2];   //[K_ProtoParticles]
   Float_t         K_PP_DLLe[2];   //[K_ProtoParticles]
   Float_t         K_PP_DLLk[2];   //[K_ProtoParticles]
   Float_t         K_PP_DLLp[2];   //[K_ProtoParticles]
   Float_t         K_PP_DLLmu[2];   //[K_ProtoParticles]
   Double_t        K_PIDe;
   Double_t        K_PIDmu;
   Double_t        K_PIDK;
   Double_t        K_PIDp;
   Double_t        K_PIDd;
   Double_t        K_ProbNNe;
   Double_t        K_ProbNNk;
   Double_t        K_ProbNNp;
   Double_t        K_ProbNNpi;
   Double_t        K_ProbNNmu;
   Double_t        K_ProbNNd;
   Double_t        K_ProbNNghost;
   Bool_t          K_hasMuon;
   Bool_t          K_isMuon;
   Bool_t          K_hasRich;
   Bool_t          K_UsedRichAerogel;
   Bool_t          K_UsedRich1Gas;
   Bool_t          K_UsedRich2Gas;
   Bool_t          K_RichAboveElThres;
   Bool_t          K_RichAboveMuThres;
   Bool_t          K_RichAbovePiThres;
   Bool_t          K_RichAboveKaThres;
   Bool_t          K_RichAbovePrThres;
   Bool_t          K_hasCalo;
   Bool_t          K_L0Global_Dec;
   Bool_t          K_L0Global_TIS;
   Bool_t          K_L0Global_TOS;
   Bool_t          K_Hlt1Global_Dec;
   Bool_t          K_Hlt1Global_TIS;
   Bool_t          K_Hlt1Global_TOS;
   Bool_t          K_Hlt1Phys_Dec;
   Bool_t          K_Hlt1Phys_TIS;
   Bool_t          K_Hlt1Phys_TOS;
   Bool_t          K_Hlt2Global_Dec;
   Bool_t          K_Hlt2Global_TIS;
   Bool_t          K_Hlt2Global_TOS;
   Bool_t          K_Hlt2Phys_Dec;
   Bool_t          K_Hlt2Phys_TIS;
   Bool_t          K_Hlt2Phys_TOS;
   Int_t           K_TRACK_Type;
   Int_t           K_TRACK_Key;
   Double_t        K_TRACK_CHI2NDOF;
   Double_t        K_TRACK_PCHI2;
   Double_t        K_TRACK_MatchCHI2;
   Double_t        K_TRACK_GhostProb;
   Double_t        K_TRACK_CloneDist;
   Double_t        K_TRACK_Likelihood;
   Double_t        K_X;
   Double_t        K_Y;
   Double_t        K_ETA;
   Double_t        K_PHI;
   Double_t        pi1_MC12TuneV2_ProbNNe;
   Double_t        pi1_MC12TuneV2_ProbNNmu;
   Double_t        pi1_MC12TuneV2_ProbNNpi;
   Double_t        pi1_MC12TuneV2_ProbNNk;
   Double_t        pi1_MC12TuneV2_ProbNNp;
   Double_t        pi1_MC12TuneV2_ProbNNghost;
   Double_t        pi1_MC12TuneV3_ProbNNe;
   Double_t        pi1_MC12TuneV3_ProbNNmu;
   Double_t        pi1_MC12TuneV3_ProbNNpi;
   Double_t        pi1_MC12TuneV3_ProbNNk;
   Double_t        pi1_MC12TuneV3_ProbNNp;
   Double_t        pi1_MC12TuneV3_ProbNNghost;
   Double_t        pi1_MC12TuneV4_ProbNNe;
   Double_t        pi1_MC12TuneV4_ProbNNmu;
   Double_t        pi1_MC12TuneV4_ProbNNpi;
   Double_t        pi1_MC12TuneV4_ProbNNk;
   Double_t        pi1_MC12TuneV4_ProbNNp;
   Double_t        pi1_MC12TuneV4_ProbNNghost;
   Double_t        pi1_MC15TuneV1_ProbNNe;
   Double_t        pi1_MC15TuneV1_ProbNNmu;
   Double_t        pi1_MC15TuneV1_ProbNNpi;
   Double_t        pi1_MC15TuneV1_ProbNNk;
   Double_t        pi1_MC15TuneV1_ProbNNp;
   Double_t        pi1_MC15TuneV1_ProbNNghost;
   Double_t        pi1_CosTheta;
   Double_t        pi1_OWNPV_X;
   Double_t        pi1_OWNPV_Y;
   Double_t        pi1_OWNPV_Z;
   Double_t        pi1_OWNPV_XERR;
   Double_t        pi1_OWNPV_YERR;
   Double_t        pi1_OWNPV_ZERR;
   Double_t        pi1_OWNPV_CHI2;
   Int_t           pi1_OWNPV_NDOF;
   Float_t         pi1_OWNPV_COV_[9];
   Double_t        pi1_IP_OWNPV;
   Double_t        pi1_IPCHI2_OWNPV;
   Double_t        pi1_ORIVX_X;
   Double_t        pi1_ORIVX_Y;
   Double_t        pi1_ORIVX_Z;
   Double_t        pi1_ORIVX_XERR;
   Double_t        pi1_ORIVX_YERR;
   Double_t        pi1_ORIVX_ZERR;
   Double_t        pi1_ORIVX_CHI2;
   Int_t           pi1_ORIVX_NDOF;
   Float_t         pi1_ORIVX_COV_[9];
   Double_t        pi1_P;
   Double_t        pi1_PT;
   Double_t        pi1_PE;
   Double_t        pi1_PX;
   Double_t        pi1_PY;
   Double_t        pi1_PZ;
   Double_t        pi1_M;
   Int_t           pi1_TRUEID;
   Double_t        pi1_TRUECosTheta;
   ULong64_t       pi1_MCP_numPseudoTypes;
   Int_t           pi1_MCP_MCP_PseudoLen;
   Float_t         pi1_MCP_PseudoTypes[1];   //[pi1_MCP_MCP_PseudoLen]
   Int_t           pi1_MC_MOTHER_ID;
   Int_t           pi1_MC_MOTHER_KEY;
   Int_t           pi1_MC_GD_MOTHER_ID;
   Int_t           pi1_MC_GD_MOTHER_KEY;
   Int_t           pi1_MC_GD_GD_MOTHER_ID;
   Int_t           pi1_MC_GD_GD_MOTHER_KEY;
   Double_t        pi1_TRUEP_E;
   Double_t        pi1_TRUEP_X;
   Double_t        pi1_TRUEP_Y;
   Double_t        pi1_TRUEP_Z;
   Double_t        pi1_TRUEPT;
   Double_t        pi1_TRUEORIGINVERTEX_X;
   Double_t        pi1_TRUEORIGINVERTEX_Y;
   Double_t        pi1_TRUEORIGINVERTEX_Z;
   Double_t        pi1_TRUEENDVERTEX_X;
   Double_t        pi1_TRUEENDVERTEX_Y;
   Double_t        pi1_TRUEENDVERTEX_Z;
   Bool_t          pi1_TRUEISSTABLE;
   Double_t        pi1_TRUETAU;
   Int_t           pi1_ID;
   Int_t           pi1_MC_ISPROMPT;
   Int_t           pi1_MC_LONGLIVED_ID;
   Int_t           pi1_MC_LONGLIVED_KEY;
   Int_t           pi1_Reconstructible;
   Int_t           pi1_Reconstructed;
   Int_t           pi1_ProtoParticles;
   Float_t         pi1_PP_PX[2];   //[pi1_ProtoParticles]
   Float_t         pi1_PP_PY[2];   //[pi1_ProtoParticles]
   Float_t         pi1_PP_PZ[2];   //[pi1_ProtoParticles]
   Float_t         pi1_PP_Weight[2];   //[pi1_ProtoParticles]
   Float_t         pi1_PP_tr_pchi2[2];   //[pi1_ProtoParticles]
   Float_t         pi1_PP_DLLe[2];   //[pi1_ProtoParticles]
   Float_t         pi1_PP_DLLk[2];   //[pi1_ProtoParticles]
   Float_t         pi1_PP_DLLp[2];   //[pi1_ProtoParticles]
   Float_t         pi1_PP_DLLmu[2];   //[pi1_ProtoParticles]
   Double_t        pi1_PIDe;
   Double_t        pi1_PIDmu;
   Double_t        pi1_PIDK;
   Double_t        pi1_PIDp;
   Double_t        pi1_PIDd;
   Double_t        pi1_ProbNNe;
   Double_t        pi1_ProbNNk;
   Double_t        pi1_ProbNNp;
   Double_t        pi1_ProbNNpi;
   Double_t        pi1_ProbNNmu;
   Double_t        pi1_ProbNNd;
   Double_t        pi1_ProbNNghost;
   Bool_t          pi1_hasMuon;
   Bool_t          pi1_isMuon;
   Bool_t          pi1_hasRich;
   Bool_t          pi1_UsedRichAerogel;
   Bool_t          pi1_UsedRich1Gas;
   Bool_t          pi1_UsedRich2Gas;
   Bool_t          pi1_RichAboveElThres;
   Bool_t          pi1_RichAboveMuThres;
   Bool_t          pi1_RichAbovePiThres;
   Bool_t          pi1_RichAboveKaThres;
   Bool_t          pi1_RichAbovePrThres;
   Bool_t          pi1_hasCalo;
   Bool_t          pi1_L0Global_Dec;
   Bool_t          pi1_L0Global_TIS;
   Bool_t          pi1_L0Global_TOS;
   Bool_t          pi1_Hlt1Global_Dec;
   Bool_t          pi1_Hlt1Global_TIS;
   Bool_t          pi1_Hlt1Global_TOS;
   Bool_t          pi1_Hlt1Phys_Dec;
   Bool_t          pi1_Hlt1Phys_TIS;
   Bool_t          pi1_Hlt1Phys_TOS;
   Bool_t          pi1_Hlt2Global_Dec;
   Bool_t          pi1_Hlt2Global_TIS;
   Bool_t          pi1_Hlt2Global_TOS;
   Bool_t          pi1_Hlt2Phys_Dec;
   Bool_t          pi1_Hlt2Phys_TIS;
   Bool_t          pi1_Hlt2Phys_TOS;
   Int_t           pi1_TRACK_Type;
   Int_t           pi1_TRACK_Key;
   Double_t        pi1_TRACK_CHI2NDOF;
   Double_t        pi1_TRACK_PCHI2;
   Double_t        pi1_TRACK_MatchCHI2;
   Double_t        pi1_TRACK_GhostProb;
   Double_t        pi1_TRACK_CloneDist;
   Double_t        pi1_TRACK_Likelihood;
   Double_t        pi1_X;
   Double_t        pi1_Y;
   Double_t        pi1_ETA;
   Double_t        pi1_PHI;
   Double_t        pi2_MC12TuneV2_ProbNNe;
   Double_t        pi2_MC12TuneV2_ProbNNmu;
   Double_t        pi2_MC12TuneV2_ProbNNpi;
   Double_t        pi2_MC12TuneV2_ProbNNk;
   Double_t        pi2_MC12TuneV2_ProbNNp;
   Double_t        pi2_MC12TuneV2_ProbNNghost;
   Double_t        pi2_MC12TuneV3_ProbNNe;
   Double_t        pi2_MC12TuneV3_ProbNNmu;
   Double_t        pi2_MC12TuneV3_ProbNNpi;
   Double_t        pi2_MC12TuneV3_ProbNNk;
   Double_t        pi2_MC12TuneV3_ProbNNp;
   Double_t        pi2_MC12TuneV3_ProbNNghost;
   Double_t        pi2_MC12TuneV4_ProbNNe;
   Double_t        pi2_MC12TuneV4_ProbNNmu;
   Double_t        pi2_MC12TuneV4_ProbNNpi;
   Double_t        pi2_MC12TuneV4_ProbNNk;
   Double_t        pi2_MC12TuneV4_ProbNNp;
   Double_t        pi2_MC12TuneV4_ProbNNghost;
   Double_t        pi2_MC15TuneV1_ProbNNe;
   Double_t        pi2_MC15TuneV1_ProbNNmu;
   Double_t        pi2_MC15TuneV1_ProbNNpi;
   Double_t        pi2_MC15TuneV1_ProbNNk;
   Double_t        pi2_MC15TuneV1_ProbNNp;
   Double_t        pi2_MC15TuneV1_ProbNNghost;
   Double_t        pi2_CosTheta;
   Double_t        pi2_OWNPV_X;
   Double_t        pi2_OWNPV_Y;
   Double_t        pi2_OWNPV_Z;
   Double_t        pi2_OWNPV_XERR;
   Double_t        pi2_OWNPV_YERR;
   Double_t        pi2_OWNPV_ZERR;
   Double_t        pi2_OWNPV_CHI2;
   Int_t           pi2_OWNPV_NDOF;
   Float_t         pi2_OWNPV_COV_[9];
   Double_t        pi2_IP_OWNPV;
   Double_t        pi2_IPCHI2_OWNPV;
   Double_t        pi2_ORIVX_X;
   Double_t        pi2_ORIVX_Y;
   Double_t        pi2_ORIVX_Z;
   Double_t        pi2_ORIVX_XERR;
   Double_t        pi2_ORIVX_YERR;
   Double_t        pi2_ORIVX_ZERR;
   Double_t        pi2_ORIVX_CHI2;
   Int_t           pi2_ORIVX_NDOF;
   Float_t         pi2_ORIVX_COV_[9];
   Double_t        pi2_P;
   Double_t        pi2_PT;
   Double_t        pi2_PE;
   Double_t        pi2_PX;
   Double_t        pi2_PY;
   Double_t        pi2_PZ;
   Double_t        pi2_M;
   Int_t           pi2_TRUEID;
   Double_t        pi2_TRUECosTheta;
   ULong64_t       pi2_MCP_numPseudoTypes;
   Int_t           pi2_MCP_MCP_PseudoLen;
   Float_t         pi2_MCP_PseudoTypes[1];   //[pi2_MCP_MCP_PseudoLen]
   Int_t           pi2_MC_MOTHER_ID;
   Int_t           pi2_MC_MOTHER_KEY;
   Int_t           pi2_MC_GD_MOTHER_ID;
   Int_t           pi2_MC_GD_MOTHER_KEY;
   Int_t           pi2_MC_GD_GD_MOTHER_ID;
   Int_t           pi2_MC_GD_GD_MOTHER_KEY;
   Double_t        pi2_TRUEP_E;
   Double_t        pi2_TRUEP_X;
   Double_t        pi2_TRUEP_Y;
   Double_t        pi2_TRUEP_Z;
   Double_t        pi2_TRUEPT;
   Double_t        pi2_TRUEORIGINVERTEX_X;
   Double_t        pi2_TRUEORIGINVERTEX_Y;
   Double_t        pi2_TRUEORIGINVERTEX_Z;
   Double_t        pi2_TRUEENDVERTEX_X;
   Double_t        pi2_TRUEENDVERTEX_Y;
   Double_t        pi2_TRUEENDVERTEX_Z;
   Bool_t          pi2_TRUEISSTABLE;
   Double_t        pi2_TRUETAU;
   Int_t           pi2_ID;
   Int_t           pi2_MC_ISPROMPT;
   Int_t           pi2_MC_LONGLIVED_ID;
   Int_t           pi2_MC_LONGLIVED_KEY;
   Int_t           pi2_Reconstructible;
   Int_t           pi2_Reconstructed;
   Int_t           pi2_ProtoParticles;
   Float_t         pi2_PP_PX[4];   //[pi2_ProtoParticles]
   Float_t         pi2_PP_PY[4];   //[pi2_ProtoParticles]
   Float_t         pi2_PP_PZ[4];   //[pi2_ProtoParticles]
   Float_t         pi2_PP_Weight[4];   //[pi2_ProtoParticles]
   Float_t         pi2_PP_tr_pchi2[4];   //[pi2_ProtoParticles]
   Float_t         pi2_PP_DLLe[4];   //[pi2_ProtoParticles]
   Float_t         pi2_PP_DLLk[4];   //[pi2_ProtoParticles]
   Float_t         pi2_PP_DLLp[4];   //[pi2_ProtoParticles]
   Float_t         pi2_PP_DLLmu[4];   //[pi2_ProtoParticles]
   Double_t        pi2_PIDe;
   Double_t        pi2_PIDmu;
   Double_t        pi2_PIDK;
   Double_t        pi2_PIDp;
   Double_t        pi2_PIDd;
   Double_t        pi2_ProbNNe;
   Double_t        pi2_ProbNNk;
   Double_t        pi2_ProbNNp;
   Double_t        pi2_ProbNNpi;
   Double_t        pi2_ProbNNmu;
   Double_t        pi2_ProbNNd;
   Double_t        pi2_ProbNNghost;
   Bool_t          pi2_hasMuon;
   Bool_t          pi2_isMuon;
   Bool_t          pi2_hasRich;
   Bool_t          pi2_UsedRichAerogel;
   Bool_t          pi2_UsedRich1Gas;
   Bool_t          pi2_UsedRich2Gas;
   Bool_t          pi2_RichAboveElThres;
   Bool_t          pi2_RichAboveMuThres;
   Bool_t          pi2_RichAbovePiThres;
   Bool_t          pi2_RichAboveKaThres;
   Bool_t          pi2_RichAbovePrThres;
   Bool_t          pi2_hasCalo;
   Bool_t          pi2_L0Global_Dec;
   Bool_t          pi2_L0Global_TIS;
   Bool_t          pi2_L0Global_TOS;
   Bool_t          pi2_Hlt1Global_Dec;
   Bool_t          pi2_Hlt1Global_TIS;
   Bool_t          pi2_Hlt1Global_TOS;
   Bool_t          pi2_Hlt1Phys_Dec;
   Bool_t          pi2_Hlt1Phys_TIS;
   Bool_t          pi2_Hlt1Phys_TOS;
   Bool_t          pi2_Hlt2Global_Dec;
   Bool_t          pi2_Hlt2Global_TIS;
   Bool_t          pi2_Hlt2Global_TOS;
   Bool_t          pi2_Hlt2Phys_Dec;
   Bool_t          pi2_Hlt2Phys_TIS;
   Bool_t          pi2_Hlt2Phys_TOS;
   Int_t           pi2_TRACK_Type;
   Int_t           pi2_TRACK_Key;
   Double_t        pi2_TRACK_CHI2NDOF;
   Double_t        pi2_TRACK_PCHI2;
   Double_t        pi2_TRACK_MatchCHI2;
   Double_t        pi2_TRACK_GhostProb;
   Double_t        pi2_TRACK_CloneDist;
   Double_t        pi2_TRACK_Likelihood;
   Double_t        pi2_X;
   Double_t        pi2_Y;
   Double_t        pi2_ETA;
   Double_t        pi2_PHI;
   Double_t        a_CosTheta;
   Double_t        a_ENDVERTEX_X;
   Double_t        a_ENDVERTEX_Y;
   Double_t        a_ENDVERTEX_Z;
   Double_t        a_ENDVERTEX_XERR;
   Double_t        a_ENDVERTEX_YERR;
   Double_t        a_ENDVERTEX_ZERR;
   Double_t        a_ENDVERTEX_CHI2;
   Int_t           a_ENDVERTEX_NDOF;
   Float_t         a_ENDVERTEX_COV_[9];
   Double_t        a_OWNPV_X;
   Double_t        a_OWNPV_Y;
   Double_t        a_OWNPV_Z;
   Double_t        a_OWNPV_XERR;
   Double_t        a_OWNPV_YERR;
   Double_t        a_OWNPV_ZERR;
   Double_t        a_OWNPV_CHI2;
   Int_t           a_OWNPV_NDOF;
   Float_t         a_OWNPV_COV_[9];
   Double_t        a_IP_OWNPV;
   Double_t        a_IPCHI2_OWNPV;
   Double_t        a_FD_OWNPV;
   Double_t        a_FDCHI2_OWNPV;
   Double_t        a_DIRA_OWNPV;
   Double_t        a_ORIVX_X;
   Double_t        a_ORIVX_Y;
   Double_t        a_ORIVX_Z;
   Double_t        a_ORIVX_XERR;
   Double_t        a_ORIVX_YERR;
   Double_t        a_ORIVX_ZERR;
   Double_t        a_ORIVX_CHI2;
   Int_t           a_ORIVX_NDOF;
   Float_t         a_ORIVX_COV_[9];
   Double_t        a_FD_ORIVX;
   Double_t        a_FDCHI2_ORIVX;
   Double_t        a_DIRA_ORIVX;
   Double_t        a_P;
   Double_t        a_PT;
   Double_t        a_PE;
   Double_t        a_PX;
   Double_t        a_PY;
   Double_t        a_PZ;
   Double_t        a_MM;
   Double_t        a_MMERR;
   Double_t        a_M;
   Int_t           a_BKGCAT;
   Int_t           a_TRUEID;
   Double_t        a_TRUECosTheta;
   ULong64_t       a_MCP_numPseudoTypes;
   Int_t           a_MCP_MCP_PseudoLen;
   Float_t         a_MCP_PseudoTypes[5];   //[a_MCP_MCP_PseudoLen]
   Int_t           a_MC_MOTHER_ID;
   Int_t           a_MC_MOTHER_KEY;
   Int_t           a_MC_GD_MOTHER_ID;
   Int_t           a_MC_GD_MOTHER_KEY;
   Int_t           a_MC_GD_GD_MOTHER_ID;
   Int_t           a_MC_GD_GD_MOTHER_KEY;
   Double_t        a_TRUEP_E;
   Double_t        a_TRUEP_X;
   Double_t        a_TRUEP_Y;
   Double_t        a_TRUEP_Z;
   Double_t        a_TRUEPT;
   Double_t        a_TRUEORIGINVERTEX_X;
   Double_t        a_TRUEORIGINVERTEX_Y;
   Double_t        a_TRUEORIGINVERTEX_Z;
   Double_t        a_TRUEENDVERTEX_X;
   Double_t        a_TRUEENDVERTEX_Y;
   Double_t        a_TRUEENDVERTEX_Z;
   Bool_t          a_TRUEISSTABLE;
   Double_t        a_TRUETAU;
   Int_t           a_ID;
   Int_t           a_MC_ISPROMPT;
   Int_t           a_MC_LONGLIVED_ID;
   Int_t           a_MC_LONGLIVED_KEY;
   Int_t           a_Reconstructible;
   Int_t           a_Reconstructed;
   Int_t           a_ProtoParticles;
   Float_t         a_PP_PX[1];   //[a_ProtoParticles]
   Float_t         a_PP_PY[1];   //[a_ProtoParticles]
   Float_t         a_PP_PZ[1];   //[a_ProtoParticles]
   Float_t         a_PP_Weight[1];   //[a_ProtoParticles]
   Float_t         a_PP_tr_pchi2[1];   //[a_ProtoParticles]
   Float_t         a_PP_DLLe[1];   //[a_ProtoParticles]
   Float_t         a_PP_DLLk[1];   //[a_ProtoParticles]
   Float_t         a_PP_DLLp[1];   //[a_ProtoParticles]
   Float_t         a_PP_DLLmu[1];   //[a_ProtoParticles]
   Double_t        a_TAU;
   Double_t        a_TAUERR;
   Double_t        a_TAUCHI2;
   Bool_t          a_L0Global_Dec;
   Bool_t          a_L0Global_TIS;
   Bool_t          a_L0Global_TOS;
   Bool_t          a_Hlt1Global_Dec;
   Bool_t          a_Hlt1Global_TIS;
   Bool_t          a_Hlt1Global_TOS;
   Bool_t          a_Hlt1Phys_Dec;
   Bool_t          a_Hlt1Phys_TIS;
   Bool_t          a_Hlt1Phys_TOS;
   Bool_t          a_Hlt2Global_Dec;
   Bool_t          a_Hlt2Global_TIS;
   Bool_t          a_Hlt2Global_TOS;
   Bool_t          a_Hlt2Phys_Dec;
   Bool_t          a_Hlt2Phys_TIS;
   Bool_t          a_Hlt2Phys_TOS;
   Double_t        a_X;
   Double_t        a_Y;
   Double_t        a_NumVtxWithinChi2WindowOneTrack;
   Double_t        a_SmallestDeltaChi2OneTrack;
   Double_t        a_SmallestDeltaChi2MassOneTrack;
   Double_t        a_SmallestDeltaChi2TwoTracks;
   Double_t        a_SmallestDeltaChi2MassTwoTracks;
   Double_t        a_DOCA12;
   Double_t        a_DOCA13;
   Double_t        a_DOCA23;
   Double_t        a_DOCACHI2_12;
   Double_t        a_DOCACHI2_13;
   Double_t        a_DOCACHI2_23;
   Double_t        a_ETA;
   Double_t        a_LOKI_BPVCORRM;
   Double_t        a_LOKI_BPVLTIME;
   Double_t        a_LOKI_DIRA;
   Double_t        a_LOKI_FDCHI2;
   Double_t        a_LOKI_FDS;
   Double_t        a_LOKI_IPCHI2;
   Double_t        a_LOKI_MAXDOCA;
   Double_t        a_LV01;
   Double_t        a_LV02;
   Double_t        a_MASS12;
   Double_t        a_MASS13;
   Double_t        a_MASS23;
   Double_t        a_PHI;
   Double_t        p_MC12TuneV2_ProbNNe;
   Double_t        p_MC12TuneV2_ProbNNmu;
   Double_t        p_MC12TuneV2_ProbNNpi;
   Double_t        p_MC12TuneV2_ProbNNk;
   Double_t        p_MC12TuneV2_ProbNNp;
   Double_t        p_MC12TuneV2_ProbNNghost;
   Double_t        p_MC12TuneV3_ProbNNe;
   Double_t        p_MC12TuneV3_ProbNNmu;
   Double_t        p_MC12TuneV3_ProbNNpi;
   Double_t        p_MC12TuneV3_ProbNNk;
   Double_t        p_MC12TuneV3_ProbNNp;
   Double_t        p_MC12TuneV3_ProbNNghost;
   Double_t        p_MC12TuneV4_ProbNNe;
   Double_t        p_MC12TuneV4_ProbNNmu;
   Double_t        p_MC12TuneV4_ProbNNpi;
   Double_t        p_MC12TuneV4_ProbNNk;
   Double_t        p_MC12TuneV4_ProbNNp;
   Double_t        p_MC12TuneV4_ProbNNghost;
   Double_t        p_MC15TuneV1_ProbNNe;
   Double_t        p_MC15TuneV1_ProbNNmu;
   Double_t        p_MC15TuneV1_ProbNNpi;
   Double_t        p_MC15TuneV1_ProbNNk;
   Double_t        p_MC15TuneV1_ProbNNp;
   Double_t        p_MC15TuneV1_ProbNNghost;
   Double_t        p_CosTheta;
   Double_t        p_OWNPV_X;
   Double_t        p_OWNPV_Y;
   Double_t        p_OWNPV_Z;
   Double_t        p_OWNPV_XERR;
   Double_t        p_OWNPV_YERR;
   Double_t        p_OWNPV_ZERR;
   Double_t        p_OWNPV_CHI2;
   Int_t           p_OWNPV_NDOF;
   Float_t         p_OWNPV_COV_[9];
   Double_t        p_IP_OWNPV;
   Double_t        p_IPCHI2_OWNPV;
   Double_t        p_ORIVX_X;
   Double_t        p_ORIVX_Y;
   Double_t        p_ORIVX_Z;
   Double_t        p_ORIVX_XERR;
   Double_t        p_ORIVX_YERR;
   Double_t        p_ORIVX_ZERR;
   Double_t        p_ORIVX_CHI2;
   Int_t           p_ORIVX_NDOF;
   Float_t         p_ORIVX_COV_[9];
   Double_t        p_P;
   Double_t        p_PT;
   Double_t        p_PE;
   Double_t        p_PX;
   Double_t        p_PY;
   Double_t        p_PZ;
   Double_t        p_M;
   Int_t           p_TRUEID;
   Double_t        p_TRUECosTheta;
   ULong64_t       p_MCP_numPseudoTypes;
   Int_t           p_MCP_MCP_PseudoLen;
   Float_t         p_MCP_PseudoTypes[1];   //[p_MCP_MCP_PseudoLen]
   Int_t           p_MC_MOTHER_ID;
   Int_t           p_MC_MOTHER_KEY;
   Int_t           p_MC_GD_MOTHER_ID;
   Int_t           p_MC_GD_MOTHER_KEY;
   Int_t           p_MC_GD_GD_MOTHER_ID;
   Int_t           p_MC_GD_GD_MOTHER_KEY;
   Double_t        p_TRUEP_E;
   Double_t        p_TRUEP_X;
   Double_t        p_TRUEP_Y;
   Double_t        p_TRUEP_Z;
   Double_t        p_TRUEPT;
   Double_t        p_TRUEORIGINVERTEX_X;
   Double_t        p_TRUEORIGINVERTEX_Y;
   Double_t        p_TRUEORIGINVERTEX_Z;
   Double_t        p_TRUEENDVERTEX_X;
   Double_t        p_TRUEENDVERTEX_Y;
   Double_t        p_TRUEENDVERTEX_Z;
   Bool_t          p_TRUEISSTABLE;
   Double_t        p_TRUETAU;
   Int_t           p_ID;
   Int_t           p_MC_ISPROMPT;
   Int_t           p_MC_LONGLIVED_ID;
   Int_t           p_MC_LONGLIVED_KEY;
   Int_t           p_Reconstructible;
   Int_t           p_Reconstructed;
   Int_t           p_ProtoParticles;
   Float_t         p_PP_PX[2];   //[p_ProtoParticles]
   Float_t         p_PP_PY[2];   //[p_ProtoParticles]
   Float_t         p_PP_PZ[2];   //[p_ProtoParticles]
   Float_t         p_PP_Weight[2];   //[p_ProtoParticles]
   Float_t         p_PP_tr_pchi2[2];   //[p_ProtoParticles]
   Float_t         p_PP_DLLe[2];   //[p_ProtoParticles]
   Float_t         p_PP_DLLk[2];   //[p_ProtoParticles]
   Float_t         p_PP_DLLp[2];   //[p_ProtoParticles]
   Float_t         p_PP_DLLmu[2];   //[p_ProtoParticles]
   Double_t        p_PIDe;
   Double_t        p_PIDmu;
   Double_t        p_PIDK;
   Double_t        p_PIDp;
   Double_t        p_PIDd;
   Double_t        p_ProbNNe;
   Double_t        p_ProbNNk;
   Double_t        p_ProbNNp;
   Double_t        p_ProbNNpi;
   Double_t        p_ProbNNmu;
   Double_t        p_ProbNNd;
   Double_t        p_ProbNNghost;
   Bool_t          p_hasMuon;
   Bool_t          p_isMuon;
   Bool_t          p_hasRich;
   Bool_t          p_UsedRichAerogel;
   Bool_t          p_UsedRich1Gas;
   Bool_t          p_UsedRich2Gas;
   Bool_t          p_RichAboveElThres;
   Bool_t          p_RichAboveMuThres;
   Bool_t          p_RichAbovePiThres;
   Bool_t          p_RichAboveKaThres;
   Bool_t          p_RichAbovePrThres;
   Bool_t          p_hasCalo;
   Bool_t          p_L0Global_Dec;
   Bool_t          p_L0Global_TIS;
   Bool_t          p_L0Global_TOS;
   Bool_t          p_Hlt1Global_Dec;
   Bool_t          p_Hlt1Global_TIS;
   Bool_t          p_Hlt1Global_TOS;
   Bool_t          p_Hlt1Phys_Dec;
   Bool_t          p_Hlt1Phys_TIS;
   Bool_t          p_Hlt1Phys_TOS;
   Bool_t          p_Hlt2Global_Dec;
   Bool_t          p_Hlt2Global_TIS;
   Bool_t          p_Hlt2Global_TOS;
   Bool_t          p_Hlt2Phys_Dec;
   Bool_t          p_Hlt2Phys_TIS;
   Bool_t          p_Hlt2Phys_TOS;
   Int_t           p_TRACK_Type;
   Int_t           p_TRACK_Key;
   Double_t        p_TRACK_CHI2NDOF;
   Double_t        p_TRACK_PCHI2;
   Double_t        p_TRACK_MatchCHI2;
   Double_t        p_TRACK_GhostProb;
   Double_t        p_TRACK_CloneDist;
   Double_t        p_TRACK_Likelihood;
   Double_t        p_X;
   Double_t        p_Y;
   Double_t        p_ETA;
   Double_t        p_PHI;
   Double_t        pbar_MC12TuneV2_ProbNNe;
   Double_t        pbar_MC12TuneV2_ProbNNmu;
   Double_t        pbar_MC12TuneV2_ProbNNpi;
   Double_t        pbar_MC12TuneV2_ProbNNk;
   Double_t        pbar_MC12TuneV2_ProbNNp;
   Double_t        pbar_MC12TuneV2_ProbNNghost;
   Double_t        pbar_MC12TuneV3_ProbNNe;
   Double_t        pbar_MC12TuneV3_ProbNNmu;
   Double_t        pbar_MC12TuneV3_ProbNNpi;
   Double_t        pbar_MC12TuneV3_ProbNNk;
   Double_t        pbar_MC12TuneV3_ProbNNp;
   Double_t        pbar_MC12TuneV3_ProbNNghost;
   Double_t        pbar_MC12TuneV4_ProbNNe;
   Double_t        pbar_MC12TuneV4_ProbNNmu;
   Double_t        pbar_MC12TuneV4_ProbNNpi;
   Double_t        pbar_MC12TuneV4_ProbNNk;
   Double_t        pbar_MC12TuneV4_ProbNNp;
   Double_t        pbar_MC12TuneV4_ProbNNghost;
   Double_t        pbar_MC15TuneV1_ProbNNe;
   Double_t        pbar_MC15TuneV1_ProbNNmu;
   Double_t        pbar_MC15TuneV1_ProbNNpi;
   Double_t        pbar_MC15TuneV1_ProbNNk;
   Double_t        pbar_MC15TuneV1_ProbNNp;
   Double_t        pbar_MC15TuneV1_ProbNNghost;
   Double_t        pbar_CosTheta;
   Double_t        pbar_OWNPV_X;
   Double_t        pbar_OWNPV_Y;
   Double_t        pbar_OWNPV_Z;
   Double_t        pbar_OWNPV_XERR;
   Double_t        pbar_OWNPV_YERR;
   Double_t        pbar_OWNPV_ZERR;
   Double_t        pbar_OWNPV_CHI2;
   Int_t           pbar_OWNPV_NDOF;
   Float_t         pbar_OWNPV_COV_[9];
   Double_t        pbar_IP_OWNPV;
   Double_t        pbar_IPCHI2_OWNPV;
   Double_t        pbar_ORIVX_X;
   Double_t        pbar_ORIVX_Y;
   Double_t        pbar_ORIVX_Z;
   Double_t        pbar_ORIVX_XERR;
   Double_t        pbar_ORIVX_YERR;
   Double_t        pbar_ORIVX_ZERR;
   Double_t        pbar_ORIVX_CHI2;
   Int_t           pbar_ORIVX_NDOF;
   Float_t         pbar_ORIVX_COV_[9];
   Double_t        pbar_P;
   Double_t        pbar_PT;
   Double_t        pbar_PE;
   Double_t        pbar_PX;
   Double_t        pbar_PY;
   Double_t        pbar_PZ;
   Double_t        pbar_M;
   Int_t           pbar_TRUEID;
   Double_t        pbar_TRUECosTheta;
   ULong64_t       pbar_MCP_numPseudoTypes;
   Int_t           pbar_MCP_MCP_PseudoLen;
   Float_t         pbar_MCP_PseudoTypes[1];   //[pbar_MCP_MCP_PseudoLen]
   Int_t           pbar_MC_MOTHER_ID;
   Int_t           pbar_MC_MOTHER_KEY;
   Int_t           pbar_MC_GD_MOTHER_ID;
   Int_t           pbar_MC_GD_MOTHER_KEY;
   Int_t           pbar_MC_GD_GD_MOTHER_ID;
   Int_t           pbar_MC_GD_GD_MOTHER_KEY;
   Double_t        pbar_TRUEP_E;
   Double_t        pbar_TRUEP_X;
   Double_t        pbar_TRUEP_Y;
   Double_t        pbar_TRUEP_Z;
   Double_t        pbar_TRUEPT;
   Double_t        pbar_TRUEORIGINVERTEX_X;
   Double_t        pbar_TRUEORIGINVERTEX_Y;
   Double_t        pbar_TRUEORIGINVERTEX_Z;
   Double_t        pbar_TRUEENDVERTEX_X;
   Double_t        pbar_TRUEENDVERTEX_Y;
   Double_t        pbar_TRUEENDVERTEX_Z;
   Bool_t          pbar_TRUEISSTABLE;
   Double_t        pbar_TRUETAU;
   Int_t           pbar_ID;
   Int_t           pbar_MC_ISPROMPT;
   Int_t           pbar_MC_LONGLIVED_ID;
   Int_t           pbar_MC_LONGLIVED_KEY;
   Int_t           pbar_Reconstructible;
   Int_t           pbar_Reconstructed;
   Int_t           pbar_ProtoParticles;
   Float_t         pbar_PP_PX[2];   //[pbar_ProtoParticles]
   Float_t         pbar_PP_PY[2];   //[pbar_ProtoParticles]
   Float_t         pbar_PP_PZ[2];   //[pbar_ProtoParticles]
   Float_t         pbar_PP_Weight[2];   //[pbar_ProtoParticles]
   Float_t         pbar_PP_tr_pchi2[2];   //[pbar_ProtoParticles]
   Float_t         pbar_PP_DLLe[2];   //[pbar_ProtoParticles]
   Float_t         pbar_PP_DLLk[2];   //[pbar_ProtoParticles]
   Float_t         pbar_PP_DLLp[2];   //[pbar_ProtoParticles]
   Float_t         pbar_PP_DLLmu[2];   //[pbar_ProtoParticles]
   Double_t        pbar_PIDe;
   Double_t        pbar_PIDmu;
   Double_t        pbar_PIDK;
   Double_t        pbar_PIDp;
   Double_t        pbar_PIDd;
   Double_t        pbar_ProbNNe;
   Double_t        pbar_ProbNNk;
   Double_t        pbar_ProbNNp;
   Double_t        pbar_ProbNNpi;
   Double_t        pbar_ProbNNmu;
   Double_t        pbar_ProbNNd;
   Double_t        pbar_ProbNNghost;
   Bool_t          pbar_hasMuon;
   Bool_t          pbar_isMuon;
   Bool_t          pbar_hasRich;
   Bool_t          pbar_UsedRichAerogel;
   Bool_t          pbar_UsedRich1Gas;
   Bool_t          pbar_UsedRich2Gas;
   Bool_t          pbar_RichAboveElThres;
   Bool_t          pbar_RichAboveMuThres;
   Bool_t          pbar_RichAbovePiThres;
   Bool_t          pbar_RichAboveKaThres;
   Bool_t          pbar_RichAbovePrThres;
   Bool_t          pbar_hasCalo;
   Bool_t          pbar_L0Global_Dec;
   Bool_t          pbar_L0Global_TIS;
   Bool_t          pbar_L0Global_TOS;
   Bool_t          pbar_Hlt1Global_Dec;
   Bool_t          pbar_Hlt1Global_TIS;
   Bool_t          pbar_Hlt1Global_TOS;
   Bool_t          pbar_Hlt1Phys_Dec;
   Bool_t          pbar_Hlt1Phys_TIS;
   Bool_t          pbar_Hlt1Phys_TOS;
   Bool_t          pbar_Hlt2Global_Dec;
   Bool_t          pbar_Hlt2Global_TIS;
   Bool_t          pbar_Hlt2Global_TOS;
   Bool_t          pbar_Hlt2Phys_Dec;
   Bool_t          pbar_Hlt2Phys_TIS;
   Bool_t          pbar_Hlt2Phys_TOS;
   Int_t           pbar_TRACK_Type;
   Int_t           pbar_TRACK_Key;
   Double_t        pbar_TRACK_CHI2NDOF;
   Double_t        pbar_TRACK_PCHI2;
   Double_t        pbar_TRACK_MatchCHI2;
   Double_t        pbar_TRACK_GhostProb;
   Double_t        pbar_TRACK_CloneDist;
   Double_t        pbar_TRACK_Likelihood;
   Double_t        pbar_X;
   Double_t        pbar_Y;
   Double_t        pbar_ETA;
   Double_t        pbar_PHI;
   Double_t        pi_MC12TuneV2_ProbNNe;
   Double_t        pi_MC12TuneV2_ProbNNmu;
   Double_t        pi_MC12TuneV2_ProbNNpi;
   Double_t        pi_MC12TuneV2_ProbNNk;
   Double_t        pi_MC12TuneV2_ProbNNp;
   Double_t        pi_MC12TuneV2_ProbNNghost;
   Double_t        pi_MC12TuneV3_ProbNNe;
   Double_t        pi_MC12TuneV3_ProbNNmu;
   Double_t        pi_MC12TuneV3_ProbNNpi;
   Double_t        pi_MC12TuneV3_ProbNNk;
   Double_t        pi_MC12TuneV3_ProbNNp;
   Double_t        pi_MC12TuneV3_ProbNNghost;
   Double_t        pi_MC12TuneV4_ProbNNe;
   Double_t        pi_MC12TuneV4_ProbNNmu;
   Double_t        pi_MC12TuneV4_ProbNNpi;
   Double_t        pi_MC12TuneV4_ProbNNk;
   Double_t        pi_MC12TuneV4_ProbNNp;
   Double_t        pi_MC12TuneV4_ProbNNghost;
   Double_t        pi_MC15TuneV1_ProbNNe;
   Double_t        pi_MC15TuneV1_ProbNNmu;
   Double_t        pi_MC15TuneV1_ProbNNpi;
   Double_t        pi_MC15TuneV1_ProbNNk;
   Double_t        pi_MC15TuneV1_ProbNNp;
   Double_t        pi_MC15TuneV1_ProbNNghost;
   Double_t        pi_CosTheta;
   Double_t        pi_OWNPV_X;
   Double_t        pi_OWNPV_Y;
   Double_t        pi_OWNPV_Z;
   Double_t        pi_OWNPV_XERR;
   Double_t        pi_OWNPV_YERR;
   Double_t        pi_OWNPV_ZERR;
   Double_t        pi_OWNPV_CHI2;
   Int_t           pi_OWNPV_NDOF;
   Float_t         pi_OWNPV_COV_[9];
   Double_t        pi_IP_OWNPV;
   Double_t        pi_IPCHI2_OWNPV;
   Double_t        pi_ORIVX_X;
   Double_t        pi_ORIVX_Y;
   Double_t        pi_ORIVX_Z;
   Double_t        pi_ORIVX_XERR;
   Double_t        pi_ORIVX_YERR;
   Double_t        pi_ORIVX_ZERR;
   Double_t        pi_ORIVX_CHI2;
   Int_t           pi_ORIVX_NDOF;
   Float_t         pi_ORIVX_COV_[9];
   Double_t        pi_P;
   Double_t        pi_PT;
   Double_t        pi_PE;
   Double_t        pi_PX;
   Double_t        pi_PY;
   Double_t        pi_PZ;
   Double_t        pi_M;
   Int_t           pi_TRUEID;
   Double_t        pi_TRUECosTheta;
   ULong64_t       pi_MCP_numPseudoTypes;
   Int_t           pi_MCP_MCP_PseudoLen;
   Float_t         pi_MCP_PseudoTypes[1];   //[pi_MCP_MCP_PseudoLen]
   Int_t           pi_MC_MOTHER_ID;
   Int_t           pi_MC_MOTHER_KEY;
   Int_t           pi_MC_GD_MOTHER_ID;
   Int_t           pi_MC_GD_MOTHER_KEY;
   Int_t           pi_MC_GD_GD_MOTHER_ID;
   Int_t           pi_MC_GD_GD_MOTHER_KEY;
   Double_t        pi_TRUEP_E;
   Double_t        pi_TRUEP_X;
   Double_t        pi_TRUEP_Y;
   Double_t        pi_TRUEP_Z;
   Double_t        pi_TRUEPT;
   Double_t        pi_TRUEORIGINVERTEX_X;
   Double_t        pi_TRUEORIGINVERTEX_Y;
   Double_t        pi_TRUEORIGINVERTEX_Z;
   Double_t        pi_TRUEENDVERTEX_X;
   Double_t        pi_TRUEENDVERTEX_Y;
   Double_t        pi_TRUEENDVERTEX_Z;
   Bool_t          pi_TRUEISSTABLE;
   Double_t        pi_TRUETAU;
   Int_t           pi_ID;
   Int_t           pi_MC_ISPROMPT;
   Int_t           pi_MC_LONGLIVED_ID;
   Int_t           pi_MC_LONGLIVED_KEY;
   Int_t           pi_Reconstructible;
   Int_t           pi_Reconstructed;
   Int_t           pi_ProtoParticles;
   Float_t         pi_PP_PX[2];   //[pi_ProtoParticles]
   Float_t         pi_PP_PY[2];   //[pi_ProtoParticles]
   Float_t         pi_PP_PZ[2];   //[pi_ProtoParticles]
   Float_t         pi_PP_Weight[2];   //[pi_ProtoParticles]
   Float_t         pi_PP_tr_pchi2[2];   //[pi_ProtoParticles]
   Float_t         pi_PP_DLLe[2];   //[pi_ProtoParticles]
   Float_t         pi_PP_DLLk[2];   //[pi_ProtoParticles]
   Float_t         pi_PP_DLLp[2];   //[pi_ProtoParticles]
   Float_t         pi_PP_DLLmu[2];   //[pi_ProtoParticles]
   Double_t        pi_PIDe;
   Double_t        pi_PIDmu;
   Double_t        pi_PIDK;
   Double_t        pi_PIDp;
   Double_t        pi_PIDd;
   Double_t        pi_ProbNNe;
   Double_t        pi_ProbNNk;
   Double_t        pi_ProbNNp;
   Double_t        pi_ProbNNpi;
   Double_t        pi_ProbNNmu;
   Double_t        pi_ProbNNd;
   Double_t        pi_ProbNNghost;
   Bool_t          pi_hasMuon;
   Bool_t          pi_isMuon;
   Bool_t          pi_hasRich;
   Bool_t          pi_UsedRichAerogel;
   Bool_t          pi_UsedRich1Gas;
   Bool_t          pi_UsedRich2Gas;
   Bool_t          pi_RichAboveElThres;
   Bool_t          pi_RichAboveMuThres;
   Bool_t          pi_RichAbovePiThres;
   Bool_t          pi_RichAboveKaThres;
   Bool_t          pi_RichAbovePrThres;
   Bool_t          pi_hasCalo;
   Bool_t          pi_L0Global_Dec;
   Bool_t          pi_L0Global_TIS;
   Bool_t          pi_L0Global_TOS;
   Bool_t          pi_Hlt1Global_Dec;
   Bool_t          pi_Hlt1Global_TIS;
   Bool_t          pi_Hlt1Global_TOS;
   Bool_t          pi_Hlt1Phys_Dec;
   Bool_t          pi_Hlt1Phys_TIS;
   Bool_t          pi_Hlt1Phys_TOS;
   Bool_t          pi_Hlt2Global_Dec;
   Bool_t          pi_Hlt2Global_TIS;
   Bool_t          pi_Hlt2Global_TOS;
   Bool_t          pi_Hlt2Phys_Dec;
   Bool_t          pi_Hlt2Phys_TIS;
   Bool_t          pi_Hlt2Phys_TOS;
   Int_t           pi_TRACK_Type;
   Int_t           pi_TRACK_Key;
   Double_t        pi_TRACK_CHI2NDOF;
   Double_t        pi_TRACK_PCHI2;
   Double_t        pi_TRACK_MatchCHI2;
   Double_t        pi_TRACK_GhostProb;
   Double_t        pi_TRACK_CloneDist;
   Double_t        pi_TRACK_Likelihood;
   Double_t        pi_X;
   Double_t        pi_Y;
   Double_t        pi_ETA;
   Double_t        pi_PHI;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLT1TCK;
   UInt_t          HLT2TCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Int_t           nPV;
   Float_t         PVX[6];   //[nPV]
   Float_t         PVY[6];   //[nPV]
   Float_t         PVZ[6];   //[nPV]
   Float_t         PVXERR[6];   //[nPV]
   Float_t         PVYERR[6];   //[nPV]
   Float_t         PVZERR[6];   //[nPV]
   Float_t         PVCHI2[6];   //[nPV]
   Float_t         PVNDOF[6];   //[nPV]
   Float_t         PVNTRACKS[6];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;
   Double_t        B0_PVALLFit_Dplus_Kplus_ID;
   Double_t        B0_PVALLFit_Dplus_Kplus_PE;
   Double_t        B0_PVALLFit_Dplus_Kplus_PX;
   Double_t        B0_PVALLFit_Dplus_Kplus_PY;
   Double_t        B0_PVALLFit_Dplus_Kplus_PZ;
   Double_t        B0_PVALLFit_Dplus_M;
   Double_t        B0_PVALLFit_Dplus_MERR;
   Double_t        B0_PVALLFit_Dplus_P;
   Double_t        B0_PVALLFit_Dplus_PERR;
   Double_t        B0_PVALLFit_Dplus_ctau;
   Double_t        B0_PVALLFit_Dplus_ctauErr;
   Double_t        B0_PVALLFit_Dplus_decayLength;
   Double_t        B0_PVALLFit_Dplus_decayLengthErr;
   Double_t        B0_PVALLFit_Dplus_piplus_0_ID;
   Double_t        B0_PVALLFit_Dplus_piplus_0_PE;
   Double_t        B0_PVALLFit_Dplus_piplus_0_PX;
   Double_t        B0_PVALLFit_Dplus_piplus_0_PY;
   Double_t        B0_PVALLFit_Dplus_piplus_0_PZ;
   Double_t        B0_PVALLFit_Dplus_piplus_ID;
   Double_t        B0_PVALLFit_Dplus_piplus_PE;
   Double_t        B0_PVALLFit_Dplus_piplus_PX;
   Double_t        B0_PVALLFit_Dplus_piplus_PY;
   Double_t        B0_PVALLFit_Dplus_piplus_PZ;
   Double_t        B0_PVALLFit_M;
   Double_t        B0_PVALLFit_MERR;
   Double_t        B0_PVALLFit_P;
   Double_t        B0_PVALLFit_PERR;
   Double_t        B0_PVALLFit_PV_X;
   Double_t        B0_PVALLFit_PV_Y;
   Double_t        B0_PVALLFit_PV_Z;
   Double_t        B0_PVALLFit_PV_key;
   Double_t        B0_PVALLFit_a_1_1260_plus_M;
   Double_t        B0_PVALLFit_a_1_1260_plus_MERR;
   Double_t        B0_PVALLFit_a_1_1260_plus_P;
   Double_t        B0_PVALLFit_a_1_1260_plus_PERR;
   Double_t        B0_PVALLFit_a_1_1260_plus_ctau;
   Double_t        B0_PVALLFit_a_1_1260_plus_ctauErr;
   Double_t        B0_PVALLFit_a_1_1260_plus_decayLength;
   Double_t        B0_PVALLFit_a_1_1260_plus_decayLengthErr;
   Double_t        B0_PVALLFit_a_1_1260_plus_piplus_ID;
   Double_t        B0_PVALLFit_a_1_1260_plus_piplus_PE;
   Double_t        B0_PVALLFit_a_1_1260_plus_piplus_PX;
   Double_t        B0_PVALLFit_a_1_1260_plus_piplus_PY;
   Double_t        B0_PVALLFit_a_1_1260_plus_piplus_PZ;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_0_ID;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_0_PE;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_0_PX;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_0_PY;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_0_PZ;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_ID;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_PE;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_PX;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_PY;
   Double_t        B0_PVALLFit_a_1_1260_plus_pplus_PZ;
   Double_t        B0_PVALLFit_chi2;
   Double_t        B0_PVALLFit_ctau;
   Double_t        B0_PVALLFit_ctauErr;
   Double_t        B0_PVALLFit_decayLength;
   Double_t        B0_PVALLFit_decayLengthErr;
   Double_t        B0_PVALLFit_nDOF;
   Double_t        B0_PVALLFit_nIter;
   Double_t        B0_PVALLFit_status;
   Double_t        B0_PVDFit_Dplus_Kplus_ID;
   Double_t        B0_PVDFit_Dplus_Kplus_PE;
   Double_t        B0_PVDFit_Dplus_Kplus_PX;
   Double_t        B0_PVDFit_Dplus_Kplus_PY;
   Double_t        B0_PVDFit_Dplus_Kplus_PZ;
   Double_t        B0_PVDFit_Dplus_M;
   Double_t        B0_PVDFit_Dplus_MERR;
   Double_t        B0_PVDFit_Dplus_P;
   Double_t        B0_PVDFit_Dplus_PERR;
   Double_t        B0_PVDFit_Dplus_ctau;
   Double_t        B0_PVDFit_Dplus_ctauErr;
   Double_t        B0_PVDFit_Dplus_decayLength;
   Double_t        B0_PVDFit_Dplus_decayLengthErr;
   Double_t        B0_PVDFit_Dplus_piplus_0_ID;
   Double_t        B0_PVDFit_Dplus_piplus_0_PE;
   Double_t        B0_PVDFit_Dplus_piplus_0_PX;
   Double_t        B0_PVDFit_Dplus_piplus_0_PY;
   Double_t        B0_PVDFit_Dplus_piplus_0_PZ;
   Double_t        B0_PVDFit_Dplus_piplus_ID;
   Double_t        B0_PVDFit_Dplus_piplus_PE;
   Double_t        B0_PVDFit_Dplus_piplus_PX;
   Double_t        B0_PVDFit_Dplus_piplus_PY;
   Double_t        B0_PVDFit_Dplus_piplus_PZ;
   Double_t        B0_PVDFit_M;
   Double_t        B0_PVDFit_MERR;
   Double_t        B0_PVDFit_P;
   Double_t        B0_PVDFit_PERR;
   Double_t        B0_PVDFit_PV_X;
   Double_t        B0_PVDFit_PV_Y;
   Double_t        B0_PVDFit_PV_Z;
   Double_t        B0_PVDFit_PV_key;
   Double_t        B0_PVDFit_a_1_1260_plus_M;
   Double_t        B0_PVDFit_a_1_1260_plus_MERR;
   Double_t        B0_PVDFit_a_1_1260_plus_P;
   Double_t        B0_PVDFit_a_1_1260_plus_PERR;
   Double_t        B0_PVDFit_a_1_1260_plus_ctau;
   Double_t        B0_PVDFit_a_1_1260_plus_ctauErr;
   Double_t        B0_PVDFit_a_1_1260_plus_decayLength;
   Double_t        B0_PVDFit_a_1_1260_plus_decayLengthErr;
   Double_t        B0_PVDFit_a_1_1260_plus_piplus_ID;
   Double_t        B0_PVDFit_a_1_1260_plus_piplus_PE;
   Double_t        B0_PVDFit_a_1_1260_plus_piplus_PX;
   Double_t        B0_PVDFit_a_1_1260_plus_piplus_PY;
   Double_t        B0_PVDFit_a_1_1260_plus_piplus_PZ;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_0_ID;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_0_PE;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_0_PX;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_0_PY;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_0_PZ;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_ID;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_PE;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_PX;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_PY;
   Double_t        B0_PVDFit_a_1_1260_plus_pplus_PZ;
   Double_t        B0_PVDFit_chi2;
   Double_t        B0_PVDFit_ctau;
   Double_t        B0_PVDFit_ctauErr;
   Double_t        B0_PVDFit_decayLength;
   Double_t        B0_PVDFit_decayLengthErr;
   Double_t        B0_PVDFit_nDOF;
   Double_t        B0_PVDFit_nIter;
   Double_t        B0_PVDFit_status;
   Double_t        B0_PVFit_Dplus_Kplus_ID;
   Double_t        B0_PVFit_Dplus_Kplus_PE;
   Double_t        B0_PVFit_Dplus_Kplus_PX;
   Double_t        B0_PVFit_Dplus_Kplus_PY;
   Double_t        B0_PVFit_Dplus_Kplus_PZ;
   Double_t        B0_PVFit_Dplus_M;
   Double_t        B0_PVFit_Dplus_MERR;
   Double_t        B0_PVFit_Dplus_P;
   Double_t        B0_PVFit_Dplus_PERR;
   Double_t        B0_PVFit_Dplus_ctau;
   Double_t        B0_PVFit_Dplus_ctauErr;
   Double_t        B0_PVFit_Dplus_decayLength;
   Double_t        B0_PVFit_Dplus_decayLengthErr;
   Double_t        B0_PVFit_Dplus_piplus_0_ID;
   Double_t        B0_PVFit_Dplus_piplus_0_PE;
   Double_t        B0_PVFit_Dplus_piplus_0_PX;
   Double_t        B0_PVFit_Dplus_piplus_0_PY;
   Double_t        B0_PVFit_Dplus_piplus_0_PZ;
   Double_t        B0_PVFit_Dplus_piplus_ID;
   Double_t        B0_PVFit_Dplus_piplus_PE;
   Double_t        B0_PVFit_Dplus_piplus_PX;
   Double_t        B0_PVFit_Dplus_piplus_PY;
   Double_t        B0_PVFit_Dplus_piplus_PZ;
   Double_t        B0_PVFit_M;
   Double_t        B0_PVFit_MERR;
   Double_t        B0_PVFit_P;
   Double_t        B0_PVFit_PERR;
   Double_t        B0_PVFit_PV_X;
   Double_t        B0_PVFit_PV_Y;
   Double_t        B0_PVFit_PV_Z;
   Double_t        B0_PVFit_PV_key;
   Double_t        B0_PVFit_a_1_1260_plus_M;
   Double_t        B0_PVFit_a_1_1260_plus_MERR;
   Double_t        B0_PVFit_a_1_1260_plus_P;
   Double_t        B0_PVFit_a_1_1260_plus_PERR;
   Double_t        B0_PVFit_a_1_1260_plus_ctau;
   Double_t        B0_PVFit_a_1_1260_plus_ctauErr;
   Double_t        B0_PVFit_a_1_1260_plus_decayLength;
   Double_t        B0_PVFit_a_1_1260_plus_decayLengthErr;
   Double_t        B0_PVFit_a_1_1260_plus_piplus_ID;
   Double_t        B0_PVFit_a_1_1260_plus_piplus_PE;
   Double_t        B0_PVFit_a_1_1260_plus_piplus_PX;
   Double_t        B0_PVFit_a_1_1260_plus_piplus_PY;
   Double_t        B0_PVFit_a_1_1260_plus_piplus_PZ;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_0_ID;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_0_PE;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_0_PX;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_0_PY;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_0_PZ;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_ID;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_PE;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_PX;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_PY;
   Double_t        B0_PVFit_a_1_1260_plus_pplus_PZ;
   Double_t        B0_PVFit_chi2;
   Double_t        B0_PVFit_ctau;
   Double_t        B0_PVFit_ctauErr;
   Double_t        B0_PVFit_decayLength;
   Double_t        B0_PVFit_decayLengthErr;
   Double_t        B0_PVFit_nDOF;
   Double_t        B0_PVFit_nIter;
   Double_t        B0_PVFit_status;
   Double_t        K_ProbNNk_corr;
   Double_t        K_ProbNNk_corr_calibstat;
   Double_t        K_ProbNNk_corr_mcstat;
   Double_t        K_ProbNNpi_corr;
   Double_t        K_ProbNNpi_corr_calibstat;
   Double_t        K_ProbNNpi_corr_mcstat;
   Double_t        K_ProbNNp_corr;
   Double_t        K_ProbNNp_corr_calibstat;
   Double_t        K_ProbNNp_corr_mcstat;
   Double_t        pi1_ProbNNk_corr;
   Double_t        pi1_ProbNNk_corr_calibstat;
   Double_t        pi1_ProbNNk_corr_mcstat;
   Double_t        pi1_ProbNNpi_corr;
   Double_t        pi1_ProbNNpi_corr_calibstat;
   Double_t        pi1_ProbNNpi_corr_mcstat;
   Double_t        pi1_ProbNNp_corr;
   Double_t        pi1_ProbNNp_corr_calibstat;
   Double_t        pi1_ProbNNp_corr_mcstat;
   Double_t        pi2_ProbNNk_corr;
   Double_t        pi2_ProbNNk_corr_calibstat;
   Double_t        pi2_ProbNNk_corr_mcstat;
   Double_t        pi2_ProbNNpi_corr;
   Double_t        pi2_ProbNNpi_corr_calibstat;
   Double_t        pi2_ProbNNpi_corr_mcstat;
   Double_t        pi2_ProbNNp_corr;
   Double_t        pi2_ProbNNp_corr_calibstat;
   Double_t        pi2_ProbNNp_corr_mcstat;
   Double_t        p_ProbNNk_corr;
   Double_t        p_ProbNNk_corr_calibstat;
   Double_t        p_ProbNNk_corr_mcstat;
   Double_t        p_ProbNNpi_corr;
   Double_t        p_ProbNNpi_corr_calibstat;
   Double_t        p_ProbNNpi_corr_mcstat;
   Double_t        p_ProbNNp_corr;
   Double_t        p_ProbNNp_corr_calibstat;
   Double_t        p_ProbNNp_corr_mcstat;
   Double_t        pbar_ProbNNk_corr;
   Double_t        pbar_ProbNNk_corr_calibstat;
   Double_t        pbar_ProbNNk_corr_mcstat;
   Double_t        pbar_ProbNNpi_corr;
   Double_t        pbar_ProbNNpi_corr_calibstat;
   Double_t        pbar_ProbNNpi_corr_mcstat;
   Double_t        pbar_ProbNNp_corr;
   Double_t        pbar_ProbNNp_corr_calibstat;
   Double_t        pbar_ProbNNp_corr_mcstat;
   Double_t        pi_ProbNNk_corr;
   Double_t        pi_ProbNNk_corr_calibstat;
   Double_t        pi_ProbNNk_corr_mcstat;
   Double_t        pi_ProbNNpi_corr;
   Double_t        pi_ProbNNpi_corr_calibstat;
   Double_t        pi_ProbNNpi_corr_mcstat;
   Double_t        pi_ProbNNp_corr;
   Double_t        pi_ProbNNp_corr_calibstat;
   Double_t        pi_ProbNNp_corr_mcstat;

   // List of branches
   TBranch        *b_B0_DiraAngleError;   //!
   TBranch        *b_B0_DiraCosError;   //!
   TBranch        *b_B0_DiraAngle;   //!
   TBranch        *b_B0_DiraCos;   //!
   TBranch        *b_B0_ENDVERTEX_X;   //!
   TBranch        *b_B0_ENDVERTEX_Y;   //!
   TBranch        *b_B0_ENDVERTEX_Z;   //!
   TBranch        *b_B0_ENDVERTEX_XERR;   //!
   TBranch        *b_B0_ENDVERTEX_YERR;   //!
   TBranch        *b_B0_ENDVERTEX_ZERR;   //!
   TBranch        *b_B0_ENDVERTEX_CHI2;   //!
   TBranch        *b_B0_ENDVERTEX_NDOF;   //!
   TBranch        *b_B0_ENDVERTEX_COV_;   //!
   TBranch        *b_B0_OWNPV_X;   //!
   TBranch        *b_B0_OWNPV_Y;   //!
   TBranch        *b_B0_OWNPV_Z;   //!
   TBranch        *b_B0_OWNPV_XERR;   //!
   TBranch        *b_B0_OWNPV_YERR;   //!
   TBranch        *b_B0_OWNPV_ZERR;   //!
   TBranch        *b_B0_OWNPV_CHI2;   //!
   TBranch        *b_B0_OWNPV_NDOF;   //!
   TBranch        *b_B0_OWNPV_COV_;   //!
   TBranch        *b_B0_IP_OWNPV;   //!
   TBranch        *b_B0_IPCHI2_OWNPV;   //!
   TBranch        *b_B0_FD_OWNPV;   //!
   TBranch        *b_B0_FDCHI2_OWNPV;   //!
   TBranch        *b_B0_DIRA_OWNPV;   //!
   TBranch        *b_B0_P;   //!
   TBranch        *b_B0_PT;   //!
   TBranch        *b_B0_PE;   //!
   TBranch        *b_B0_PX;   //!
   TBranch        *b_B0_PY;   //!
   TBranch        *b_B0_PZ;   //!
   TBranch        *b_B0_MM;   //!
   TBranch        *b_B0_MMERR;   //!
   TBranch        *b_B0_M;   //!
   TBranch        *b_B0_BKGCAT;   //!
   TBranch        *b_B0_TRUEID;   //!
   TBranch        *b_B0_TRUECosTheta;   //!
   TBranch        *b_B0_MCP_numPseudoTypes;   //!
   TBranch        *b_B0_MCP_MCP_PseudoLen;   //!
   TBranch        *b_B0_MCP_PseudoTypes;   //!
   TBranch        *b_B0_MC_MOTHER_ID;   //!
   TBranch        *b_B0_MC_MOTHER_KEY;   //!
   TBranch        *b_B0_MC_GD_MOTHER_ID;   //!
   TBranch        *b_B0_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_B0_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_B0_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_B0_TRUEP_E;   //!
   TBranch        *b_B0_TRUEP_X;   //!
   TBranch        *b_B0_TRUEP_Y;   //!
   TBranch        *b_B0_TRUEP_Z;   //!
   TBranch        *b_B0_TRUEPT;   //!
   TBranch        *b_B0_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_B0_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_B0_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_B0_TRUEENDVERTEX_X;   //!
   TBranch        *b_B0_TRUEENDVERTEX_Y;   //!
   TBranch        *b_B0_TRUEENDVERTEX_Z;   //!
   TBranch        *b_B0_TRUEISSTABLE;   //!
   TBranch        *b_B0_TRUETAU;   //!
   TBranch        *b_B0_ID;   //!
   TBranch        *b_B0_MC_ISPROMPT;   //!
   TBranch        *b_B0_MC_LONGLIVED_ID;   //!
   TBranch        *b_B0_MC_LONGLIVED_KEY;   //!
   TBranch        *b_B0_Reconstructible;   //!
   TBranch        *b_B0_Reconstructed;   //!
   TBranch        *b_B0_ProtoParticles;   //!
   TBranch        *b_B0_PP_PX;   //!
   TBranch        *b_B0_PP_PY;   //!
   TBranch        *b_B0_PP_PZ;   //!
   TBranch        *b_B0_PP_Weight;   //!
   TBranch        *b_B0_PP_tr_pchi2;   //!
   TBranch        *b_B0_PP_DLLe;   //!
   TBranch        *b_B0_PP_DLLk;   //!
   TBranch        *b_B0_PP_DLLp;   //!
   TBranch        *b_B0_PP_DLLmu;   //!
   TBranch        *b_B0_TAU;   //!
   TBranch        *b_B0_TAUERR;   //!
   TBranch        *b_B0_TAUCHI2;   //!
   TBranch        *b_B0_X;   //!
   TBranch        *b_B0_Y;   //!
   TBranch        *b_B0_NumVtxWithinChi2WindowOneTrack;   //!
   TBranch        *b_B0_SmallestDeltaChi2OneTrack;   //!
   TBranch        *b_B0_SmallestDeltaChi2MassOneTrack;   //!
   TBranch        *b_B0_SmallestDeltaChi2TwoTracks;   //!
   TBranch        *b_B0_SmallestDeltaChi2MassTwoTracks;   //!
   TBranch        *b_B0_DTF_All;   //!
   TBranch        *b_B0_DTF_MASS;   //!
   TBranch        *b_B0_DOCA12;   //!
   TBranch        *b_B0_DOCACHI2;   //!
   TBranch        *b_B0_ETA;   //!
   TBranch        *b_B0_LOKI_BPVCORRM;   //!
   TBranch        *b_B0_LOKI_BPVLTIME;   //!
   TBranch        *b_B0_LOKI_DIRA;   //!
   TBranch        *b_B0_LOKI_FDCHI2;   //!
   TBranch        *b_B0_LOKI_FDS;   //!
   TBranch        *b_B0_LOKI_IPCHI2;   //!
   TBranch        *b_B0_LOKI_MAXDOCA;   //!
   TBranch        *b_B0_MASS12;   //!
   TBranch        *b_B0_PHI;   //!
   TBranch        *b_B0_PVALLFit_nPV;   //!
   TBranch        *b_B0_PVDFit_nPV;   //!
   TBranch        *b_B0_PVFit_nPV;   //!
   TBranch        *b_B0_L0Global_Dec;   //!
   TBranch        *b_B0_L0Global_TIS;   //!
   TBranch        *b_B0_L0Global_TOS;   //!
   TBranch        *b_B0_Hlt1Global_Dec;   //!
   TBranch        *b_B0_Hlt1Global_TIS;   //!
   TBranch        *b_B0_Hlt1Global_TOS;   //!
   TBranch        *b_B0_Hlt1Phys_Dec;   //!
   TBranch        *b_B0_Hlt1Phys_TIS;   //!
   TBranch        *b_B0_Hlt1Phys_TOS;   //!
   TBranch        *b_B0_Hlt2Global_Dec;   //!
   TBranch        *b_B0_Hlt2Global_TIS;   //!
   TBranch        *b_B0_Hlt2Global_TOS;   //!
   TBranch        *b_B0_Hlt2Phys_Dec;   //!
   TBranch        *b_B0_Hlt2Phys_TIS;   //!
   TBranch        *b_B0_Hlt2Phys_TOS;   //!
   TBranch        *b_B0_L0HadronDecision_Dec;   //!
   TBranch        *b_B0_L0HadronDecision_TIS;   //!
   TBranch        *b_B0_L0HadronDecision_TOS;   //!
   TBranch        *b_B0_L0GlobalDecision_Dec;   //!
   TBranch        *b_B0_L0GlobalDecision_TIS;   //!
   TBranch        *b_B0_L0GlobalDecision_TOS;   //!
   TBranch        *b_B0_L0ElectronDecision_Dec;   //!
   TBranch        *b_B0_L0ElectronDecision_TIS;   //!
   TBranch        *b_B0_L0ElectronDecision_TOS;   //!
   TBranch        *b_B0_L0MuonDecision_Dec;   //!
   TBranch        *b_B0_L0MuonDecision_TIS;   //!
   TBranch        *b_B0_L0MuonDecision_TOS;   //!
   TBranch        *b_B0_L0MuonHighDecision_Dec;   //!
   TBranch        *b_B0_L0MuonHighDecision_TIS;   //!
   TBranch        *b_B0_L0MuonHighDecision_TOS;   //!
   TBranch        *b_B0_L0PhysDecision_Dec;   //!
   TBranch        *b_B0_L0PhysDecision_TIS;   //!
   TBranch        *b_B0_L0PhysDecision_TOS;   //!
   TBranch        *b_B0_L0PhotonDecision_Dec;   //!
   TBranch        *b_B0_L0PhotonDecision_TIS;   //!
   TBranch        *b_B0_L0PhotonDecision_TOS;   //!
   TBranch        *b_B0_L0DiMuonDecision_Dec;   //!
   TBranch        *b_B0_L0DiMuonDecision_TIS;   //!
   TBranch        *b_B0_L0DiMuonDecision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackMVADecision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackMVADecision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackMVADecision_TOS;   //!
   TBranch        *b_B0_Hlt1TwoTrackMVADecision_Dec;   //!
   TBranch        *b_B0_Hlt1TwoTrackMVADecision_TIS;   //!
   TBranch        *b_B0_Hlt1TwoTrackMVADecision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackPhotonDecision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackPhotonDecision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackPhotonDecision_TOS;   //!
   TBranch        *b_B0_Hlt1GlobalDecision_Dec;   //!
   TBranch        *b_B0_Hlt1GlobalDecision_TIS;   //!
   TBranch        *b_B0_Hlt1GlobalDecision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackMVALooseDecision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackMVALooseDecision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackMVALooseDecision_TOS;   //!
   TBranch        *b_B0_Hlt1TwoTrackMVALooseDecision_Dec;   //!
   TBranch        *b_B0_Hlt1TwoTrackMVALooseDecision_TIS;   //!
   TBranch        *b_B0_Hlt1TwoTrackMVALooseDecision_TOS;   //!
   TBranch        *b_B0_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_B0_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_B0_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackForwardPassThroughDecision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackForwardPassThroughDecision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackForwardPassThroughDecision_TOS;   //!
   TBranch        *b_B0_Hlt1TrackForwardPassThroughLooseDecision_Dec;   //!
   TBranch        *b_B0_Hlt1TrackForwardPassThroughLooseDecision_TIS;   //!
   TBranch        *b_B0_Hlt1TrackForwardPassThroughLooseDecision_TOS;   //!
   TBranch        *b_B0_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_B0_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_B0_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_B0_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_B0_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_B0_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_B0_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_B0_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_B0_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2GlobalDecision_Dec;   //!
   TBranch        *b_B0_Hlt2GlobalDecision_TIS;   //!
   TBranch        *b_B0_Hlt2GlobalDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo2BodyDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo2BodyDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo2BodyDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo3BodyDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo3BodyDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo3BodyDecision_TOS;   //!
   TBranch        *b_B0_Hlt2Topo4BodyDecision_Dec;   //!
   TBranch        *b_B0_Hlt2Topo4BodyDecision_TIS;   //!
   TBranch        *b_B0_Hlt2Topo4BodyDecision_TOS;   //!
   TBranch        *b_D_CosTheta;   //!
   TBranch        *b_D_ENDVERTEX_X;   //!
   TBranch        *b_D_ENDVERTEX_Y;   //!
   TBranch        *b_D_ENDVERTEX_Z;   //!
   TBranch        *b_D_ENDVERTEX_XERR;   //!
   TBranch        *b_D_ENDVERTEX_YERR;   //!
   TBranch        *b_D_ENDVERTEX_ZERR;   //!
   TBranch        *b_D_ENDVERTEX_CHI2;   //!
   TBranch        *b_D_ENDVERTEX_NDOF;   //!
   TBranch        *b_D_ENDVERTEX_COV_;   //!
   TBranch        *b_D_OWNPV_X;   //!
   TBranch        *b_D_OWNPV_Y;   //!
   TBranch        *b_D_OWNPV_Z;   //!
   TBranch        *b_D_OWNPV_XERR;   //!
   TBranch        *b_D_OWNPV_YERR;   //!
   TBranch        *b_D_OWNPV_ZERR;   //!
   TBranch        *b_D_OWNPV_CHI2;   //!
   TBranch        *b_D_OWNPV_NDOF;   //!
   TBranch        *b_D_OWNPV_COV_;   //!
   TBranch        *b_D_IP_OWNPV;   //!
   TBranch        *b_D_IPCHI2_OWNPV;   //!
   TBranch        *b_D_FD_OWNPV;   //!
   TBranch        *b_D_FDCHI2_OWNPV;   //!
   TBranch        *b_D_DIRA_OWNPV;   //!
   TBranch        *b_D_ORIVX_X;   //!
   TBranch        *b_D_ORIVX_Y;   //!
   TBranch        *b_D_ORIVX_Z;   //!
   TBranch        *b_D_ORIVX_XERR;   //!
   TBranch        *b_D_ORIVX_YERR;   //!
   TBranch        *b_D_ORIVX_ZERR;   //!
   TBranch        *b_D_ORIVX_CHI2;   //!
   TBranch        *b_D_ORIVX_NDOF;   //!
   TBranch        *b_D_ORIVX_COV_;   //!
   TBranch        *b_D_FD_ORIVX;   //!
   TBranch        *b_D_FDCHI2_ORIVX;   //!
   TBranch        *b_D_DIRA_ORIVX;   //!
   TBranch        *b_D_P;   //!
   TBranch        *b_D_PT;   //!
   TBranch        *b_D_PE;   //!
   TBranch        *b_D_PX;   //!
   TBranch        *b_D_PY;   //!
   TBranch        *b_D_PZ;   //!
   TBranch        *b_D_MM;   //!
   TBranch        *b_D_MMERR;   //!
   TBranch        *b_D_M;   //!
   TBranch        *b_D_BKGCAT;   //!
   TBranch        *b_D_TRUEID;   //!
   TBranch        *b_D_TRUECosTheta;   //!
   TBranch        *b_D_MCP_numPseudoTypes;   //!
   TBranch        *b_D_MCP_MCP_PseudoLen;   //!
   TBranch        *b_D_MCP_PseudoTypes;   //!
   TBranch        *b_D_MC_MOTHER_ID;   //!
   TBranch        *b_D_MC_MOTHER_KEY;   //!
   TBranch        *b_D_MC_GD_MOTHER_ID;   //!
   TBranch        *b_D_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_D_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_D_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_D_TRUEP_E;   //!
   TBranch        *b_D_TRUEP_X;   //!
   TBranch        *b_D_TRUEP_Y;   //!
   TBranch        *b_D_TRUEP_Z;   //!
   TBranch        *b_D_TRUEPT;   //!
   TBranch        *b_D_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_D_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_D_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_D_TRUEENDVERTEX_X;   //!
   TBranch        *b_D_TRUEENDVERTEX_Y;   //!
   TBranch        *b_D_TRUEENDVERTEX_Z;   //!
   TBranch        *b_D_TRUEISSTABLE;   //!
   TBranch        *b_D_TRUETAU;   //!
   TBranch        *b_D_ID;   //!
   TBranch        *b_D_MC_ISPROMPT;   //!
   TBranch        *b_D_MC_LONGLIVED_ID;   //!
   TBranch        *b_D_MC_LONGLIVED_KEY;   //!
   TBranch        *b_D_Reconstructible;   //!
   TBranch        *b_D_Reconstructed;   //!
   TBranch        *b_D_ProtoParticles;   //!
   TBranch        *b_D_PP_PX;   //!
   TBranch        *b_D_PP_PY;   //!
   TBranch        *b_D_PP_PZ;   //!
   TBranch        *b_D_PP_Weight;   //!
   TBranch        *b_D_PP_tr_pchi2;   //!
   TBranch        *b_D_PP_DLLe;   //!
   TBranch        *b_D_PP_DLLk;   //!
   TBranch        *b_D_PP_DLLp;   //!
   TBranch        *b_D_PP_DLLmu;   //!
   TBranch        *b_D_TAU;   //!
   TBranch        *b_D_TAUERR;   //!
   TBranch        *b_D_TAUCHI2;   //!
   TBranch        *b_D_L0Global_Dec;   //!
   TBranch        *b_D_L0Global_TIS;   //!
   TBranch        *b_D_L0Global_TOS;   //!
   TBranch        *b_D_Hlt1Global_Dec;   //!
   TBranch        *b_D_Hlt1Global_TIS;   //!
   TBranch        *b_D_Hlt1Global_TOS;   //!
   TBranch        *b_D_Hlt1Phys_Dec;   //!
   TBranch        *b_D_Hlt1Phys_TIS;   //!
   TBranch        *b_D_Hlt1Phys_TOS;   //!
   TBranch        *b_D_Hlt2Global_Dec;   //!
   TBranch        *b_D_Hlt2Global_TIS;   //!
   TBranch        *b_D_Hlt2Global_TOS;   //!
   TBranch        *b_D_Hlt2Phys_Dec;   //!
   TBranch        *b_D_Hlt2Phys_TIS;   //!
   TBranch        *b_D_Hlt2Phys_TOS;   //!
   TBranch        *b_D_X;   //!
   TBranch        *b_D_Y;   //!
   TBranch        *b_D_NumVtxWithinChi2WindowOneTrack;   //!
   TBranch        *b_D_SmallestDeltaChi2OneTrack;   //!
   TBranch        *b_D_SmallestDeltaChi2MassOneTrack;   //!
   TBranch        *b_D_SmallestDeltaChi2TwoTracks;   //!
   TBranch        *b_D_SmallestDeltaChi2MassTwoTracks;   //!
   TBranch        *b_D_DOCA12;   //!
   TBranch        *b_D_DOCA13;   //!
   TBranch        *b_D_DOCA23;   //!
   TBranch        *b_D_DOCACHI2_12;   //!
   TBranch        *b_D_DOCACHI2_13;   //!
   TBranch        *b_D_DOCACHI2_23;   //!
   TBranch        *b_D_ETA;   //!
   TBranch        *b_D_LOKI_BPVCORRM;   //!
   TBranch        *b_D_LOKI_BPVLTIME;   //!
   TBranch        *b_D_LOKI_DIRA;   //!
   TBranch        *b_D_LOKI_FDCHI2;   //!
   TBranch        *b_D_LOKI_FDS;   //!
   TBranch        *b_D_LOKI_IPCHI2;   //!
   TBranch        *b_D_LOKI_MAXDOCA;   //!
   TBranch        *b_D_LV01;   //!
   TBranch        *b_D_LV02;   //!
   TBranch        *b_D_MASS12;   //!
   TBranch        *b_D_MASS13;   //!
   TBranch        *b_D_MASS23;   //!
   TBranch        *b_D_PHI;   //!
   TBranch        *b_K_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_K_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_K_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_K_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_K_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_K_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_K_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_K_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_K_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_K_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_K_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_K_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_K_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_K_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_K_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_K_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_K_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_K_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_K_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_K_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_K_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_K_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_K_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_K_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_K_CosTheta;   //!
   TBranch        *b_K_OWNPV_X;   //!
   TBranch        *b_K_OWNPV_Y;   //!
   TBranch        *b_K_OWNPV_Z;   //!
   TBranch        *b_K_OWNPV_XERR;   //!
   TBranch        *b_K_OWNPV_YERR;   //!
   TBranch        *b_K_OWNPV_ZERR;   //!
   TBranch        *b_K_OWNPV_CHI2;   //!
   TBranch        *b_K_OWNPV_NDOF;   //!
   TBranch        *b_K_OWNPV_COV_;   //!
   TBranch        *b_K_IP_OWNPV;   //!
   TBranch        *b_K_IPCHI2_OWNPV;   //!
   TBranch        *b_K_ORIVX_X;   //!
   TBranch        *b_K_ORIVX_Y;   //!
   TBranch        *b_K_ORIVX_Z;   //!
   TBranch        *b_K_ORIVX_XERR;   //!
   TBranch        *b_K_ORIVX_YERR;   //!
   TBranch        *b_K_ORIVX_ZERR;   //!
   TBranch        *b_K_ORIVX_CHI2;   //!
   TBranch        *b_K_ORIVX_NDOF;   //!
   TBranch        *b_K_ORIVX_COV_;   //!
   TBranch        *b_K_P;   //!
   TBranch        *b_K_PT;   //!
   TBranch        *b_K_PE;   //!
   TBranch        *b_K_PX;   //!
   TBranch        *b_K_PY;   //!
   TBranch        *b_K_PZ;   //!
   TBranch        *b_K_M;   //!
   TBranch        *b_K_TRUEID;   //!
   TBranch        *b_K_TRUECosTheta;   //!
   TBranch        *b_K_MCP_numPseudoTypes;   //!
   TBranch        *b_K_MCP_MCP_PseudoLen;   //!
   TBranch        *b_K_MCP_PseudoTypes;   //!
   TBranch        *b_K_MC_MOTHER_ID;   //!
   TBranch        *b_K_MC_MOTHER_KEY;   //!
   TBranch        *b_K_MC_GD_MOTHER_ID;   //!
   TBranch        *b_K_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_K_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_K_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_K_TRUEP_E;   //!
   TBranch        *b_K_TRUEP_X;   //!
   TBranch        *b_K_TRUEP_Y;   //!
   TBranch        *b_K_TRUEP_Z;   //!
   TBranch        *b_K_TRUEPT;   //!
   TBranch        *b_K_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_K_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_K_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_K_TRUEENDVERTEX_X;   //!
   TBranch        *b_K_TRUEENDVERTEX_Y;   //!
   TBranch        *b_K_TRUEENDVERTEX_Z;   //!
   TBranch        *b_K_TRUEISSTABLE;   //!
   TBranch        *b_K_TRUETAU;   //!
   TBranch        *b_K_ID;   //!
   TBranch        *b_K_MC_ISPROMPT;   //!
   TBranch        *b_K_MC_LONGLIVED_ID;   //!
   TBranch        *b_K_MC_LONGLIVED_KEY;   //!
   TBranch        *b_K_Reconstructible;   //!
   TBranch        *b_K_Reconstructed;   //!
   TBranch        *b_K_ProtoParticles;   //!
   TBranch        *b_K_PP_PX;   //!
   TBranch        *b_K_PP_PY;   //!
   TBranch        *b_K_PP_PZ;   //!
   TBranch        *b_K_PP_Weight;   //!
   TBranch        *b_K_PP_tr_pchi2;   //!
   TBranch        *b_K_PP_DLLe;   //!
   TBranch        *b_K_PP_DLLk;   //!
   TBranch        *b_K_PP_DLLp;   //!
   TBranch        *b_K_PP_DLLmu;   //!
   TBranch        *b_K_PIDe;   //!
   TBranch        *b_K_PIDmu;   //!
   TBranch        *b_K_PIDK;   //!
   TBranch        *b_K_PIDp;   //!
   TBranch        *b_K_PIDd;   //!
   TBranch        *b_K_ProbNNe;   //!
   TBranch        *b_K_ProbNNk;   //!
   TBranch        *b_K_ProbNNp;   //!
   TBranch        *b_K_ProbNNpi;   //!
   TBranch        *b_K_ProbNNmu;   //!
   TBranch        *b_K_ProbNNd;   //!
   TBranch        *b_K_ProbNNghost;   //!
   TBranch        *b_K_hasMuon;   //!
   TBranch        *b_K_isMuon;   //!
   TBranch        *b_K_hasRich;   //!
   TBranch        *b_K_UsedRichAerogel;   //!
   TBranch        *b_K_UsedRich1Gas;   //!
   TBranch        *b_K_UsedRich2Gas;   //!
   TBranch        *b_K_RichAboveElThres;   //!
   TBranch        *b_K_RichAboveMuThres;   //!
   TBranch        *b_K_RichAbovePiThres;   //!
   TBranch        *b_K_RichAboveKaThres;   //!
   TBranch        *b_K_RichAbovePrThres;   //!
   TBranch        *b_K_hasCalo;   //!
   TBranch        *b_K_L0Global_Dec;   //!
   TBranch        *b_K_L0Global_TIS;   //!
   TBranch        *b_K_L0Global_TOS;   //!
   TBranch        *b_K_Hlt1Global_Dec;   //!
   TBranch        *b_K_Hlt1Global_TIS;   //!
   TBranch        *b_K_Hlt1Global_TOS;   //!
   TBranch        *b_K_Hlt1Phys_Dec;   //!
   TBranch        *b_K_Hlt1Phys_TIS;   //!
   TBranch        *b_K_Hlt1Phys_TOS;   //!
   TBranch        *b_K_Hlt2Global_Dec;   //!
   TBranch        *b_K_Hlt2Global_TIS;   //!
   TBranch        *b_K_Hlt2Global_TOS;   //!
   TBranch        *b_K_Hlt2Phys_Dec;   //!
   TBranch        *b_K_Hlt2Phys_TIS;   //!
   TBranch        *b_K_Hlt2Phys_TOS;   //!
   TBranch        *b_K_TRACK_Type;   //!
   TBranch        *b_K_TRACK_Key;   //!
   TBranch        *b_K_TRACK_CHI2NDOF;   //!
   TBranch        *b_K_TRACK_PCHI2;   //!
   TBranch        *b_K_TRACK_MatchCHI2;   //!
   TBranch        *b_K_TRACK_GhostProb;   //!
   TBranch        *b_K_TRACK_CloneDist;   //!
   TBranch        *b_K_TRACK_Likelihood;   //!
   TBranch        *b_K_X;   //!
   TBranch        *b_K_Y;   //!
   TBranch        *b_K_ETA;   //!
   TBranch        *b_K_PHI;   //!
   TBranch        *b_pi1_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_pi1_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_pi1_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_pi1_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_pi1_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_pi1_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_pi1_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_pi1_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_pi1_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_pi1_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_pi1_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_pi1_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_pi1_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_pi1_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_pi1_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_pi1_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_pi1_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_pi1_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_pi1_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_pi1_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_pi1_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_pi1_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_pi1_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_pi1_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_pi1_CosTheta;   //!
   TBranch        *b_pi1_OWNPV_X;   //!
   TBranch        *b_pi1_OWNPV_Y;   //!
   TBranch        *b_pi1_OWNPV_Z;   //!
   TBranch        *b_pi1_OWNPV_XERR;   //!
   TBranch        *b_pi1_OWNPV_YERR;   //!
   TBranch        *b_pi1_OWNPV_ZERR;   //!
   TBranch        *b_pi1_OWNPV_CHI2;   //!
   TBranch        *b_pi1_OWNPV_NDOF;   //!
   TBranch        *b_pi1_OWNPV_COV_;   //!
   TBranch        *b_pi1_IP_OWNPV;   //!
   TBranch        *b_pi1_IPCHI2_OWNPV;   //!
   TBranch        *b_pi1_ORIVX_X;   //!
   TBranch        *b_pi1_ORIVX_Y;   //!
   TBranch        *b_pi1_ORIVX_Z;   //!
   TBranch        *b_pi1_ORIVX_XERR;   //!
   TBranch        *b_pi1_ORIVX_YERR;   //!
   TBranch        *b_pi1_ORIVX_ZERR;   //!
   TBranch        *b_pi1_ORIVX_CHI2;   //!
   TBranch        *b_pi1_ORIVX_NDOF;   //!
   TBranch        *b_pi1_ORIVX_COV_;   //!
   TBranch        *b_pi1_P;   //!
   TBranch        *b_pi1_PT;   //!
   TBranch        *b_pi1_PE;   //!
   TBranch        *b_pi1_PX;   //!
   TBranch        *b_pi1_PY;   //!
   TBranch        *b_pi1_PZ;   //!
   TBranch        *b_pi1_M;   //!
   TBranch        *b_pi1_TRUEID;   //!
   TBranch        *b_pi1_TRUECosTheta;   //!
   TBranch        *b_pi1_MCP_numPseudoTypes;   //!
   TBranch        *b_pi1_MCP_MCP_PseudoLen;   //!
   TBranch        *b_pi1_MCP_PseudoTypes;   //!
   TBranch        *b_pi1_MC_MOTHER_ID;   //!
   TBranch        *b_pi1_MC_MOTHER_KEY;   //!
   TBranch        *b_pi1_MC_GD_MOTHER_ID;   //!
   TBranch        *b_pi1_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_pi1_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_pi1_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_pi1_TRUEP_E;   //!
   TBranch        *b_pi1_TRUEP_X;   //!
   TBranch        *b_pi1_TRUEP_Y;   //!
   TBranch        *b_pi1_TRUEP_Z;   //!
   TBranch        *b_pi1_TRUEPT;   //!
   TBranch        *b_pi1_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_pi1_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_pi1_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_pi1_TRUEENDVERTEX_X;   //!
   TBranch        *b_pi1_TRUEENDVERTEX_Y;   //!
   TBranch        *b_pi1_TRUEENDVERTEX_Z;   //!
   TBranch        *b_pi1_TRUEISSTABLE;   //!
   TBranch        *b_pi1_TRUETAU;   //!
   TBranch        *b_pi1_ID;   //!
   TBranch        *b_pi1_MC_ISPROMPT;   //!
   TBranch        *b_pi1_MC_LONGLIVED_ID;   //!
   TBranch        *b_pi1_MC_LONGLIVED_KEY;   //!
   TBranch        *b_pi1_Reconstructible;   //!
   TBranch        *b_pi1_Reconstructed;   //!
   TBranch        *b_pi1_ProtoParticles;   //!
   TBranch        *b_pi1_PP_PX;   //!
   TBranch        *b_pi1_PP_PY;   //!
   TBranch        *b_pi1_PP_PZ;   //!
   TBranch        *b_pi1_PP_Weight;   //!
   TBranch        *b_pi1_PP_tr_pchi2;   //!
   TBranch        *b_pi1_PP_DLLe;   //!
   TBranch        *b_pi1_PP_DLLk;   //!
   TBranch        *b_pi1_PP_DLLp;   //!
   TBranch        *b_pi1_PP_DLLmu;   //!
   TBranch        *b_pi1_PIDe;   //!
   TBranch        *b_pi1_PIDmu;   //!
   TBranch        *b_pi1_PIDK;   //!
   TBranch        *b_pi1_PIDp;   //!
   TBranch        *b_pi1_PIDd;   //!
   TBranch        *b_pi1_ProbNNe;   //!
   TBranch        *b_pi1_ProbNNk;   //!
   TBranch        *b_pi1_ProbNNp;   //!
   TBranch        *b_pi1_ProbNNpi;   //!
   TBranch        *b_pi1_ProbNNmu;   //!
   TBranch        *b_pi1_ProbNNd;   //!
   TBranch        *b_pi1_ProbNNghost;   //!
   TBranch        *b_pi1_hasMuon;   //!
   TBranch        *b_pi1_isMuon;   //!
   TBranch        *b_pi1_hasRich;   //!
   TBranch        *b_pi1_UsedRichAerogel;   //!
   TBranch        *b_pi1_UsedRich1Gas;   //!
   TBranch        *b_pi1_UsedRich2Gas;   //!
   TBranch        *b_pi1_RichAboveElThres;   //!
   TBranch        *b_pi1_RichAboveMuThres;   //!
   TBranch        *b_pi1_RichAbovePiThres;   //!
   TBranch        *b_pi1_RichAboveKaThres;   //!
   TBranch        *b_pi1_RichAbovePrThres;   //!
   TBranch        *b_pi1_hasCalo;   //!
   TBranch        *b_pi1_L0Global_Dec;   //!
   TBranch        *b_pi1_L0Global_TIS;   //!
   TBranch        *b_pi1_L0Global_TOS;   //!
   TBranch        *b_pi1_Hlt1Global_Dec;   //!
   TBranch        *b_pi1_Hlt1Global_TIS;   //!
   TBranch        *b_pi1_Hlt1Global_TOS;   //!
   TBranch        *b_pi1_Hlt1Phys_Dec;   //!
   TBranch        *b_pi1_Hlt1Phys_TIS;   //!
   TBranch        *b_pi1_Hlt1Phys_TOS;   //!
   TBranch        *b_pi1_Hlt2Global_Dec;   //!
   TBranch        *b_pi1_Hlt2Global_TIS;   //!
   TBranch        *b_pi1_Hlt2Global_TOS;   //!
   TBranch        *b_pi1_Hlt2Phys_Dec;   //!
   TBranch        *b_pi1_Hlt2Phys_TIS;   //!
   TBranch        *b_pi1_Hlt2Phys_TOS;   //!
   TBranch        *b_pi1_TRACK_Type;   //!
   TBranch        *b_pi1_TRACK_Key;   //!
   TBranch        *b_pi1_TRACK_CHI2NDOF;   //!
   TBranch        *b_pi1_TRACK_PCHI2;   //!
   TBranch        *b_pi1_TRACK_MatchCHI2;   //!
   TBranch        *b_pi1_TRACK_GhostProb;   //!
   TBranch        *b_pi1_TRACK_CloneDist;   //!
   TBranch        *b_pi1_TRACK_Likelihood;   //!
   TBranch        *b_pi1_X;   //!
   TBranch        *b_pi1_Y;   //!
   TBranch        *b_pi1_ETA;   //!
   TBranch        *b_pi1_PHI;   //!
   TBranch        *b_pi2_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_pi2_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_pi2_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_pi2_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_pi2_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_pi2_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_pi2_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_pi2_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_pi2_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_pi2_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_pi2_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_pi2_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_pi2_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_pi2_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_pi2_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_pi2_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_pi2_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_pi2_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_pi2_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_pi2_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_pi2_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_pi2_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_pi2_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_pi2_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_pi2_CosTheta;   //!
   TBranch        *b_pi2_OWNPV_X;   //!
   TBranch        *b_pi2_OWNPV_Y;   //!
   TBranch        *b_pi2_OWNPV_Z;   //!
   TBranch        *b_pi2_OWNPV_XERR;   //!
   TBranch        *b_pi2_OWNPV_YERR;   //!
   TBranch        *b_pi2_OWNPV_ZERR;   //!
   TBranch        *b_pi2_OWNPV_CHI2;   //!
   TBranch        *b_pi2_OWNPV_NDOF;   //!
   TBranch        *b_pi2_OWNPV_COV_;   //!
   TBranch        *b_pi2_IP_OWNPV;   //!
   TBranch        *b_pi2_IPCHI2_OWNPV;   //!
   TBranch        *b_pi2_ORIVX_X;   //!
   TBranch        *b_pi2_ORIVX_Y;   //!
   TBranch        *b_pi2_ORIVX_Z;   //!
   TBranch        *b_pi2_ORIVX_XERR;   //!
   TBranch        *b_pi2_ORIVX_YERR;   //!
   TBranch        *b_pi2_ORIVX_ZERR;   //!
   TBranch        *b_pi2_ORIVX_CHI2;   //!
   TBranch        *b_pi2_ORIVX_NDOF;   //!
   TBranch        *b_pi2_ORIVX_COV_;   //!
   TBranch        *b_pi2_P;   //!
   TBranch        *b_pi2_PT;   //!
   TBranch        *b_pi2_PE;   //!
   TBranch        *b_pi2_PX;   //!
   TBranch        *b_pi2_PY;   //!
   TBranch        *b_pi2_PZ;   //!
   TBranch        *b_pi2_M;   //!
   TBranch        *b_pi2_TRUEID;   //!
   TBranch        *b_pi2_TRUECosTheta;   //!
   TBranch        *b_pi2_MCP_numPseudoTypes;   //!
   TBranch        *b_pi2_MCP_MCP_PseudoLen;   //!
   TBranch        *b_pi2_MCP_PseudoTypes;   //!
   TBranch        *b_pi2_MC_MOTHER_ID;   //!
   TBranch        *b_pi2_MC_MOTHER_KEY;   //!
   TBranch        *b_pi2_MC_GD_MOTHER_ID;   //!
   TBranch        *b_pi2_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_pi2_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_pi2_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_pi2_TRUEP_E;   //!
   TBranch        *b_pi2_TRUEP_X;   //!
   TBranch        *b_pi2_TRUEP_Y;   //!
   TBranch        *b_pi2_TRUEP_Z;   //!
   TBranch        *b_pi2_TRUEPT;   //!
   TBranch        *b_pi2_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_pi2_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_pi2_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_pi2_TRUEENDVERTEX_X;   //!
   TBranch        *b_pi2_TRUEENDVERTEX_Y;   //!
   TBranch        *b_pi2_TRUEENDVERTEX_Z;   //!
   TBranch        *b_pi2_TRUEISSTABLE;   //!
   TBranch        *b_pi2_TRUETAU;   //!
   TBranch        *b_pi2_ID;   //!
   TBranch        *b_pi2_MC_ISPROMPT;   //!
   TBranch        *b_pi2_MC_LONGLIVED_ID;   //!
   TBranch        *b_pi2_MC_LONGLIVED_KEY;   //!
   TBranch        *b_pi2_Reconstructible;   //!
   TBranch        *b_pi2_Reconstructed;   //!
   TBranch        *b_pi2_ProtoParticles;   //!
   TBranch        *b_pi2_PP_PX;   //!
   TBranch        *b_pi2_PP_PY;   //!
   TBranch        *b_pi2_PP_PZ;   //!
   TBranch        *b_pi2_PP_Weight;   //!
   TBranch        *b_pi2_PP_tr_pchi2;   //!
   TBranch        *b_pi2_PP_DLLe;   //!
   TBranch        *b_pi2_PP_DLLk;   //!
   TBranch        *b_pi2_PP_DLLp;   //!
   TBranch        *b_pi2_PP_DLLmu;   //!
   TBranch        *b_pi2_PIDe;   //!
   TBranch        *b_pi2_PIDmu;   //!
   TBranch        *b_pi2_PIDK;   //!
   TBranch        *b_pi2_PIDp;   //!
   TBranch        *b_pi2_PIDd;   //!
   TBranch        *b_pi2_ProbNNe;   //!
   TBranch        *b_pi2_ProbNNk;   //!
   TBranch        *b_pi2_ProbNNp;   //!
   TBranch        *b_pi2_ProbNNpi;   //!
   TBranch        *b_pi2_ProbNNmu;   //!
   TBranch        *b_pi2_ProbNNd;   //!
   TBranch        *b_pi2_ProbNNghost;   //!
   TBranch        *b_pi2_hasMuon;   //!
   TBranch        *b_pi2_isMuon;   //!
   TBranch        *b_pi2_hasRich;   //!
   TBranch        *b_pi2_UsedRichAerogel;   //!
   TBranch        *b_pi2_UsedRich1Gas;   //!
   TBranch        *b_pi2_UsedRich2Gas;   //!
   TBranch        *b_pi2_RichAboveElThres;   //!
   TBranch        *b_pi2_RichAboveMuThres;   //!
   TBranch        *b_pi2_RichAbovePiThres;   //!
   TBranch        *b_pi2_RichAboveKaThres;   //!
   TBranch        *b_pi2_RichAbovePrThres;   //!
   TBranch        *b_pi2_hasCalo;   //!
   TBranch        *b_pi2_L0Global_Dec;   //!
   TBranch        *b_pi2_L0Global_TIS;   //!
   TBranch        *b_pi2_L0Global_TOS;   //!
   TBranch        *b_pi2_Hlt1Global_Dec;   //!
   TBranch        *b_pi2_Hlt1Global_TIS;   //!
   TBranch        *b_pi2_Hlt1Global_TOS;   //!
   TBranch        *b_pi2_Hlt1Phys_Dec;   //!
   TBranch        *b_pi2_Hlt1Phys_TIS;   //!
   TBranch        *b_pi2_Hlt1Phys_TOS;   //!
   TBranch        *b_pi2_Hlt2Global_Dec;   //!
   TBranch        *b_pi2_Hlt2Global_TIS;   //!
   TBranch        *b_pi2_Hlt2Global_TOS;   //!
   TBranch        *b_pi2_Hlt2Phys_Dec;   //!
   TBranch        *b_pi2_Hlt2Phys_TIS;   //!
   TBranch        *b_pi2_Hlt2Phys_TOS;   //!
   TBranch        *b_pi2_TRACK_Type;   //!
   TBranch        *b_pi2_TRACK_Key;   //!
   TBranch        *b_pi2_TRACK_CHI2NDOF;   //!
   TBranch        *b_pi2_TRACK_PCHI2;   //!
   TBranch        *b_pi2_TRACK_MatchCHI2;   //!
   TBranch        *b_pi2_TRACK_GhostProb;   //!
   TBranch        *b_pi2_TRACK_CloneDist;   //!
   TBranch        *b_pi2_TRACK_Likelihood;   //!
   TBranch        *b_pi2_X;   //!
   TBranch        *b_pi2_Y;   //!
   TBranch        *b_pi2_ETA;   //!
   TBranch        *b_pi2_PHI;   //!
   TBranch        *b_a_CosTheta;   //!
   TBranch        *b_a_ENDVERTEX_X;   //!
   TBranch        *b_a_ENDVERTEX_Y;   //!
   TBranch        *b_a_ENDVERTEX_Z;   //!
   TBranch        *b_a_ENDVERTEX_XERR;   //!
   TBranch        *b_a_ENDVERTEX_YERR;   //!
   TBranch        *b_a_ENDVERTEX_ZERR;   //!
   TBranch        *b_a_ENDVERTEX_CHI2;   //!
   TBranch        *b_a_ENDVERTEX_NDOF;   //!
   TBranch        *b_a_ENDVERTEX_COV_;   //!
   TBranch        *b_a_OWNPV_X;   //!
   TBranch        *b_a_OWNPV_Y;   //!
   TBranch        *b_a_OWNPV_Z;   //!
   TBranch        *b_a_OWNPV_XERR;   //!
   TBranch        *b_a_OWNPV_YERR;   //!
   TBranch        *b_a_OWNPV_ZERR;   //!
   TBranch        *b_a_OWNPV_CHI2;   //!
   TBranch        *b_a_OWNPV_NDOF;   //!
   TBranch        *b_a_OWNPV_COV_;   //!
   TBranch        *b_a_IP_OWNPV;   //!
   TBranch        *b_a_IPCHI2_OWNPV;   //!
   TBranch        *b_a_FD_OWNPV;   //!
   TBranch        *b_a_FDCHI2_OWNPV;   //!
   TBranch        *b_a_DIRA_OWNPV;   //!
   TBranch        *b_a_ORIVX_X;   //!
   TBranch        *b_a_ORIVX_Y;   //!
   TBranch        *b_a_ORIVX_Z;   //!
   TBranch        *b_a_ORIVX_XERR;   //!
   TBranch        *b_a_ORIVX_YERR;   //!
   TBranch        *b_a_ORIVX_ZERR;   //!
   TBranch        *b_a_ORIVX_CHI2;   //!
   TBranch        *b_a_ORIVX_NDOF;   //!
   TBranch        *b_a_ORIVX_COV_;   //!
   TBranch        *b_a_FD_ORIVX;   //!
   TBranch        *b_a_FDCHI2_ORIVX;   //!
   TBranch        *b_a_DIRA_ORIVX;   //!
   TBranch        *b_a_P;   //!
   TBranch        *b_a_PT;   //!
   TBranch        *b_a_PE;   //!
   TBranch        *b_a_PX;   //!
   TBranch        *b_a_PY;   //!
   TBranch        *b_a_PZ;   //!
   TBranch        *b_a_MM;   //!
   TBranch        *b_a_MMERR;   //!
   TBranch        *b_a_M;   //!
   TBranch        *b_a_BKGCAT;   //!
   TBranch        *b_a_TRUEID;   //!
   TBranch        *b_a_TRUECosTheta;   //!
   TBranch        *b_a_MCP_numPseudoTypes;   //!
   TBranch        *b_a_MCP_MCP_PseudoLen;   //!
   TBranch        *b_a_MCP_PseudoTypes;   //!
   TBranch        *b_a_MC_MOTHER_ID;   //!
   TBranch        *b_a_MC_MOTHER_KEY;   //!
   TBranch        *b_a_MC_GD_MOTHER_ID;   //!
   TBranch        *b_a_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_a_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_a_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_a_TRUEP_E;   //!
   TBranch        *b_a_TRUEP_X;   //!
   TBranch        *b_a_TRUEP_Y;   //!
   TBranch        *b_a_TRUEP_Z;   //!
   TBranch        *b_a_TRUEPT;   //!
   TBranch        *b_a_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_a_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_a_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_a_TRUEENDVERTEX_X;   //!
   TBranch        *b_a_TRUEENDVERTEX_Y;   //!
   TBranch        *b_a_TRUEENDVERTEX_Z;   //!
   TBranch        *b_a_TRUEISSTABLE;   //!
   TBranch        *b_a_TRUETAU;   //!
   TBranch        *b_a_ID;   //!
   TBranch        *b_a_MC_ISPROMPT;   //!
   TBranch        *b_a_MC_LONGLIVED_ID;   //!
   TBranch        *b_a_MC_LONGLIVED_KEY;   //!
   TBranch        *b_a_Reconstructible;   //!
   TBranch        *b_a_Reconstructed;   //!
   TBranch        *b_a_ProtoParticles;   //!
   TBranch        *b_a_PP_PX;   //!
   TBranch        *b_a_PP_PY;   //!
   TBranch        *b_a_PP_PZ;   //!
   TBranch        *b_a_PP_Weight;   //!
   TBranch        *b_a_PP_tr_pchi2;   //!
   TBranch        *b_a_PP_DLLe;   //!
   TBranch        *b_a_PP_DLLk;   //!
   TBranch        *b_a_PP_DLLp;   //!
   TBranch        *b_a_PP_DLLmu;   //!
   TBranch        *b_a_TAU;   //!
   TBranch        *b_a_TAUERR;   //!
   TBranch        *b_a_TAUCHI2;   //!
   TBranch        *b_a_L0Global_Dec;   //!
   TBranch        *b_a_L0Global_TIS;   //!
   TBranch        *b_a_L0Global_TOS;   //!
   TBranch        *b_a_Hlt1Global_Dec;   //!
   TBranch        *b_a_Hlt1Global_TIS;   //!
   TBranch        *b_a_Hlt1Global_TOS;   //!
   TBranch        *b_a_Hlt1Phys_Dec;   //!
   TBranch        *b_a_Hlt1Phys_TIS;   //!
   TBranch        *b_a_Hlt1Phys_TOS;   //!
   TBranch        *b_a_Hlt2Global_Dec;   //!
   TBranch        *b_a_Hlt2Global_TIS;   //!
   TBranch        *b_a_Hlt2Global_TOS;   //!
   TBranch        *b_a_Hlt2Phys_Dec;   //!
   TBranch        *b_a_Hlt2Phys_TIS;   //!
   TBranch        *b_a_Hlt2Phys_TOS;   //!
   TBranch        *b_a_X;   //!
   TBranch        *b_a_Y;   //!
   TBranch        *b_a_NumVtxWithinChi2WindowOneTrack;   //!
   TBranch        *b_a_SmallestDeltaChi2OneTrack;   //!
   TBranch        *b_a_SmallestDeltaChi2MassOneTrack;   //!
   TBranch        *b_a_SmallestDeltaChi2TwoTracks;   //!
   TBranch        *b_a_SmallestDeltaChi2MassTwoTracks;   //!
   TBranch        *b_a_DOCA12;   //!
   TBranch        *b_a_DOCA13;   //!
   TBranch        *b_a_DOCA23;   //!
   TBranch        *b_a_DOCACHI2_12;   //!
   TBranch        *b_a_DOCACHI2_13;   //!
   TBranch        *b_a_DOCACHI2_23;   //!
   TBranch        *b_a_ETA;   //!
   TBranch        *b_a_LOKI_BPVCORRM;   //!
   TBranch        *b_a_LOKI_BPVLTIME;   //!
   TBranch        *b_a_LOKI_DIRA;   //!
   TBranch        *b_a_LOKI_FDCHI2;   //!
   TBranch        *b_a_LOKI_FDS;   //!
   TBranch        *b_a_LOKI_IPCHI2;   //!
   TBranch        *b_a_LOKI_MAXDOCA;   //!
   TBranch        *b_a_LV01;   //!
   TBranch        *b_a_LV02;   //!
   TBranch        *b_a_MASS12;   //!
   TBranch        *b_a_MASS13;   //!
   TBranch        *b_a_MASS23;   //!
   TBranch        *b_a_PHI;   //!
   TBranch        *b_p_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_p_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_p_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_p_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_p_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_p_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_p_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_p_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_p_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_p_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_p_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_p_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_p_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_p_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_p_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_p_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_p_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_p_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_p_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_p_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_p_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_p_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_p_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_p_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_p_CosTheta;   //!
   TBranch        *b_p_OWNPV_X;   //!
   TBranch        *b_p_OWNPV_Y;   //!
   TBranch        *b_p_OWNPV_Z;   //!
   TBranch        *b_p_OWNPV_XERR;   //!
   TBranch        *b_p_OWNPV_YERR;   //!
   TBranch        *b_p_OWNPV_ZERR;   //!
   TBranch        *b_p_OWNPV_CHI2;   //!
   TBranch        *b_p_OWNPV_NDOF;   //!
   TBranch        *b_p_OWNPV_COV_;   //!
   TBranch        *b_p_IP_OWNPV;   //!
   TBranch        *b_p_IPCHI2_OWNPV;   //!
   TBranch        *b_p_ORIVX_X;   //!
   TBranch        *b_p_ORIVX_Y;   //!
   TBranch        *b_p_ORIVX_Z;   //!
   TBranch        *b_p_ORIVX_XERR;   //!
   TBranch        *b_p_ORIVX_YERR;   //!
   TBranch        *b_p_ORIVX_ZERR;   //!
   TBranch        *b_p_ORIVX_CHI2;   //!
   TBranch        *b_p_ORIVX_NDOF;   //!
   TBranch        *b_p_ORIVX_COV_;   //!
   TBranch        *b_p_P;   //!
   TBranch        *b_p_PT;   //!
   TBranch        *b_p_PE;   //!
   TBranch        *b_p_PX;   //!
   TBranch        *b_p_PY;   //!
   TBranch        *b_p_PZ;   //!
   TBranch        *b_p_M;   //!
   TBranch        *b_p_TRUEID;   //!
   TBranch        *b_p_TRUECosTheta;   //!
   TBranch        *b_p_MCP_numPseudoTypes;   //!
   TBranch        *b_p_MCP_MCP_PseudoLen;   //!
   TBranch        *b_p_MCP_PseudoTypes;   //!
   TBranch        *b_p_MC_MOTHER_ID;   //!
   TBranch        *b_p_MC_MOTHER_KEY;   //!
   TBranch        *b_p_MC_GD_MOTHER_ID;   //!
   TBranch        *b_p_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_p_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_p_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_p_TRUEP_E;   //!
   TBranch        *b_p_TRUEP_X;   //!
   TBranch        *b_p_TRUEP_Y;   //!
   TBranch        *b_p_TRUEP_Z;   //!
   TBranch        *b_p_TRUEPT;   //!
   TBranch        *b_p_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_p_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_p_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_p_TRUEENDVERTEX_X;   //!
   TBranch        *b_p_TRUEENDVERTEX_Y;   //!
   TBranch        *b_p_TRUEENDVERTEX_Z;   //!
   TBranch        *b_p_TRUEISSTABLE;   //!
   TBranch        *b_p_TRUETAU;   //!
   TBranch        *b_p_ID;   //!
   TBranch        *b_p_MC_ISPROMPT;   //!
   TBranch        *b_p_MC_LONGLIVED_ID;   //!
   TBranch        *b_p_MC_LONGLIVED_KEY;   //!
   TBranch        *b_p_Reconstructible;   //!
   TBranch        *b_p_Reconstructed;   //!
   TBranch        *b_p_ProtoParticles;   //!
   TBranch        *b_p_PP_PX;   //!
   TBranch        *b_p_PP_PY;   //!
   TBranch        *b_p_PP_PZ;   //!
   TBranch        *b_p_PP_Weight;   //!
   TBranch        *b_p_PP_tr_pchi2;   //!
   TBranch        *b_p_PP_DLLe;   //!
   TBranch        *b_p_PP_DLLk;   //!
   TBranch        *b_p_PP_DLLp;   //!
   TBranch        *b_p_PP_DLLmu;   //!
   TBranch        *b_p_PIDe;   //!
   TBranch        *b_p_PIDmu;   //!
   TBranch        *b_p_PIDK;   //!
   TBranch        *b_p_PIDp;   //!
   TBranch        *b_p_PIDd;   //!
   TBranch        *b_p_ProbNNe;   //!
   TBranch        *b_p_ProbNNk;   //!
   TBranch        *b_p_ProbNNp;   //!
   TBranch        *b_p_ProbNNpi;   //!
   TBranch        *b_p_ProbNNmu;   //!
   TBranch        *b_p_ProbNNd;   //!
   TBranch        *b_p_ProbNNghost;   //!
   TBranch        *b_p_hasMuon;   //!
   TBranch        *b_p_isMuon;   //!
   TBranch        *b_p_hasRich;   //!
   TBranch        *b_p_UsedRichAerogel;   //!
   TBranch        *b_p_UsedRich1Gas;   //!
   TBranch        *b_p_UsedRich2Gas;   //!
   TBranch        *b_p_RichAboveElThres;   //!
   TBranch        *b_p_RichAboveMuThres;   //!
   TBranch        *b_p_RichAbovePiThres;   //!
   TBranch        *b_p_RichAboveKaThres;   //!
   TBranch        *b_p_RichAbovePrThres;   //!
   TBranch        *b_p_hasCalo;   //!
   TBranch        *b_p_L0Global_Dec;   //!
   TBranch        *b_p_L0Global_TIS;   //!
   TBranch        *b_p_L0Global_TOS;   //!
   TBranch        *b_p_Hlt1Global_Dec;   //!
   TBranch        *b_p_Hlt1Global_TIS;   //!
   TBranch        *b_p_Hlt1Global_TOS;   //!
   TBranch        *b_p_Hlt1Phys_Dec;   //!
   TBranch        *b_p_Hlt1Phys_TIS;   //!
   TBranch        *b_p_Hlt1Phys_TOS;   //!
   TBranch        *b_p_Hlt2Global_Dec;   //!
   TBranch        *b_p_Hlt2Global_TIS;   //!
   TBranch        *b_p_Hlt2Global_TOS;   //!
   TBranch        *b_p_Hlt2Phys_Dec;   //!
   TBranch        *b_p_Hlt2Phys_TIS;   //!
   TBranch        *b_p_Hlt2Phys_TOS;   //!
   TBranch        *b_p_TRACK_Type;   //!
   TBranch        *b_p_TRACK_Key;   //!
   TBranch        *b_p_TRACK_CHI2NDOF;   //!
   TBranch        *b_p_TRACK_PCHI2;   //!
   TBranch        *b_p_TRACK_MatchCHI2;   //!
   TBranch        *b_p_TRACK_GhostProb;   //!
   TBranch        *b_p_TRACK_CloneDist;   //!
   TBranch        *b_p_TRACK_Likelihood;   //!
   TBranch        *b_p_X;   //!
   TBranch        *b_p_Y;   //!
   TBranch        *b_p_ETA;   //!
   TBranch        *b_p_PHI;   //!
   TBranch        *b_pbar_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_pbar_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_pbar_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_pbar_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_pbar_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_pbar_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_pbar_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_pbar_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_pbar_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_pbar_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_pbar_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_pbar_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_pbar_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_pbar_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_pbar_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_pbar_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_pbar_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_pbar_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_pbar_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_pbar_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_pbar_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_pbar_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_pbar_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_pbar_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_pbar_CosTheta;   //!
   TBranch        *b_pbar_OWNPV_X;   //!
   TBranch        *b_pbar_OWNPV_Y;   //!
   TBranch        *b_pbar_OWNPV_Z;   //!
   TBranch        *b_pbar_OWNPV_XERR;   //!
   TBranch        *b_pbar_OWNPV_YERR;   //!
   TBranch        *b_pbar_OWNPV_ZERR;   //!
   TBranch        *b_pbar_OWNPV_CHI2;   //!
   TBranch        *b_pbar_OWNPV_NDOF;   //!
   TBranch        *b_pbar_OWNPV_COV_;   //!
   TBranch        *b_pbar_IP_OWNPV;   //!
   TBranch        *b_pbar_IPCHI2_OWNPV;   //!
   TBranch        *b_pbar_ORIVX_X;   //!
   TBranch        *b_pbar_ORIVX_Y;   //!
   TBranch        *b_pbar_ORIVX_Z;   //!
   TBranch        *b_pbar_ORIVX_XERR;   //!
   TBranch        *b_pbar_ORIVX_YERR;   //!
   TBranch        *b_pbar_ORIVX_ZERR;   //!
   TBranch        *b_pbar_ORIVX_CHI2;   //!
   TBranch        *b_pbar_ORIVX_NDOF;   //!
   TBranch        *b_pbar_ORIVX_COV_;   //!
   TBranch        *b_pbar_P;   //!
   TBranch        *b_pbar_PT;   //!
   TBranch        *b_pbar_PE;   //!
   TBranch        *b_pbar_PX;   //!
   TBranch        *b_pbar_PY;   //!
   TBranch        *b_pbar_PZ;   //!
   TBranch        *b_pbar_M;   //!
   TBranch        *b_pbar_TRUEID;   //!
   TBranch        *b_pbar_TRUECosTheta;   //!
   TBranch        *b_pbar_MCP_numPseudoTypes;   //!
   TBranch        *b_pbar_MCP_MCP_PseudoLen;   //!
   TBranch        *b_pbar_MCP_PseudoTypes;   //!
   TBranch        *b_pbar_MC_MOTHER_ID;   //!
   TBranch        *b_pbar_MC_MOTHER_KEY;   //!
   TBranch        *b_pbar_MC_GD_MOTHER_ID;   //!
   TBranch        *b_pbar_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_pbar_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_pbar_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_pbar_TRUEP_E;   //!
   TBranch        *b_pbar_TRUEP_X;   //!
   TBranch        *b_pbar_TRUEP_Y;   //!
   TBranch        *b_pbar_TRUEP_Z;   //!
   TBranch        *b_pbar_TRUEPT;   //!
   TBranch        *b_pbar_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_pbar_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_pbar_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_pbar_TRUEENDVERTEX_X;   //!
   TBranch        *b_pbar_TRUEENDVERTEX_Y;   //!
   TBranch        *b_pbar_TRUEENDVERTEX_Z;   //!
   TBranch        *b_pbar_TRUEISSTABLE;   //!
   TBranch        *b_pbar_TRUETAU;   //!
   TBranch        *b_pbar_ID;   //!
   TBranch        *b_pbar_MC_ISPROMPT;   //!
   TBranch        *b_pbar_MC_LONGLIVED_ID;   //!
   TBranch        *b_pbar_MC_LONGLIVED_KEY;   //!
   TBranch        *b_pbar_Reconstructible;   //!
   TBranch        *b_pbar_Reconstructed;   //!
   TBranch        *b_pbar_ProtoParticles;   //!
   TBranch        *b_pbar_PP_PX;   //!
   TBranch        *b_pbar_PP_PY;   //!
   TBranch        *b_pbar_PP_PZ;   //!
   TBranch        *b_pbar_PP_Weight;   //!
   TBranch        *b_pbar_PP_tr_pchi2;   //!
   TBranch        *b_pbar_PP_DLLe;   //!
   TBranch        *b_pbar_PP_DLLk;   //!
   TBranch        *b_pbar_PP_DLLp;   //!
   TBranch        *b_pbar_PP_DLLmu;   //!
   TBranch        *b_pbar_PIDe;   //!
   TBranch        *b_pbar_PIDmu;   //!
   TBranch        *b_pbar_PIDK;   //!
   TBranch        *b_pbar_PIDp;   //!
   TBranch        *b_pbar_PIDd;   //!
   TBranch        *b_pbar_ProbNNe;   //!
   TBranch        *b_pbar_ProbNNk;   //!
   TBranch        *b_pbar_ProbNNp;   //!
   TBranch        *b_pbar_ProbNNpi;   //!
   TBranch        *b_pbar_ProbNNmu;   //!
   TBranch        *b_pbar_ProbNNd;   //!
   TBranch        *b_pbar_ProbNNghost;   //!
   TBranch        *b_pbar_hasMuon;   //!
   TBranch        *b_pbar_isMuon;   //!
   TBranch        *b_pbar_hasRich;   //!
   TBranch        *b_pbar_UsedRichAerogel;   //!
   TBranch        *b_pbar_UsedRich1Gas;   //!
   TBranch        *b_pbar_UsedRich2Gas;   //!
   TBranch        *b_pbar_RichAboveElThres;   //!
   TBranch        *b_pbar_RichAboveMuThres;   //!
   TBranch        *b_pbar_RichAbovePiThres;   //!
   TBranch        *b_pbar_RichAboveKaThres;   //!
   TBranch        *b_pbar_RichAbovePrThres;   //!
   TBranch        *b_pbar_hasCalo;   //!
   TBranch        *b_pbar_L0Global_Dec;   //!
   TBranch        *b_pbar_L0Global_TIS;   //!
   TBranch        *b_pbar_L0Global_TOS;   //!
   TBranch        *b_pbar_Hlt1Global_Dec;   //!
   TBranch        *b_pbar_Hlt1Global_TIS;   //!
   TBranch        *b_pbar_Hlt1Global_TOS;   //!
   TBranch        *b_pbar_Hlt1Phys_Dec;   //!
   TBranch        *b_pbar_Hlt1Phys_TIS;   //!
   TBranch        *b_pbar_Hlt1Phys_TOS;   //!
   TBranch        *b_pbar_Hlt2Global_Dec;   //!
   TBranch        *b_pbar_Hlt2Global_TIS;   //!
   TBranch        *b_pbar_Hlt2Global_TOS;   //!
   TBranch        *b_pbar_Hlt2Phys_Dec;   //!
   TBranch        *b_pbar_Hlt2Phys_TIS;   //!
   TBranch        *b_pbar_Hlt2Phys_TOS;   //!
   TBranch        *b_pbar_TRACK_Type;   //!
   TBranch        *b_pbar_TRACK_Key;   //!
   TBranch        *b_pbar_TRACK_CHI2NDOF;   //!
   TBranch        *b_pbar_TRACK_PCHI2;   //!
   TBranch        *b_pbar_TRACK_MatchCHI2;   //!
   TBranch        *b_pbar_TRACK_GhostProb;   //!
   TBranch        *b_pbar_TRACK_CloneDist;   //!
   TBranch        *b_pbar_TRACK_Likelihood;   //!
   TBranch        *b_pbar_X;   //!
   TBranch        *b_pbar_Y;   //!
   TBranch        *b_pbar_ETA;   //!
   TBranch        *b_pbar_PHI;   //!
   TBranch        *b_pi_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_pi_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_pi_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_pi_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_pi_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_pi_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_pi_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_pi_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_pi_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_pi_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_pi_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_pi_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_pi_MC12TuneV4_ProbNNe;   //!
   TBranch        *b_pi_MC12TuneV4_ProbNNmu;   //!
   TBranch        *b_pi_MC12TuneV4_ProbNNpi;   //!
   TBranch        *b_pi_MC12TuneV4_ProbNNk;   //!
   TBranch        *b_pi_MC12TuneV4_ProbNNp;   //!
   TBranch        *b_pi_MC12TuneV4_ProbNNghost;   //!
   TBranch        *b_pi_MC15TuneV1_ProbNNe;   //!
   TBranch        *b_pi_MC15TuneV1_ProbNNmu;   //!
   TBranch        *b_pi_MC15TuneV1_ProbNNpi;   //!
   TBranch        *b_pi_MC15TuneV1_ProbNNk;   //!
   TBranch        *b_pi_MC15TuneV1_ProbNNp;   //!
   TBranch        *b_pi_MC15TuneV1_ProbNNghost;   //!
   TBranch        *b_pi_CosTheta;   //!
   TBranch        *b_pi_OWNPV_X;   //!
   TBranch        *b_pi_OWNPV_Y;   //!
   TBranch        *b_pi_OWNPV_Z;   //!
   TBranch        *b_pi_OWNPV_XERR;   //!
   TBranch        *b_pi_OWNPV_YERR;   //!
   TBranch        *b_pi_OWNPV_ZERR;   //!
   TBranch        *b_pi_OWNPV_CHI2;   //!
   TBranch        *b_pi_OWNPV_NDOF;   //!
   TBranch        *b_pi_OWNPV_COV_;   //!
   TBranch        *b_pi_IP_OWNPV;   //!
   TBranch        *b_pi_IPCHI2_OWNPV;   //!
   TBranch        *b_pi_ORIVX_X;   //!
   TBranch        *b_pi_ORIVX_Y;   //!
   TBranch        *b_pi_ORIVX_Z;   //!
   TBranch        *b_pi_ORIVX_XERR;   //!
   TBranch        *b_pi_ORIVX_YERR;   //!
   TBranch        *b_pi_ORIVX_ZERR;   //!
   TBranch        *b_pi_ORIVX_CHI2;   //!
   TBranch        *b_pi_ORIVX_NDOF;   //!
   TBranch        *b_pi_ORIVX_COV_;   //!
   TBranch        *b_pi_P;   //!
   TBranch        *b_pi_PT;   //!
   TBranch        *b_pi_PE;   //!
   TBranch        *b_pi_PX;   //!
   TBranch        *b_pi_PY;   //!
   TBranch        *b_pi_PZ;   //!
   TBranch        *b_pi_M;   //!
   TBranch        *b_pi_TRUEID;   //!
   TBranch        *b_pi_TRUECosTheta;   //!
   TBranch        *b_pi_MCP_numPseudoTypes;   //!
   TBranch        *b_pi_MCP_MCP_PseudoLen;   //!
   TBranch        *b_pi_MCP_PseudoTypes;   //!
   TBranch        *b_pi_MC_MOTHER_ID;   //!
   TBranch        *b_pi_MC_MOTHER_KEY;   //!
   TBranch        *b_pi_MC_GD_MOTHER_ID;   //!
   TBranch        *b_pi_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_pi_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_pi_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_pi_TRUEP_E;   //!
   TBranch        *b_pi_TRUEP_X;   //!
   TBranch        *b_pi_TRUEP_Y;   //!
   TBranch        *b_pi_TRUEP_Z;   //!
   TBranch        *b_pi_TRUEPT;   //!
   TBranch        *b_pi_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_pi_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_pi_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_pi_TRUEENDVERTEX_X;   //!
   TBranch        *b_pi_TRUEENDVERTEX_Y;   //!
   TBranch        *b_pi_TRUEENDVERTEX_Z;   //!
   TBranch        *b_pi_TRUEISSTABLE;   //!
   TBranch        *b_pi_TRUETAU;   //!
   TBranch        *b_pi_ID;   //!
   TBranch        *b_pi_MC_ISPROMPT;   //!
   TBranch        *b_pi_MC_LONGLIVED_ID;   //!
   TBranch        *b_pi_MC_LONGLIVED_KEY;   //!
   TBranch        *b_pi_Reconstructible;   //!
   TBranch        *b_pi_Reconstructed;   //!
   TBranch        *b_pi_ProtoParticles;   //!
   TBranch        *b_pi_PP_PX;   //!
   TBranch        *b_pi_PP_PY;   //!
   TBranch        *b_pi_PP_PZ;   //!
   TBranch        *b_pi_PP_Weight;   //!
   TBranch        *b_pi_PP_tr_pchi2;   //!
   TBranch        *b_pi_PP_DLLe;   //!
   TBranch        *b_pi_PP_DLLk;   //!
   TBranch        *b_pi_PP_DLLp;   //!
   TBranch        *b_pi_PP_DLLmu;   //!
   TBranch        *b_pi_PIDe;   //!
   TBranch        *b_pi_PIDmu;   //!
   TBranch        *b_pi_PIDK;   //!
   TBranch        *b_pi_PIDp;   //!
   TBranch        *b_pi_PIDd;   //!
   TBranch        *b_pi_ProbNNe;   //!
   TBranch        *b_pi_ProbNNk;   //!
   TBranch        *b_pi_ProbNNp;   //!
   TBranch        *b_pi_ProbNNpi;   //!
   TBranch        *b_pi_ProbNNmu;   //!
   TBranch        *b_pi_ProbNNd;   //!
   TBranch        *b_pi_ProbNNghost;   //!
   TBranch        *b_pi_hasMuon;   //!
   TBranch        *b_pi_isMuon;   //!
   TBranch        *b_pi_hasRich;   //!
   TBranch        *b_pi_UsedRichAerogel;   //!
   TBranch        *b_pi_UsedRich1Gas;   //!
   TBranch        *b_pi_UsedRich2Gas;   //!
   TBranch        *b_pi_RichAboveElThres;   //!
   TBranch        *b_pi_RichAboveMuThres;   //!
   TBranch        *b_pi_RichAbovePiThres;   //!
   TBranch        *b_pi_RichAboveKaThres;   //!
   TBranch        *b_pi_RichAbovePrThres;   //!
   TBranch        *b_pi_hasCalo;   //!
   TBranch        *b_pi_L0Global_Dec;   //!
   TBranch        *b_pi_L0Global_TIS;   //!
   TBranch        *b_pi_L0Global_TOS;   //!
   TBranch        *b_pi_Hlt1Global_Dec;   //!
   TBranch        *b_pi_Hlt1Global_TIS;   //!
   TBranch        *b_pi_Hlt1Global_TOS;   //!
   TBranch        *b_pi_Hlt1Phys_Dec;   //!
   TBranch        *b_pi_Hlt1Phys_TIS;   //!
   TBranch        *b_pi_Hlt1Phys_TOS;   //!
   TBranch        *b_pi_Hlt2Global_Dec;   //!
   TBranch        *b_pi_Hlt2Global_TIS;   //!
   TBranch        *b_pi_Hlt2Global_TOS;   //!
   TBranch        *b_pi_Hlt2Phys_Dec;   //!
   TBranch        *b_pi_Hlt2Phys_TIS;   //!
   TBranch        *b_pi_Hlt2Phys_TOS;   //!
   TBranch        *b_pi_TRACK_Type;   //!
   TBranch        *b_pi_TRACK_Key;   //!
   TBranch        *b_pi_TRACK_CHI2NDOF;   //!
   TBranch        *b_pi_TRACK_PCHI2;   //!
   TBranch        *b_pi_TRACK_MatchCHI2;   //!
   TBranch        *b_pi_TRACK_GhostProb;   //!
   TBranch        *b_pi_TRACK_CloneDist;   //!
   TBranch        *b_pi_TRACK_Likelihood;   //!
   TBranch        *b_pi_X;   //!
   TBranch        *b_pi_Y;   //!
   TBranch        *b_pi_ETA;   //!
   TBranch        *b_pi_PHI;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLT1TCK;   //!
   TBranch        *b_HLT2TCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!
   TBranch        *b_B0_PVALLFit_Dplus_Kplus_ID;   //!
   TBranch        *b_B0_PVALLFit_Dplus_Kplus_PE;   //!
   TBranch        *b_B0_PVALLFit_Dplus_Kplus_PX;   //!
   TBranch        *b_B0_PVALLFit_Dplus_Kplus_PY;   //!
   TBranch        *b_B0_PVALLFit_Dplus_Kplus_PZ;   //!
   TBranch        *b_B0_PVALLFit_Dplus_M;   //!
   TBranch        *b_B0_PVALLFit_Dplus_MERR;   //!
   TBranch        *b_B0_PVALLFit_Dplus_P;   //!
   TBranch        *b_B0_PVALLFit_Dplus_PERR;   //!
   TBranch        *b_B0_PVALLFit_Dplus_ctau;   //!
   TBranch        *b_B0_PVALLFit_Dplus_ctauErr;   //!
   TBranch        *b_B0_PVALLFit_Dplus_decayLength;   //!
   TBranch        *b_B0_PVALLFit_Dplus_decayLengthErr;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_0_ID;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_0_PE;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_0_PX;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_0_PY;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_0_PZ;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_ID;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_PE;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_PX;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_PY;   //!
   TBranch        *b_B0_PVALLFit_Dplus_piplus_PZ;   //!
   TBranch        *b_B0_PVALLFit_M;   //!
   TBranch        *b_B0_PVALLFit_MERR;   //!
   TBranch        *b_B0_PVALLFit_P;   //!
   TBranch        *b_B0_PVALLFit_PERR;   //!
   TBranch        *b_B0_PVALLFit_PV_X;   //!
   TBranch        *b_B0_PVALLFit_PV_Y;   //!
   TBranch        *b_B0_PVALLFit_PV_Z;   //!
   TBranch        *b_B0_PVALLFit_PV_key;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_M;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_MERR;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_P;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_PERR;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_ctau;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_ctauErr;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_decayLength;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_decayLengthErr;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_piplus_ID;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_piplus_PE;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_piplus_PX;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_piplus_PY;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_piplus_PZ;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_0_ID;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_0_PE;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_0_PX;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_0_PY;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_0_PZ;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_ID;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_PE;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_PX;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_PY;   //!
   TBranch        *b_B0_PVALLFit_a_1_1260_plus_pplus_PZ;   //!
   TBranch        *b_B0_PVALLFit_chi2;   //!
   TBranch        *b_B0_PVALLFit_ctau;   //!
   TBranch        *b_B0_PVALLFit_ctauErr;   //!
   TBranch        *b_B0_PVALLFit_decayLength;   //!
   TBranch        *b_B0_PVALLFit_decayLengthErr;   //!
   TBranch        *b_B0_PVALLFit_nDOF;   //!
   TBranch        *b_B0_PVALLFit_nIter;   //!
   TBranch        *b_B0_PVALLFit_status;   //!
   TBranch        *b_B0_PVDFit_Dplus_Kplus_ID;   //!
   TBranch        *b_B0_PVDFit_Dplus_Kplus_PE;   //!
   TBranch        *b_B0_PVDFit_Dplus_Kplus_PX;   //!
   TBranch        *b_B0_PVDFit_Dplus_Kplus_PY;   //!
   TBranch        *b_B0_PVDFit_Dplus_Kplus_PZ;   //!
   TBranch        *b_B0_PVDFit_Dplus_M;   //!
   TBranch        *b_B0_PVDFit_Dplus_MERR;   //!
   TBranch        *b_B0_PVDFit_Dplus_P;   //!
   TBranch        *b_B0_PVDFit_Dplus_PERR;   //!
   TBranch        *b_B0_PVDFit_Dplus_ctau;   //!
   TBranch        *b_B0_PVDFit_Dplus_ctauErr;   //!
   TBranch        *b_B0_PVDFit_Dplus_decayLength;   //!
   TBranch        *b_B0_PVDFit_Dplus_decayLengthErr;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_0_ID;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_0_PE;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_0_PX;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_0_PY;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_0_PZ;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_ID;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_PE;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_PX;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_PY;   //!
   TBranch        *b_B0_PVDFit_Dplus_piplus_PZ;   //!
   TBranch        *b_B0_PVDFit_M;   //!
   TBranch        *b_B0_PVDFit_MERR;   //!
   TBranch        *b_B0_PVDFit_P;   //!
   TBranch        *b_B0_PVDFit_PERR;   //!
   TBranch        *b_B0_PVDFit_PV_X;   //!
   TBranch        *b_B0_PVDFit_PV_Y;   //!
   TBranch        *b_B0_PVDFit_PV_Z;   //!
   TBranch        *b_B0_PVDFit_PV_key;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_M;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_MERR;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_P;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_PERR;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_ctau;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_ctauErr;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_decayLength;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_decayLengthErr;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_piplus_ID;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_piplus_PE;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_piplus_PX;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_piplus_PY;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_piplus_PZ;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_0_ID;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_0_PE;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_0_PX;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_0_PY;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_0_PZ;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_ID;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_PE;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_PX;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_PY;   //!
   TBranch        *b_B0_PVDFit_a_1_1260_plus_pplus_PZ;   //!
   TBranch        *b_B0_PVDFit_chi2;   //!
   TBranch        *b_B0_PVDFit_ctau;   //!
   TBranch        *b_B0_PVDFit_ctauErr;   //!
   TBranch        *b_B0_PVDFit_decayLength;   //!
   TBranch        *b_B0_PVDFit_decayLengthErr;   //!
   TBranch        *b_B0_PVDFit_nDOF;   //!
   TBranch        *b_B0_PVDFit_nIter;   //!
   TBranch        *b_B0_PVDFit_status;   //!
   TBranch        *b_B0_PVFit_Dplus_Kplus_ID;   //!
   TBranch        *b_B0_PVFit_Dplus_Kplus_PE;   //!
   TBranch        *b_B0_PVFit_Dplus_Kplus_PX;   //!
   TBranch        *b_B0_PVFit_Dplus_Kplus_PY;   //!
   TBranch        *b_B0_PVFit_Dplus_Kplus_PZ;   //!
   TBranch        *b_B0_PVFit_Dplus_M;   //!
   TBranch        *b_B0_PVFit_Dplus_MERR;   //!
   TBranch        *b_B0_PVFit_Dplus_P;   //!
   TBranch        *b_B0_PVFit_Dplus_PERR;   //!
   TBranch        *b_B0_PVFit_Dplus_ctau;   //!
   TBranch        *b_B0_PVFit_Dplus_ctauErr;   //!
   TBranch        *b_B0_PVFit_Dplus_decayLength;   //!
   TBranch        *b_B0_PVFit_Dplus_decayLengthErr;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_0_ID;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_0_PE;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_0_PX;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_0_PY;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_0_PZ;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_ID;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_PE;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_PX;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_PY;   //!
   TBranch        *b_B0_PVFit_Dplus_piplus_PZ;   //!
   TBranch        *b_B0_PVFit_M;   //!
   TBranch        *b_B0_PVFit_MERR;   //!
   TBranch        *b_B0_PVFit_P;   //!
   TBranch        *b_B0_PVFit_PERR;   //!
   TBranch        *b_B0_PVFit_PV_X;   //!
   TBranch        *b_B0_PVFit_PV_Y;   //!
   TBranch        *b_B0_PVFit_PV_Z;   //!
   TBranch        *b_B0_PVFit_PV_key;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_M;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_MERR;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_P;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_PERR;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_ctau;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_ctauErr;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_decayLength;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_decayLengthErr;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_piplus_ID;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_piplus_PE;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_piplus_PX;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_piplus_PY;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_piplus_PZ;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_0_ID;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_0_PE;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_0_PX;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_0_PY;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_0_PZ;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_ID;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_PE;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_PX;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_PY;   //!
   TBranch        *b_B0_PVFit_a_1_1260_plus_pplus_PZ;   //!
   TBranch        *b_B0_PVFit_chi2;   //!
   TBranch        *b_B0_PVFit_ctau;   //!
   TBranch        *b_B0_PVFit_ctauErr;   //!
   TBranch        *b_B0_PVFit_decayLength;   //!
   TBranch        *b_B0_PVFit_decayLengthErr;   //!
   TBranch        *b_B0_PVFit_nDOF;   //!
   TBranch        *b_B0_PVFit_nIter;   //!
   TBranch        *b_B0_PVFit_status;   //!
   TBranch        *b_K_ProbNNk_corr;   //!
   TBranch        *b_K_ProbNNk_corr_calibstat;   //!
   TBranch        *b_K_ProbNNk_corr_mcstat;   //!
   TBranch        *b_K_ProbNNpi_corr;   //!
   TBranch        *b_K_ProbNNpi_corr_calibstat;   //!
   TBranch        *b_K_ProbNNpi_corr_mcstat;   //!
   TBranch        *b_K_ProbNNp_corr;   //!
   TBranch        *b_K_ProbNNp_corr_calibstat;   //!
   TBranch        *b_K_ProbNNp_corr_mcstat;   //!
   TBranch        *b_pi1_ProbNNk_corr;   //!
   TBranch        *b_pi1_ProbNNk_corr_calibstat;   //!
   TBranch        *b_pi1_ProbNNk_corr_mcstat;   //!
   TBranch        *b_pi1_ProbNNpi_corr;   //!
   TBranch        *b_pi1_ProbNNpi_corr_calibstat;   //!
   TBranch        *b_pi1_ProbNNpi_corr_mcstat;   //!
   TBranch        *b_pi1_ProbNNp_corr;   //!
   TBranch        *b_pi1_ProbNNp_corr_calibstat;   //!
   TBranch        *b_pi1_ProbNNp_corr_mcstat;   //!
   TBranch        *b_pi2_ProbNNk_corr;   //!
   TBranch        *b_pi2_ProbNNk_corr_calibstat;   //!
   TBranch        *b_pi2_ProbNNk_corr_mcstat;   //!
   TBranch        *b_pi2_ProbNNpi_corr;   //!
   TBranch        *b_pi2_ProbNNpi_corr_calibstat;   //!
   TBranch        *b_pi2_ProbNNpi_corr_mcstat;   //!
   TBranch        *b_pi2_ProbNNp_corr;   //!
   TBranch        *b_pi2_ProbNNp_corr_calibstat;   //!
   TBranch        *b_pi2_ProbNNp_corr_mcstat;   //!
   TBranch        *b_p_ProbNNk_corr;   //!
   TBranch        *b_p_ProbNNk_corr_calibstat;   //!
   TBranch        *b_p_ProbNNk_corr_mcstat;   //!
   TBranch        *b_p_ProbNNpi_corr;   //!
   TBranch        *b_p_ProbNNpi_corr_calibstat;   //!
   TBranch        *b_p_ProbNNpi_corr_mcstat;   //!
   TBranch        *b_p_ProbNNp_corr;   //!
   TBranch        *b_p_ProbNNp_corr_calibstat;   //!
   TBranch        *b_p_ProbNNp_corr_mcstat;   //!
   TBranch        *b_pbar_ProbNNk_corr;   //!
   TBranch        *b_pbar_ProbNNk_corr_calibstat;   //!
   TBranch        *b_pbar_ProbNNk_corr_mcstat;   //!
   TBranch        *b_pbar_ProbNNpi_corr;   //!
   TBranch        *b_pbar_ProbNNpi_corr_calibstat;   //!
   TBranch        *b_pbar_ProbNNpi_corr_mcstat;   //!
   TBranch        *b_pbar_ProbNNp_corr;   //!
   TBranch        *b_pbar_ProbNNp_corr_calibstat;   //!
   TBranch        *b_pbar_ProbNNp_corr_mcstat;   //!
   TBranch        *b_pi_ProbNNk_corr;   //!
   TBranch        *b_pi_ProbNNk_corr_calibstat;   //!
   TBranch        *b_pi_ProbNNk_corr_mcstat;   //!
   TBranch        *b_pi_ProbNNpi_corr;   //!
   TBranch        *b_pi_ProbNNpi_corr_calibstat;   //!
   TBranch        *b_pi_ProbNNpi_corr_mcstat;   //!
   TBranch        *b_pi_ProbNNp_corr;   //!
   TBranch        *b_pi_ProbNNp_corr_calibstat;   //!
   TBranch        *b_pi_ProbNNp_corr_mcstat;   //!

   make_add_mc(TTree *tree=0);
   virtual ~make_add_mc();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef make_add_mc_cxx
make_add_mc::make_add_mc(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mc_2018_MD_PIDCorr.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("mc_2018_MD_PIDCorr.root");
      }
      f->GetObject("DecayTree",tree);

   }
   Init(tree);
}

make_add_mc::~make_add_mc()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t make_add_mc::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t make_add_mc::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void make_add_mc::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("B0_DiraAngleError", &B0_DiraAngleError, &b_B0_DiraAngleError);
   fChain->SetBranchAddress("B0_DiraCosError", &B0_DiraCosError, &b_B0_DiraCosError);
   fChain->SetBranchAddress("B0_DiraAngle", &B0_DiraAngle, &b_B0_DiraAngle);
   fChain->SetBranchAddress("B0_DiraCos", &B0_DiraCos, &b_B0_DiraCos);
   fChain->SetBranchAddress("B0_ENDVERTEX_X", &B0_ENDVERTEX_X, &b_B0_ENDVERTEX_X);
   fChain->SetBranchAddress("B0_ENDVERTEX_Y", &B0_ENDVERTEX_Y, &b_B0_ENDVERTEX_Y);
   fChain->SetBranchAddress("B0_ENDVERTEX_Z", &B0_ENDVERTEX_Z, &b_B0_ENDVERTEX_Z);
   fChain->SetBranchAddress("B0_ENDVERTEX_XERR", &B0_ENDVERTEX_XERR, &b_B0_ENDVERTEX_XERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_YERR", &B0_ENDVERTEX_YERR, &b_B0_ENDVERTEX_YERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_ZERR", &B0_ENDVERTEX_ZERR, &b_B0_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("B0_ENDVERTEX_CHI2", &B0_ENDVERTEX_CHI2, &b_B0_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B0_ENDVERTEX_NDOF", &B0_ENDVERTEX_NDOF, &b_B0_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("B0_ENDVERTEX_COV_", B0_ENDVERTEX_COV_, &b_B0_ENDVERTEX_COV_);
   fChain->SetBranchAddress("B0_OWNPV_X", &B0_OWNPV_X, &b_B0_OWNPV_X);
   fChain->SetBranchAddress("B0_OWNPV_Y", &B0_OWNPV_Y, &b_B0_OWNPV_Y);
   fChain->SetBranchAddress("B0_OWNPV_Z", &B0_OWNPV_Z, &b_B0_OWNPV_Z);
   fChain->SetBranchAddress("B0_OWNPV_XERR", &B0_OWNPV_XERR, &b_B0_OWNPV_XERR);
   fChain->SetBranchAddress("B0_OWNPV_YERR", &B0_OWNPV_YERR, &b_B0_OWNPV_YERR);
   fChain->SetBranchAddress("B0_OWNPV_ZERR", &B0_OWNPV_ZERR, &b_B0_OWNPV_ZERR);
   fChain->SetBranchAddress("B0_OWNPV_CHI2", &B0_OWNPV_CHI2, &b_B0_OWNPV_CHI2);
   fChain->SetBranchAddress("B0_OWNPV_NDOF", &B0_OWNPV_NDOF, &b_B0_OWNPV_NDOF);
   fChain->SetBranchAddress("B0_OWNPV_COV_", B0_OWNPV_COV_, &b_B0_OWNPV_COV_);
   fChain->SetBranchAddress("B0_IP_OWNPV", &B0_IP_OWNPV, &b_B0_IP_OWNPV);
   fChain->SetBranchAddress("B0_IPCHI2_OWNPV", &B0_IPCHI2_OWNPV, &b_B0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B0_FD_OWNPV", &B0_FD_OWNPV, &b_B0_FD_OWNPV);
   fChain->SetBranchAddress("B0_FDCHI2_OWNPV", &B0_FDCHI2_OWNPV, &b_B0_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B0_DIRA_OWNPV", &B0_DIRA_OWNPV, &b_B0_DIRA_OWNPV);
   fChain->SetBranchAddress("B0_P", &B0_P, &b_B0_P);
   fChain->SetBranchAddress("B0_PT", &B0_PT, &b_B0_PT);
   fChain->SetBranchAddress("B0_PE", &B0_PE, &b_B0_PE);
   fChain->SetBranchAddress("B0_PX", &B0_PX, &b_B0_PX);
   fChain->SetBranchAddress("B0_PY", &B0_PY, &b_B0_PY);
   fChain->SetBranchAddress("B0_PZ", &B0_PZ, &b_B0_PZ);
   fChain->SetBranchAddress("B0_MM", &B0_MM, &b_B0_MM);
   fChain->SetBranchAddress("B0_MMERR", &B0_MMERR, &b_B0_MMERR);
   fChain->SetBranchAddress("B0_M", &B0_M, &b_B0_M);
   fChain->SetBranchAddress("B0_BKGCAT", &B0_BKGCAT, &b_B0_BKGCAT);
   fChain->SetBranchAddress("B0_TRUEID", &B0_TRUEID, &b_B0_TRUEID);
   fChain->SetBranchAddress("B0_TRUECosTheta", &B0_TRUECosTheta, &b_B0_TRUECosTheta);
   fChain->SetBranchAddress("B0_MCP_numPseudoTypes", &B0_MCP_numPseudoTypes, &b_B0_MCP_numPseudoTypes);
   fChain->SetBranchAddress("B0_MCP_MCP_PseudoLen", &B0_MCP_MCP_PseudoLen, &b_B0_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("B0_MCP_PseudoTypes", B0_MCP_PseudoTypes, &b_B0_MCP_PseudoTypes);
   fChain->SetBranchAddress("B0_MC_MOTHER_ID", &B0_MC_MOTHER_ID, &b_B0_MC_MOTHER_ID);
   fChain->SetBranchAddress("B0_MC_MOTHER_KEY", &B0_MC_MOTHER_KEY, &b_B0_MC_MOTHER_KEY);
   fChain->SetBranchAddress("B0_MC_GD_MOTHER_ID", &B0_MC_GD_MOTHER_ID, &b_B0_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("B0_MC_GD_MOTHER_KEY", &B0_MC_GD_MOTHER_KEY, &b_B0_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("B0_MC_GD_GD_MOTHER_ID", &B0_MC_GD_GD_MOTHER_ID, &b_B0_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("B0_MC_GD_GD_MOTHER_KEY", &B0_MC_GD_GD_MOTHER_KEY, &b_B0_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("B0_TRUEP_E", &B0_TRUEP_E, &b_B0_TRUEP_E);
   fChain->SetBranchAddress("B0_TRUEP_X", &B0_TRUEP_X, &b_B0_TRUEP_X);
   fChain->SetBranchAddress("B0_TRUEP_Y", &B0_TRUEP_Y, &b_B0_TRUEP_Y);
   fChain->SetBranchAddress("B0_TRUEP_Z", &B0_TRUEP_Z, &b_B0_TRUEP_Z);
   fChain->SetBranchAddress("B0_TRUEPT", &B0_TRUEPT, &b_B0_TRUEPT);
   fChain->SetBranchAddress("B0_TRUEORIGINVERTEX_X", &B0_TRUEORIGINVERTEX_X, &b_B0_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("B0_TRUEORIGINVERTEX_Y", &B0_TRUEORIGINVERTEX_Y, &b_B0_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("B0_TRUEORIGINVERTEX_Z", &B0_TRUEORIGINVERTEX_Z, &b_B0_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("B0_TRUEENDVERTEX_X", &B0_TRUEENDVERTEX_X, &b_B0_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("B0_TRUEENDVERTEX_Y", &B0_TRUEENDVERTEX_Y, &b_B0_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("B0_TRUEENDVERTEX_Z", &B0_TRUEENDVERTEX_Z, &b_B0_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("B0_TRUEISSTABLE", &B0_TRUEISSTABLE, &b_B0_TRUEISSTABLE);
   fChain->SetBranchAddress("B0_TRUETAU", &B0_TRUETAU, &b_B0_TRUETAU);
   fChain->SetBranchAddress("B0_ID", &B0_ID, &b_B0_ID);
   fChain->SetBranchAddress("B0_MC_ISPROMPT", &B0_MC_ISPROMPT, &b_B0_MC_ISPROMPT);
   fChain->SetBranchAddress("B0_MC_LONGLIVED_ID", &B0_MC_LONGLIVED_ID, &b_B0_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("B0_MC_LONGLIVED_KEY", &B0_MC_LONGLIVED_KEY, &b_B0_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("B0_Reconstructible", &B0_Reconstructible, &b_B0_Reconstructible);
   fChain->SetBranchAddress("B0_Reconstructed", &B0_Reconstructed, &b_B0_Reconstructed);
   fChain->SetBranchAddress("B0_ProtoParticles", &B0_ProtoParticles, &b_B0_ProtoParticles);
   fChain->SetBranchAddress("B0_PP_PX", &B0_PP_PX, &b_B0_PP_PX);
   fChain->SetBranchAddress("B0_PP_PY", &B0_PP_PY, &b_B0_PP_PY);
   fChain->SetBranchAddress("B0_PP_PZ", &B0_PP_PZ, &b_B0_PP_PZ);
   fChain->SetBranchAddress("B0_PP_Weight", &B0_PP_Weight, &b_B0_PP_Weight);
   fChain->SetBranchAddress("B0_PP_tr_pchi2", &B0_PP_tr_pchi2, &b_B0_PP_tr_pchi2);
   fChain->SetBranchAddress("B0_PP_DLLe", &B0_PP_DLLe, &b_B0_PP_DLLe);
   fChain->SetBranchAddress("B0_PP_DLLk", &B0_PP_DLLk, &b_B0_PP_DLLk);
   fChain->SetBranchAddress("B0_PP_DLLp", &B0_PP_DLLp, &b_B0_PP_DLLp);
   fChain->SetBranchAddress("B0_PP_DLLmu", &B0_PP_DLLmu, &b_B0_PP_DLLmu);
   fChain->SetBranchAddress("B0_TAU", &B0_TAU, &b_B0_TAU);
   fChain->SetBranchAddress("B0_TAUERR", &B0_TAUERR, &b_B0_TAUERR);
   fChain->SetBranchAddress("B0_TAUCHI2", &B0_TAUCHI2, &b_B0_TAUCHI2);
   fChain->SetBranchAddress("B0_X", &B0_X, &b_B0_X);
   fChain->SetBranchAddress("B0_Y", &B0_Y, &b_B0_Y);
   fChain->SetBranchAddress("B0_NumVtxWithinChi2WindowOneTrack", &B0_NumVtxWithinChi2WindowOneTrack, &b_B0_NumVtxWithinChi2WindowOneTrack);
   fChain->SetBranchAddress("B0_SmallestDeltaChi2OneTrack", &B0_SmallestDeltaChi2OneTrack, &b_B0_SmallestDeltaChi2OneTrack);
   fChain->SetBranchAddress("B0_SmallestDeltaChi2MassOneTrack", &B0_SmallestDeltaChi2MassOneTrack, &b_B0_SmallestDeltaChi2MassOneTrack);
   fChain->SetBranchAddress("B0_SmallestDeltaChi2TwoTracks", &B0_SmallestDeltaChi2TwoTracks, &b_B0_SmallestDeltaChi2TwoTracks);
   fChain->SetBranchAddress("B0_SmallestDeltaChi2MassTwoTracks", &B0_SmallestDeltaChi2MassTwoTracks, &b_B0_SmallestDeltaChi2MassTwoTracks);
   fChain->SetBranchAddress("B0_DTF_All", &B0_DTF_All, &b_B0_DTF_All);
   fChain->SetBranchAddress("B0_DTF_MASS", &B0_DTF_MASS, &b_B0_DTF_MASS);
   fChain->SetBranchAddress("B0_DOCA12", &B0_DOCA12, &b_B0_DOCA12);
   fChain->SetBranchAddress("B0_DOCACHI2", &B0_DOCACHI2, &b_B0_DOCACHI2);
   fChain->SetBranchAddress("B0_ETA", &B0_ETA, &b_B0_ETA);
   fChain->SetBranchAddress("B0_LOKI_BPVCORRM", &B0_LOKI_BPVCORRM, &b_B0_LOKI_BPVCORRM);
   fChain->SetBranchAddress("B0_LOKI_BPVLTIME", &B0_LOKI_BPVLTIME, &b_B0_LOKI_BPVLTIME);
   fChain->SetBranchAddress("B0_LOKI_DIRA", &B0_LOKI_DIRA, &b_B0_LOKI_DIRA);
   fChain->SetBranchAddress("B0_LOKI_FDCHI2", &B0_LOKI_FDCHI2, &b_B0_LOKI_FDCHI2);
   fChain->SetBranchAddress("B0_LOKI_FDS", &B0_LOKI_FDS, &b_B0_LOKI_FDS);
   fChain->SetBranchAddress("B0_LOKI_IPCHI2", &B0_LOKI_IPCHI2, &b_B0_LOKI_IPCHI2);
   fChain->SetBranchAddress("B0_LOKI_MAXDOCA", &B0_LOKI_MAXDOCA, &b_B0_LOKI_MAXDOCA);
   fChain->SetBranchAddress("B0_MASS12", &B0_MASS12, &b_B0_MASS12);
   fChain->SetBranchAddress("B0_PHI", &B0_PHI, &b_B0_PHI);
   fChain->SetBranchAddress("B0_PVALLFit_nPV", &B0_PVALLFit_nPV, &b_B0_PVALLFit_nPV);
   fChain->SetBranchAddress("B0_PVDFit_nPV", &B0_PVDFit_nPV, &b_B0_PVDFit_nPV);
   fChain->SetBranchAddress("B0_PVFit_nPV", &B0_PVFit_nPV, &b_B0_PVFit_nPV);
   fChain->SetBranchAddress("B0_L0Global_Dec", &B0_L0Global_Dec, &b_B0_L0Global_Dec);
   fChain->SetBranchAddress("B0_L0Global_TIS", &B0_L0Global_TIS, &b_B0_L0Global_TIS);
   fChain->SetBranchAddress("B0_L0Global_TOS", &B0_L0Global_TOS, &b_B0_L0Global_TOS);
   fChain->SetBranchAddress("B0_Hlt1Global_Dec", &B0_Hlt1Global_Dec, &b_B0_Hlt1Global_Dec);
   fChain->SetBranchAddress("B0_Hlt1Global_TIS", &B0_Hlt1Global_TIS, &b_B0_Hlt1Global_TIS);
   fChain->SetBranchAddress("B0_Hlt1Global_TOS", &B0_Hlt1Global_TOS, &b_B0_Hlt1Global_TOS);
   fChain->SetBranchAddress("B0_Hlt1Phys_Dec", &B0_Hlt1Phys_Dec, &b_B0_Hlt1Phys_Dec);
   fChain->SetBranchAddress("B0_Hlt1Phys_TIS", &B0_Hlt1Phys_TIS, &b_B0_Hlt1Phys_TIS);
   fChain->SetBranchAddress("B0_Hlt1Phys_TOS", &B0_Hlt1Phys_TOS, &b_B0_Hlt1Phys_TOS);
   fChain->SetBranchAddress("B0_Hlt2Global_Dec", &B0_Hlt2Global_Dec, &b_B0_Hlt2Global_Dec);
   fChain->SetBranchAddress("B0_Hlt2Global_TIS", &B0_Hlt2Global_TIS, &b_B0_Hlt2Global_TIS);
   fChain->SetBranchAddress("B0_Hlt2Global_TOS", &B0_Hlt2Global_TOS, &b_B0_Hlt2Global_TOS);
   fChain->SetBranchAddress("B0_Hlt2Phys_Dec", &B0_Hlt2Phys_Dec, &b_B0_Hlt2Phys_Dec);
   fChain->SetBranchAddress("B0_Hlt2Phys_TIS", &B0_Hlt2Phys_TIS, &b_B0_Hlt2Phys_TIS);
   fChain->SetBranchAddress("B0_Hlt2Phys_TOS", &B0_Hlt2Phys_TOS, &b_B0_Hlt2Phys_TOS);
   fChain->SetBranchAddress("B0_L0HadronDecision_Dec", &B0_L0HadronDecision_Dec, &b_B0_L0HadronDecision_Dec);
   fChain->SetBranchAddress("B0_L0HadronDecision_TIS", &B0_L0HadronDecision_TIS, &b_B0_L0HadronDecision_TIS);
   fChain->SetBranchAddress("B0_L0HadronDecision_TOS", &B0_L0HadronDecision_TOS, &b_B0_L0HadronDecision_TOS);
   fChain->SetBranchAddress("B0_L0GlobalDecision_Dec", &B0_L0GlobalDecision_Dec, &b_B0_L0GlobalDecision_Dec);
   fChain->SetBranchAddress("B0_L0GlobalDecision_TIS", &B0_L0GlobalDecision_TIS, &b_B0_L0GlobalDecision_TIS);
   fChain->SetBranchAddress("B0_L0GlobalDecision_TOS", &B0_L0GlobalDecision_TOS, &b_B0_L0GlobalDecision_TOS);
   fChain->SetBranchAddress("B0_L0ElectronDecision_Dec", &B0_L0ElectronDecision_Dec, &b_B0_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("B0_L0ElectronDecision_TIS", &B0_L0ElectronDecision_TIS, &b_B0_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("B0_L0ElectronDecision_TOS", &B0_L0ElectronDecision_TOS, &b_B0_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("B0_L0MuonDecision_Dec", &B0_L0MuonDecision_Dec, &b_B0_L0MuonDecision_Dec);
   fChain->SetBranchAddress("B0_L0MuonDecision_TIS", &B0_L0MuonDecision_TIS, &b_B0_L0MuonDecision_TIS);
   fChain->SetBranchAddress("B0_L0MuonDecision_TOS", &B0_L0MuonDecision_TOS, &b_B0_L0MuonDecision_TOS);
   fChain->SetBranchAddress("B0_L0MuonHighDecision_Dec", &B0_L0MuonHighDecision_Dec, &b_B0_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("B0_L0MuonHighDecision_TIS", &B0_L0MuonHighDecision_TIS, &b_B0_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("B0_L0MuonHighDecision_TOS", &B0_L0MuonHighDecision_TOS, &b_B0_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("B0_L0PhysDecision_Dec", &B0_L0PhysDecision_Dec, &b_B0_L0PhysDecision_Dec);
   fChain->SetBranchAddress("B0_L0PhysDecision_TIS", &B0_L0PhysDecision_TIS, &b_B0_L0PhysDecision_TIS);
   fChain->SetBranchAddress("B0_L0PhysDecision_TOS", &B0_L0PhysDecision_TOS, &b_B0_L0PhysDecision_TOS);
   fChain->SetBranchAddress("B0_L0PhotonDecision_Dec", &B0_L0PhotonDecision_Dec, &b_B0_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("B0_L0PhotonDecision_TIS", &B0_L0PhotonDecision_TIS, &b_B0_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("B0_L0PhotonDecision_TOS", &B0_L0PhotonDecision_TOS, &b_B0_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("B0_L0DiMuonDecision_Dec", &B0_L0DiMuonDecision_Dec, &b_B0_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("B0_L0DiMuonDecision_TIS", &B0_L0DiMuonDecision_TIS, &b_B0_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("B0_L0DiMuonDecision_TOS", &B0_L0DiMuonDecision_TOS, &b_B0_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackMVADecision_Dec", &B0_Hlt1TrackMVADecision_Dec, &b_B0_Hlt1TrackMVADecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackMVADecision_TIS", &B0_Hlt1TrackMVADecision_TIS, &b_B0_Hlt1TrackMVADecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackMVADecision_TOS", &B0_Hlt1TrackMVADecision_TOS, &b_B0_Hlt1TrackMVADecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TwoTrackMVADecision_Dec", &B0_Hlt1TwoTrackMVADecision_Dec, &b_B0_Hlt1TwoTrackMVADecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TwoTrackMVADecision_TIS", &B0_Hlt1TwoTrackMVADecision_TIS, &b_B0_Hlt1TwoTrackMVADecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TwoTrackMVADecision_TOS", &B0_Hlt1TwoTrackMVADecision_TOS, &b_B0_Hlt1TwoTrackMVADecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackAllL0Decision_Dec", &B0_Hlt1TrackAllL0Decision_Dec, &b_B0_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackAllL0Decision_TIS", &B0_Hlt1TrackAllL0Decision_TIS, &b_B0_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackAllL0Decision_TOS", &B0_Hlt1TrackAllL0Decision_TOS, &b_B0_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackMuonDecision_Dec", &B0_Hlt1TrackMuonDecision_Dec, &b_B0_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackMuonDecision_TIS", &B0_Hlt1TrackMuonDecision_TIS, &b_B0_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackMuonDecision_TOS", &B0_Hlt1TrackMuonDecision_TOS, &b_B0_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackPhotonDecision_Dec", &B0_Hlt1TrackPhotonDecision_Dec, &b_B0_Hlt1TrackPhotonDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackPhotonDecision_TIS", &B0_Hlt1TrackPhotonDecision_TIS, &b_B0_Hlt1TrackPhotonDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackPhotonDecision_TOS", &B0_Hlt1TrackPhotonDecision_TOS, &b_B0_Hlt1TrackPhotonDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1GlobalDecision_Dec", &B0_Hlt1GlobalDecision_Dec, &b_B0_Hlt1GlobalDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1GlobalDecision_TIS", &B0_Hlt1GlobalDecision_TIS, &b_B0_Hlt1GlobalDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1GlobalDecision_TOS", &B0_Hlt1GlobalDecision_TOS, &b_B0_Hlt1GlobalDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackMVALooseDecision_Dec", &B0_Hlt1TrackMVALooseDecision_Dec, &b_B0_Hlt1TrackMVALooseDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackMVALooseDecision_TIS", &B0_Hlt1TrackMVALooseDecision_TIS, &b_B0_Hlt1TrackMVALooseDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackMVALooseDecision_TOS", &B0_Hlt1TrackMVALooseDecision_TOS, &b_B0_Hlt1TrackMVALooseDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TwoTrackMVALooseDecision_Dec", &B0_Hlt1TwoTrackMVALooseDecision_Dec, &b_B0_Hlt1TwoTrackMVALooseDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TwoTrackMVALooseDecision_TIS", &B0_Hlt1TwoTrackMVALooseDecision_TIS, &b_B0_Hlt1TwoTrackMVALooseDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TwoTrackMVALooseDecision_TOS", &B0_Hlt1TwoTrackMVALooseDecision_TOS, &b_B0_Hlt1TwoTrackMVALooseDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1L0AnyDecision_Dec", &B0_Hlt1L0AnyDecision_Dec, &b_B0_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1L0AnyDecision_TIS", &B0_Hlt1L0AnyDecision_TIS, &b_B0_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1L0AnyDecision_TOS", &B0_Hlt1L0AnyDecision_TOS, &b_B0_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackForwardPassThroughDecision_Dec", &B0_Hlt1TrackForwardPassThroughDecision_Dec, &b_B0_Hlt1TrackForwardPassThroughDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackForwardPassThroughDecision_TIS", &B0_Hlt1TrackForwardPassThroughDecision_TIS, &b_B0_Hlt1TrackForwardPassThroughDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackForwardPassThroughDecision_TOS", &B0_Hlt1TrackForwardPassThroughDecision_TOS, &b_B0_Hlt1TrackForwardPassThroughDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1TrackForwardPassThroughLooseDecision_Dec", &B0_Hlt1TrackForwardPassThroughLooseDecision_Dec, &b_B0_Hlt1TrackForwardPassThroughLooseDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1TrackForwardPassThroughLooseDecision_TIS", &B0_Hlt1TrackForwardPassThroughLooseDecision_TIS, &b_B0_Hlt1TrackForwardPassThroughLooseDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1TrackForwardPassThroughLooseDecision_TOS", &B0_Hlt1TrackForwardPassThroughLooseDecision_TOS, &b_B0_Hlt1TrackForwardPassThroughLooseDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1DiMuonHighMassDecision_Dec", &B0_Hlt1DiMuonHighMassDecision_Dec, &b_B0_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1DiMuonHighMassDecision_TIS", &B0_Hlt1DiMuonHighMassDecision_TIS, &b_B0_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1DiMuonHighMassDecision_TOS", &B0_Hlt1DiMuonHighMassDecision_TOS, &b_B0_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1DiMuonLowMassDecision_Dec", &B0_Hlt1DiMuonLowMassDecision_Dec, &b_B0_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1DiMuonLowMassDecision_TIS", &B0_Hlt1DiMuonLowMassDecision_TIS, &b_B0_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1DiMuonLowMassDecision_TOS", &B0_Hlt1DiMuonLowMassDecision_TOS, &b_B0_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonHighPTDecision_Dec", &B0_Hlt1SingleMuonHighPTDecision_Dec, &b_B0_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonHighPTDecision_TIS", &B0_Hlt1SingleMuonHighPTDecision_TIS, &b_B0_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt1SingleMuonHighPTDecision_TOS", &B0_Hlt1SingleMuonHighPTDecision_TOS, &b_B0_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2GlobalDecision_Dec", &B0_Hlt2GlobalDecision_Dec, &b_B0_Hlt2GlobalDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2GlobalDecision_TIS", &B0_Hlt2GlobalDecision_TIS, &b_B0_Hlt2GlobalDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2GlobalDecision_TOS", &B0_Hlt2GlobalDecision_TOS, &b_B0_Hlt2GlobalDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyBBDTDecision_Dec", &B0_Hlt2Topo2BodyBBDTDecision_Dec, &b_B0_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyBBDTDecision_TIS", &B0_Hlt2Topo2BodyBBDTDecision_TIS, &b_B0_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyBBDTDecision_TOS", &B0_Hlt2Topo2BodyBBDTDecision_TOS, &b_B0_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyBBDTDecision_Dec", &B0_Hlt2Topo3BodyBBDTDecision_Dec, &b_B0_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyBBDTDecision_TIS", &B0_Hlt2Topo3BodyBBDTDecision_TIS, &b_B0_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyBBDTDecision_TOS", &B0_Hlt2Topo3BodyBBDTDecision_TOS, &b_B0_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyBBDTDecision_Dec", &B0_Hlt2Topo4BodyBBDTDecision_Dec, &b_B0_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyBBDTDecision_TIS", &B0_Hlt2Topo4BodyBBDTDecision_TIS, &b_B0_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyBBDTDecision_TOS", &B0_Hlt2Topo4BodyBBDTDecision_TOS, &b_B0_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyDecision_Dec", &B0_Hlt2Topo2BodyDecision_Dec, &b_B0_Hlt2Topo2BodyDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyDecision_TIS", &B0_Hlt2Topo2BodyDecision_TIS, &b_B0_Hlt2Topo2BodyDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo2BodyDecision_TOS", &B0_Hlt2Topo2BodyDecision_TOS, &b_B0_Hlt2Topo2BodyDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyDecision_Dec", &B0_Hlt2Topo3BodyDecision_Dec, &b_B0_Hlt2Topo3BodyDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyDecision_TIS", &B0_Hlt2Topo3BodyDecision_TIS, &b_B0_Hlt2Topo3BodyDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo3BodyDecision_TOS", &B0_Hlt2Topo3BodyDecision_TOS, &b_B0_Hlt2Topo3BodyDecision_TOS);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyDecision_Dec", &B0_Hlt2Topo4BodyDecision_Dec, &b_B0_Hlt2Topo4BodyDecision_Dec);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyDecision_TIS", &B0_Hlt2Topo4BodyDecision_TIS, &b_B0_Hlt2Topo4BodyDecision_TIS);
   fChain->SetBranchAddress("B0_Hlt2Topo4BodyDecision_TOS", &B0_Hlt2Topo4BodyDecision_TOS, &b_B0_Hlt2Topo4BodyDecision_TOS);
   fChain->SetBranchAddress("D_CosTheta", &D_CosTheta, &b_D_CosTheta);
   fChain->SetBranchAddress("D_ENDVERTEX_X", &D_ENDVERTEX_X, &b_D_ENDVERTEX_X);
   fChain->SetBranchAddress("D_ENDVERTEX_Y", &D_ENDVERTEX_Y, &b_D_ENDVERTEX_Y);
   fChain->SetBranchAddress("D_ENDVERTEX_Z", &D_ENDVERTEX_Z, &b_D_ENDVERTEX_Z);
   fChain->SetBranchAddress("D_ENDVERTEX_XERR", &D_ENDVERTEX_XERR, &b_D_ENDVERTEX_XERR);
   fChain->SetBranchAddress("D_ENDVERTEX_YERR", &D_ENDVERTEX_YERR, &b_D_ENDVERTEX_YERR);
   fChain->SetBranchAddress("D_ENDVERTEX_ZERR", &D_ENDVERTEX_ZERR, &b_D_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("D_ENDVERTEX_CHI2", &D_ENDVERTEX_CHI2, &b_D_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("D_ENDVERTEX_NDOF", &D_ENDVERTEX_NDOF, &b_D_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("D_ENDVERTEX_COV_", D_ENDVERTEX_COV_, &b_D_ENDVERTEX_COV_);
   fChain->SetBranchAddress("D_OWNPV_X", &D_OWNPV_X, &b_D_OWNPV_X);
   fChain->SetBranchAddress("D_OWNPV_Y", &D_OWNPV_Y, &b_D_OWNPV_Y);
   fChain->SetBranchAddress("D_OWNPV_Z", &D_OWNPV_Z, &b_D_OWNPV_Z);
   fChain->SetBranchAddress("D_OWNPV_XERR", &D_OWNPV_XERR, &b_D_OWNPV_XERR);
   fChain->SetBranchAddress("D_OWNPV_YERR", &D_OWNPV_YERR, &b_D_OWNPV_YERR);
   fChain->SetBranchAddress("D_OWNPV_ZERR", &D_OWNPV_ZERR, &b_D_OWNPV_ZERR);
   fChain->SetBranchAddress("D_OWNPV_CHI2", &D_OWNPV_CHI2, &b_D_OWNPV_CHI2);
   fChain->SetBranchAddress("D_OWNPV_NDOF", &D_OWNPV_NDOF, &b_D_OWNPV_NDOF);
   fChain->SetBranchAddress("D_OWNPV_COV_", D_OWNPV_COV_, &b_D_OWNPV_COV_);
   fChain->SetBranchAddress("D_IP_OWNPV", &D_IP_OWNPV, &b_D_IP_OWNPV);
   fChain->SetBranchAddress("D_IPCHI2_OWNPV", &D_IPCHI2_OWNPV, &b_D_IPCHI2_OWNPV);
   fChain->SetBranchAddress("D_FD_OWNPV", &D_FD_OWNPV, &b_D_FD_OWNPV);
   fChain->SetBranchAddress("D_FDCHI2_OWNPV", &D_FDCHI2_OWNPV, &b_D_FDCHI2_OWNPV);
   fChain->SetBranchAddress("D_DIRA_OWNPV", &D_DIRA_OWNPV, &b_D_DIRA_OWNPV);
   fChain->SetBranchAddress("D_ORIVX_X", &D_ORIVX_X, &b_D_ORIVX_X);
   fChain->SetBranchAddress("D_ORIVX_Y", &D_ORIVX_Y, &b_D_ORIVX_Y);
   fChain->SetBranchAddress("D_ORIVX_Z", &D_ORIVX_Z, &b_D_ORIVX_Z);
   fChain->SetBranchAddress("D_ORIVX_XERR", &D_ORIVX_XERR, &b_D_ORIVX_XERR);
   fChain->SetBranchAddress("D_ORIVX_YERR", &D_ORIVX_YERR, &b_D_ORIVX_YERR);
   fChain->SetBranchAddress("D_ORIVX_ZERR", &D_ORIVX_ZERR, &b_D_ORIVX_ZERR);
   fChain->SetBranchAddress("D_ORIVX_CHI2", &D_ORIVX_CHI2, &b_D_ORIVX_CHI2);
   fChain->SetBranchAddress("D_ORIVX_NDOF", &D_ORIVX_NDOF, &b_D_ORIVX_NDOF);
   fChain->SetBranchAddress("D_ORIVX_COV_", D_ORIVX_COV_, &b_D_ORIVX_COV_);
   fChain->SetBranchAddress("D_FD_ORIVX", &D_FD_ORIVX, &b_D_FD_ORIVX);
   fChain->SetBranchAddress("D_FDCHI2_ORIVX", &D_FDCHI2_ORIVX, &b_D_FDCHI2_ORIVX);
   fChain->SetBranchAddress("D_DIRA_ORIVX", &D_DIRA_ORIVX, &b_D_DIRA_ORIVX);
   fChain->SetBranchAddress("D_P", &D_P, &b_D_P);
   fChain->SetBranchAddress("D_PT", &D_PT, &b_D_PT);
   fChain->SetBranchAddress("D_PE", &D_PE, &b_D_PE);
   fChain->SetBranchAddress("D_PX", &D_PX, &b_D_PX);
   fChain->SetBranchAddress("D_PY", &D_PY, &b_D_PY);
   fChain->SetBranchAddress("D_PZ", &D_PZ, &b_D_PZ);
   fChain->SetBranchAddress("D_MM", &D_MM, &b_D_MM);
   fChain->SetBranchAddress("D_MMERR", &D_MMERR, &b_D_MMERR);
   fChain->SetBranchAddress("D_M", &D_M, &b_D_M);
   fChain->SetBranchAddress("D_BKGCAT", &D_BKGCAT, &b_D_BKGCAT);
   fChain->SetBranchAddress("D_TRUEID", &D_TRUEID, &b_D_TRUEID);
   fChain->SetBranchAddress("D_TRUECosTheta", &D_TRUECosTheta, &b_D_TRUECosTheta);
   fChain->SetBranchAddress("D_MCP_numPseudoTypes", &D_MCP_numPseudoTypes, &b_D_MCP_numPseudoTypes);
   fChain->SetBranchAddress("D_MCP_MCP_PseudoLen", &D_MCP_MCP_PseudoLen, &b_D_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("D_MCP_PseudoTypes", D_MCP_PseudoTypes, &b_D_MCP_PseudoTypes);
   fChain->SetBranchAddress("D_MC_MOTHER_ID", &D_MC_MOTHER_ID, &b_D_MC_MOTHER_ID);
   fChain->SetBranchAddress("D_MC_MOTHER_KEY", &D_MC_MOTHER_KEY, &b_D_MC_MOTHER_KEY);
   fChain->SetBranchAddress("D_MC_GD_MOTHER_ID", &D_MC_GD_MOTHER_ID, &b_D_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("D_MC_GD_MOTHER_KEY", &D_MC_GD_MOTHER_KEY, &b_D_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("D_MC_GD_GD_MOTHER_ID", &D_MC_GD_GD_MOTHER_ID, &b_D_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("D_MC_GD_GD_MOTHER_KEY", &D_MC_GD_GD_MOTHER_KEY, &b_D_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("D_TRUEP_E", &D_TRUEP_E, &b_D_TRUEP_E);
   fChain->SetBranchAddress("D_TRUEP_X", &D_TRUEP_X, &b_D_TRUEP_X);
   fChain->SetBranchAddress("D_TRUEP_Y", &D_TRUEP_Y, &b_D_TRUEP_Y);
   fChain->SetBranchAddress("D_TRUEP_Z", &D_TRUEP_Z, &b_D_TRUEP_Z);
   fChain->SetBranchAddress("D_TRUEPT", &D_TRUEPT, &b_D_TRUEPT);
   fChain->SetBranchAddress("D_TRUEORIGINVERTEX_X", &D_TRUEORIGINVERTEX_X, &b_D_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("D_TRUEORIGINVERTEX_Y", &D_TRUEORIGINVERTEX_Y, &b_D_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("D_TRUEORIGINVERTEX_Z", &D_TRUEORIGINVERTEX_Z, &b_D_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("D_TRUEENDVERTEX_X", &D_TRUEENDVERTEX_X, &b_D_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("D_TRUEENDVERTEX_Y", &D_TRUEENDVERTEX_Y, &b_D_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("D_TRUEENDVERTEX_Z", &D_TRUEENDVERTEX_Z, &b_D_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("D_TRUEISSTABLE", &D_TRUEISSTABLE, &b_D_TRUEISSTABLE);
   fChain->SetBranchAddress("D_TRUETAU", &D_TRUETAU, &b_D_TRUETAU);
   fChain->SetBranchAddress("D_ID", &D_ID, &b_D_ID);
   fChain->SetBranchAddress("D_MC_ISPROMPT", &D_MC_ISPROMPT, &b_D_MC_ISPROMPT);
   fChain->SetBranchAddress("D_MC_LONGLIVED_ID", &D_MC_LONGLIVED_ID, &b_D_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("D_MC_LONGLIVED_KEY", &D_MC_LONGLIVED_KEY, &b_D_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("D_Reconstructible", &D_Reconstructible, &b_D_Reconstructible);
   fChain->SetBranchAddress("D_Reconstructed", &D_Reconstructed, &b_D_Reconstructed);
   fChain->SetBranchAddress("D_ProtoParticles", &D_ProtoParticles, &b_D_ProtoParticles);
   fChain->SetBranchAddress("D_PP_PX", &D_PP_PX, &b_D_PP_PX);
   fChain->SetBranchAddress("D_PP_PY", &D_PP_PY, &b_D_PP_PY);
   fChain->SetBranchAddress("D_PP_PZ", &D_PP_PZ, &b_D_PP_PZ);
   fChain->SetBranchAddress("D_PP_Weight", &D_PP_Weight, &b_D_PP_Weight);
   fChain->SetBranchAddress("D_PP_tr_pchi2", &D_PP_tr_pchi2, &b_D_PP_tr_pchi2);
   fChain->SetBranchAddress("D_PP_DLLe", &D_PP_DLLe, &b_D_PP_DLLe);
   fChain->SetBranchAddress("D_PP_DLLk", &D_PP_DLLk, &b_D_PP_DLLk);
   fChain->SetBranchAddress("D_PP_DLLp", &D_PP_DLLp, &b_D_PP_DLLp);
   fChain->SetBranchAddress("D_PP_DLLmu", &D_PP_DLLmu, &b_D_PP_DLLmu);
   fChain->SetBranchAddress("D_TAU", &D_TAU, &b_D_TAU);
   fChain->SetBranchAddress("D_TAUERR", &D_TAUERR, &b_D_TAUERR);
   fChain->SetBranchAddress("D_TAUCHI2", &D_TAUCHI2, &b_D_TAUCHI2);
   fChain->SetBranchAddress("D_L0Global_Dec", &D_L0Global_Dec, &b_D_L0Global_Dec);
   fChain->SetBranchAddress("D_L0Global_TIS", &D_L0Global_TIS, &b_D_L0Global_TIS);
   fChain->SetBranchAddress("D_L0Global_TOS", &D_L0Global_TOS, &b_D_L0Global_TOS);
   fChain->SetBranchAddress("D_Hlt1Global_Dec", &D_Hlt1Global_Dec, &b_D_Hlt1Global_Dec);
   fChain->SetBranchAddress("D_Hlt1Global_TIS", &D_Hlt1Global_TIS, &b_D_Hlt1Global_TIS);
   fChain->SetBranchAddress("D_Hlt1Global_TOS", &D_Hlt1Global_TOS, &b_D_Hlt1Global_TOS);
   fChain->SetBranchAddress("D_Hlt1Phys_Dec", &D_Hlt1Phys_Dec, &b_D_Hlt1Phys_Dec);
   fChain->SetBranchAddress("D_Hlt1Phys_TIS", &D_Hlt1Phys_TIS, &b_D_Hlt1Phys_TIS);
   fChain->SetBranchAddress("D_Hlt1Phys_TOS", &D_Hlt1Phys_TOS, &b_D_Hlt1Phys_TOS);
   fChain->SetBranchAddress("D_Hlt2Global_Dec", &D_Hlt2Global_Dec, &b_D_Hlt2Global_Dec);
   fChain->SetBranchAddress("D_Hlt2Global_TIS", &D_Hlt2Global_TIS, &b_D_Hlt2Global_TIS);
   fChain->SetBranchAddress("D_Hlt2Global_TOS", &D_Hlt2Global_TOS, &b_D_Hlt2Global_TOS);
   fChain->SetBranchAddress("D_Hlt2Phys_Dec", &D_Hlt2Phys_Dec, &b_D_Hlt2Phys_Dec);
   fChain->SetBranchAddress("D_Hlt2Phys_TIS", &D_Hlt2Phys_TIS, &b_D_Hlt2Phys_TIS);
   fChain->SetBranchAddress("D_Hlt2Phys_TOS", &D_Hlt2Phys_TOS, &b_D_Hlt2Phys_TOS);
   fChain->SetBranchAddress("D_X", &D_X, &b_D_X);
   fChain->SetBranchAddress("D_Y", &D_Y, &b_D_Y);
   fChain->SetBranchAddress("D_NumVtxWithinChi2WindowOneTrack", &D_NumVtxWithinChi2WindowOneTrack, &b_D_NumVtxWithinChi2WindowOneTrack);
   fChain->SetBranchAddress("D_SmallestDeltaChi2OneTrack", &D_SmallestDeltaChi2OneTrack, &b_D_SmallestDeltaChi2OneTrack);
   fChain->SetBranchAddress("D_SmallestDeltaChi2MassOneTrack", &D_SmallestDeltaChi2MassOneTrack, &b_D_SmallestDeltaChi2MassOneTrack);
   fChain->SetBranchAddress("D_SmallestDeltaChi2TwoTracks", &D_SmallestDeltaChi2TwoTracks, &b_D_SmallestDeltaChi2TwoTracks);
   fChain->SetBranchAddress("D_SmallestDeltaChi2MassTwoTracks", &D_SmallestDeltaChi2MassTwoTracks, &b_D_SmallestDeltaChi2MassTwoTracks);
   fChain->SetBranchAddress("D_DOCA12", &D_DOCA12, &b_D_DOCA12);
   fChain->SetBranchAddress("D_DOCA13", &D_DOCA13, &b_D_DOCA13);
   fChain->SetBranchAddress("D_DOCA23", &D_DOCA23, &b_D_DOCA23);
   fChain->SetBranchAddress("D_DOCACHI2_12", &D_DOCACHI2_12, &b_D_DOCACHI2_12);
   fChain->SetBranchAddress("D_DOCACHI2_13", &D_DOCACHI2_13, &b_D_DOCACHI2_13);
   fChain->SetBranchAddress("D_DOCACHI2_23", &D_DOCACHI2_23, &b_D_DOCACHI2_23);
   fChain->SetBranchAddress("D_ETA", &D_ETA, &b_D_ETA);
   fChain->SetBranchAddress("D_LOKI_BPVCORRM", &D_LOKI_BPVCORRM, &b_D_LOKI_BPVCORRM);
   fChain->SetBranchAddress("D_LOKI_BPVLTIME", &D_LOKI_BPVLTIME, &b_D_LOKI_BPVLTIME);
   fChain->SetBranchAddress("D_LOKI_DIRA", &D_LOKI_DIRA, &b_D_LOKI_DIRA);
   fChain->SetBranchAddress("D_LOKI_FDCHI2", &D_LOKI_FDCHI2, &b_D_LOKI_FDCHI2);
   fChain->SetBranchAddress("D_LOKI_FDS", &D_LOKI_FDS, &b_D_LOKI_FDS);
   fChain->SetBranchAddress("D_LOKI_IPCHI2", &D_LOKI_IPCHI2, &b_D_LOKI_IPCHI2);
   fChain->SetBranchAddress("D_LOKI_MAXDOCA", &D_LOKI_MAXDOCA, &b_D_LOKI_MAXDOCA);
   fChain->SetBranchAddress("D_LV01", &D_LV01, &b_D_LV01);
   fChain->SetBranchAddress("D_LV02", &D_LV02, &b_D_LV02);
   fChain->SetBranchAddress("D_MASS12", &D_MASS12, &b_D_MASS12);
   fChain->SetBranchAddress("D_MASS13", &D_MASS13, &b_D_MASS13);
   fChain->SetBranchAddress("D_MASS23", &D_MASS23, &b_D_MASS23);
   fChain->SetBranchAddress("D_PHI", &D_PHI, &b_D_PHI);
   fChain->SetBranchAddress("K_MC12TuneV2_ProbNNe", &K_MC12TuneV2_ProbNNe, &b_K_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("K_MC12TuneV2_ProbNNmu", &K_MC12TuneV2_ProbNNmu, &b_K_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("K_MC12TuneV2_ProbNNpi", &K_MC12TuneV2_ProbNNpi, &b_K_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("K_MC12TuneV2_ProbNNk", &K_MC12TuneV2_ProbNNk, &b_K_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("K_MC12TuneV2_ProbNNp", &K_MC12TuneV2_ProbNNp, &b_K_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("K_MC12TuneV2_ProbNNghost", &K_MC12TuneV2_ProbNNghost, &b_K_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("K_MC12TuneV3_ProbNNe", &K_MC12TuneV3_ProbNNe, &b_K_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("K_MC12TuneV3_ProbNNmu", &K_MC12TuneV3_ProbNNmu, &b_K_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("K_MC12TuneV3_ProbNNpi", &K_MC12TuneV3_ProbNNpi, &b_K_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("K_MC12TuneV3_ProbNNk", &K_MC12TuneV3_ProbNNk, &b_K_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("K_MC12TuneV3_ProbNNp", &K_MC12TuneV3_ProbNNp, &b_K_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("K_MC12TuneV3_ProbNNghost", &K_MC12TuneV3_ProbNNghost, &b_K_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("K_MC12TuneV4_ProbNNe", &K_MC12TuneV4_ProbNNe, &b_K_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("K_MC12TuneV4_ProbNNmu", &K_MC12TuneV4_ProbNNmu, &b_K_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("K_MC12TuneV4_ProbNNpi", &K_MC12TuneV4_ProbNNpi, &b_K_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("K_MC12TuneV4_ProbNNk", &K_MC12TuneV4_ProbNNk, &b_K_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("K_MC12TuneV4_ProbNNp", &K_MC12TuneV4_ProbNNp, &b_K_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("K_MC12TuneV4_ProbNNghost", &K_MC12TuneV4_ProbNNghost, &b_K_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("K_MC15TuneV1_ProbNNe", &K_MC15TuneV1_ProbNNe, &b_K_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("K_MC15TuneV1_ProbNNmu", &K_MC15TuneV1_ProbNNmu, &b_K_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("K_MC15TuneV1_ProbNNpi", &K_MC15TuneV1_ProbNNpi, &b_K_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("K_MC15TuneV1_ProbNNk", &K_MC15TuneV1_ProbNNk, &b_K_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("K_MC15TuneV1_ProbNNp", &K_MC15TuneV1_ProbNNp, &b_K_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("K_MC15TuneV1_ProbNNghost", &K_MC15TuneV1_ProbNNghost, &b_K_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("K_CosTheta", &K_CosTheta, &b_K_CosTheta);
   fChain->SetBranchAddress("K_OWNPV_X", &K_OWNPV_X, &b_K_OWNPV_X);
   fChain->SetBranchAddress("K_OWNPV_Y", &K_OWNPV_Y, &b_K_OWNPV_Y);
   fChain->SetBranchAddress("K_OWNPV_Z", &K_OWNPV_Z, &b_K_OWNPV_Z);
   fChain->SetBranchAddress("K_OWNPV_XERR", &K_OWNPV_XERR, &b_K_OWNPV_XERR);
   fChain->SetBranchAddress("K_OWNPV_YERR", &K_OWNPV_YERR, &b_K_OWNPV_YERR);
   fChain->SetBranchAddress("K_OWNPV_ZERR", &K_OWNPV_ZERR, &b_K_OWNPV_ZERR);
   fChain->SetBranchAddress("K_OWNPV_CHI2", &K_OWNPV_CHI2, &b_K_OWNPV_CHI2);
   fChain->SetBranchAddress("K_OWNPV_NDOF", &K_OWNPV_NDOF, &b_K_OWNPV_NDOF);
   fChain->SetBranchAddress("K_OWNPV_COV_", K_OWNPV_COV_, &b_K_OWNPV_COV_);
   fChain->SetBranchAddress("K_IP_OWNPV", &K_IP_OWNPV, &b_K_IP_OWNPV);
   fChain->SetBranchAddress("K_IPCHI2_OWNPV", &K_IPCHI2_OWNPV, &b_K_IPCHI2_OWNPV);
   fChain->SetBranchAddress("K_ORIVX_X", &K_ORIVX_X, &b_K_ORIVX_X);
   fChain->SetBranchAddress("K_ORIVX_Y", &K_ORIVX_Y, &b_K_ORIVX_Y);
   fChain->SetBranchAddress("K_ORIVX_Z", &K_ORIVX_Z, &b_K_ORIVX_Z);
   fChain->SetBranchAddress("K_ORIVX_XERR", &K_ORIVX_XERR, &b_K_ORIVX_XERR);
   fChain->SetBranchAddress("K_ORIVX_YERR", &K_ORIVX_YERR, &b_K_ORIVX_YERR);
   fChain->SetBranchAddress("K_ORIVX_ZERR", &K_ORIVX_ZERR, &b_K_ORIVX_ZERR);
   fChain->SetBranchAddress("K_ORIVX_CHI2", &K_ORIVX_CHI2, &b_K_ORIVX_CHI2);
   fChain->SetBranchAddress("K_ORIVX_NDOF", &K_ORIVX_NDOF, &b_K_ORIVX_NDOF);
   fChain->SetBranchAddress("K_ORIVX_COV_", K_ORIVX_COV_, &b_K_ORIVX_COV_);
   fChain->SetBranchAddress("K_P", &K_P, &b_K_P);
   fChain->SetBranchAddress("K_PT", &K_PT, &b_K_PT);
   fChain->SetBranchAddress("K_PE", &K_PE, &b_K_PE);
   fChain->SetBranchAddress("K_PX", &K_PX, &b_K_PX);
   fChain->SetBranchAddress("K_PY", &K_PY, &b_K_PY);
   fChain->SetBranchAddress("K_PZ", &K_PZ, &b_K_PZ);
   fChain->SetBranchAddress("K_M", &K_M, &b_K_M);
   fChain->SetBranchAddress("K_TRUEID", &K_TRUEID, &b_K_TRUEID);
   fChain->SetBranchAddress("K_TRUECosTheta", &K_TRUECosTheta, &b_K_TRUECosTheta);
   fChain->SetBranchAddress("K_MCP_numPseudoTypes", &K_MCP_numPseudoTypes, &b_K_MCP_numPseudoTypes);
   fChain->SetBranchAddress("K_MCP_MCP_PseudoLen", &K_MCP_MCP_PseudoLen, &b_K_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("K_MCP_PseudoTypes", &K_MCP_PseudoTypes, &b_K_MCP_PseudoTypes);
   fChain->SetBranchAddress("K_MC_MOTHER_ID", &K_MC_MOTHER_ID, &b_K_MC_MOTHER_ID);
   fChain->SetBranchAddress("K_MC_MOTHER_KEY", &K_MC_MOTHER_KEY, &b_K_MC_MOTHER_KEY);
   fChain->SetBranchAddress("K_MC_GD_MOTHER_ID", &K_MC_GD_MOTHER_ID, &b_K_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("K_MC_GD_MOTHER_KEY", &K_MC_GD_MOTHER_KEY, &b_K_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("K_MC_GD_GD_MOTHER_ID", &K_MC_GD_GD_MOTHER_ID, &b_K_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("K_MC_GD_GD_MOTHER_KEY", &K_MC_GD_GD_MOTHER_KEY, &b_K_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("K_TRUEP_E", &K_TRUEP_E, &b_K_TRUEP_E);
   fChain->SetBranchAddress("K_TRUEP_X", &K_TRUEP_X, &b_K_TRUEP_X);
   fChain->SetBranchAddress("K_TRUEP_Y", &K_TRUEP_Y, &b_K_TRUEP_Y);
   fChain->SetBranchAddress("K_TRUEP_Z", &K_TRUEP_Z, &b_K_TRUEP_Z);
   fChain->SetBranchAddress("K_TRUEPT", &K_TRUEPT, &b_K_TRUEPT);
   fChain->SetBranchAddress("K_TRUEORIGINVERTEX_X", &K_TRUEORIGINVERTEX_X, &b_K_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("K_TRUEORIGINVERTEX_Y", &K_TRUEORIGINVERTEX_Y, &b_K_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("K_TRUEORIGINVERTEX_Z", &K_TRUEORIGINVERTEX_Z, &b_K_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("K_TRUEENDVERTEX_X", &K_TRUEENDVERTEX_X, &b_K_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("K_TRUEENDVERTEX_Y", &K_TRUEENDVERTEX_Y, &b_K_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("K_TRUEENDVERTEX_Z", &K_TRUEENDVERTEX_Z, &b_K_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("K_TRUEISSTABLE", &K_TRUEISSTABLE, &b_K_TRUEISSTABLE);
   fChain->SetBranchAddress("K_TRUETAU", &K_TRUETAU, &b_K_TRUETAU);
   fChain->SetBranchAddress("K_ID", &K_ID, &b_K_ID);
   fChain->SetBranchAddress("K_MC_ISPROMPT", &K_MC_ISPROMPT, &b_K_MC_ISPROMPT);
   fChain->SetBranchAddress("K_MC_LONGLIVED_ID", &K_MC_LONGLIVED_ID, &b_K_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("K_MC_LONGLIVED_KEY", &K_MC_LONGLIVED_KEY, &b_K_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("K_Reconstructible", &K_Reconstructible, &b_K_Reconstructible);
   fChain->SetBranchAddress("K_Reconstructed", &K_Reconstructed, &b_K_Reconstructed);
   fChain->SetBranchAddress("K_ProtoParticles", &K_ProtoParticles, &b_K_ProtoParticles);
   fChain->SetBranchAddress("K_PP_PX", K_PP_PX, &b_K_PP_PX);
   fChain->SetBranchAddress("K_PP_PY", K_PP_PY, &b_K_PP_PY);
   fChain->SetBranchAddress("K_PP_PZ", K_PP_PZ, &b_K_PP_PZ);
   fChain->SetBranchAddress("K_PP_Weight", K_PP_Weight, &b_K_PP_Weight);
   fChain->SetBranchAddress("K_PP_tr_pchi2", K_PP_tr_pchi2, &b_K_PP_tr_pchi2);
   fChain->SetBranchAddress("K_PP_DLLe", K_PP_DLLe, &b_K_PP_DLLe);
   fChain->SetBranchAddress("K_PP_DLLk", K_PP_DLLk, &b_K_PP_DLLk);
   fChain->SetBranchAddress("K_PP_DLLp", K_PP_DLLp, &b_K_PP_DLLp);
   fChain->SetBranchAddress("K_PP_DLLmu", K_PP_DLLmu, &b_K_PP_DLLmu);
   fChain->SetBranchAddress("K_PIDe", &K_PIDe, &b_K_PIDe);
   fChain->SetBranchAddress("K_PIDmu", &K_PIDmu, &b_K_PIDmu);
   fChain->SetBranchAddress("K_PIDK", &K_PIDK, &b_K_PIDK);
   fChain->SetBranchAddress("K_PIDp", &K_PIDp, &b_K_PIDp);
   fChain->SetBranchAddress("K_PIDd", &K_PIDd, &b_K_PIDd);
   fChain->SetBranchAddress("K_ProbNNe", &K_ProbNNe, &b_K_ProbNNe);
   fChain->SetBranchAddress("K_ProbNNk", &K_ProbNNk, &b_K_ProbNNk);
   fChain->SetBranchAddress("K_ProbNNp", &K_ProbNNp, &b_K_ProbNNp);
   fChain->SetBranchAddress("K_ProbNNpi", &K_ProbNNpi, &b_K_ProbNNpi);
   fChain->SetBranchAddress("K_ProbNNmu", &K_ProbNNmu, &b_K_ProbNNmu);
   fChain->SetBranchAddress("K_ProbNNd", &K_ProbNNd, &b_K_ProbNNd);
   fChain->SetBranchAddress("K_ProbNNghost", &K_ProbNNghost, &b_K_ProbNNghost);
   fChain->SetBranchAddress("K_hasMuon", &K_hasMuon, &b_K_hasMuon);
   fChain->SetBranchAddress("K_isMuon", &K_isMuon, &b_K_isMuon);
   fChain->SetBranchAddress("K_hasRich", &K_hasRich, &b_K_hasRich);
   fChain->SetBranchAddress("K_UsedRichAerogel", &K_UsedRichAerogel, &b_K_UsedRichAerogel);
   fChain->SetBranchAddress("K_UsedRich1Gas", &K_UsedRich1Gas, &b_K_UsedRich1Gas);
   fChain->SetBranchAddress("K_UsedRich2Gas", &K_UsedRich2Gas, &b_K_UsedRich2Gas);
   fChain->SetBranchAddress("K_RichAboveElThres", &K_RichAboveElThres, &b_K_RichAboveElThres);
   fChain->SetBranchAddress("K_RichAboveMuThres", &K_RichAboveMuThres, &b_K_RichAboveMuThres);
   fChain->SetBranchAddress("K_RichAbovePiThres", &K_RichAbovePiThres, &b_K_RichAbovePiThres);
   fChain->SetBranchAddress("K_RichAboveKaThres", &K_RichAboveKaThres, &b_K_RichAboveKaThres);
   fChain->SetBranchAddress("K_RichAbovePrThres", &K_RichAbovePrThres, &b_K_RichAbovePrThres);
   fChain->SetBranchAddress("K_hasCalo", &K_hasCalo, &b_K_hasCalo);
   fChain->SetBranchAddress("K_L0Global_Dec", &K_L0Global_Dec, &b_K_L0Global_Dec);
   fChain->SetBranchAddress("K_L0Global_TIS", &K_L0Global_TIS, &b_K_L0Global_TIS);
   fChain->SetBranchAddress("K_L0Global_TOS", &K_L0Global_TOS, &b_K_L0Global_TOS);
   fChain->SetBranchAddress("K_Hlt1Global_Dec", &K_Hlt1Global_Dec, &b_K_Hlt1Global_Dec);
   fChain->SetBranchAddress("K_Hlt1Global_TIS", &K_Hlt1Global_TIS, &b_K_Hlt1Global_TIS);
   fChain->SetBranchAddress("K_Hlt1Global_TOS", &K_Hlt1Global_TOS, &b_K_Hlt1Global_TOS);
   fChain->SetBranchAddress("K_Hlt1Phys_Dec", &K_Hlt1Phys_Dec, &b_K_Hlt1Phys_Dec);
   fChain->SetBranchAddress("K_Hlt1Phys_TIS", &K_Hlt1Phys_TIS, &b_K_Hlt1Phys_TIS);
   fChain->SetBranchAddress("K_Hlt1Phys_TOS", &K_Hlt1Phys_TOS, &b_K_Hlt1Phys_TOS);
   fChain->SetBranchAddress("K_Hlt2Global_Dec", &K_Hlt2Global_Dec, &b_K_Hlt2Global_Dec);
   fChain->SetBranchAddress("K_Hlt2Global_TIS", &K_Hlt2Global_TIS, &b_K_Hlt2Global_TIS);
   fChain->SetBranchAddress("K_Hlt2Global_TOS", &K_Hlt2Global_TOS, &b_K_Hlt2Global_TOS);
   fChain->SetBranchAddress("K_Hlt2Phys_Dec", &K_Hlt2Phys_Dec, &b_K_Hlt2Phys_Dec);
   fChain->SetBranchAddress("K_Hlt2Phys_TIS", &K_Hlt2Phys_TIS, &b_K_Hlt2Phys_TIS);
   fChain->SetBranchAddress("K_Hlt2Phys_TOS", &K_Hlt2Phys_TOS, &b_K_Hlt2Phys_TOS);
   fChain->SetBranchAddress("K_TRACK_Type", &K_TRACK_Type, &b_K_TRACK_Type);
   fChain->SetBranchAddress("K_TRACK_Key", &K_TRACK_Key, &b_K_TRACK_Key);
   fChain->SetBranchAddress("K_TRACK_CHI2NDOF", &K_TRACK_CHI2NDOF, &b_K_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("K_TRACK_PCHI2", &K_TRACK_PCHI2, &b_K_TRACK_PCHI2);
   fChain->SetBranchAddress("K_TRACK_MatchCHI2", &K_TRACK_MatchCHI2, &b_K_TRACK_MatchCHI2);
   fChain->SetBranchAddress("K_TRACK_GhostProb", &K_TRACK_GhostProb, &b_K_TRACK_GhostProb);
   fChain->SetBranchAddress("K_TRACK_CloneDist", &K_TRACK_CloneDist, &b_K_TRACK_CloneDist);
   fChain->SetBranchAddress("K_TRACK_Likelihood", &K_TRACK_Likelihood, &b_K_TRACK_Likelihood);
   fChain->SetBranchAddress("K_X", &K_X, &b_K_X);
   fChain->SetBranchAddress("K_Y", &K_Y, &b_K_Y);
   fChain->SetBranchAddress("K_ETA", &K_ETA, &b_K_ETA);
   fChain->SetBranchAddress("K_PHI", &K_PHI, &b_K_PHI);
   fChain->SetBranchAddress("pi1_MC12TuneV2_ProbNNe", &pi1_MC12TuneV2_ProbNNe, &b_pi1_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("pi1_MC12TuneV2_ProbNNmu", &pi1_MC12TuneV2_ProbNNmu, &b_pi1_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("pi1_MC12TuneV2_ProbNNpi", &pi1_MC12TuneV2_ProbNNpi, &b_pi1_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("pi1_MC12TuneV2_ProbNNk", &pi1_MC12TuneV2_ProbNNk, &b_pi1_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("pi1_MC12TuneV2_ProbNNp", &pi1_MC12TuneV2_ProbNNp, &b_pi1_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("pi1_MC12TuneV2_ProbNNghost", &pi1_MC12TuneV2_ProbNNghost, &b_pi1_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("pi1_MC12TuneV3_ProbNNe", &pi1_MC12TuneV3_ProbNNe, &b_pi1_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("pi1_MC12TuneV3_ProbNNmu", &pi1_MC12TuneV3_ProbNNmu, &b_pi1_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("pi1_MC12TuneV3_ProbNNpi", &pi1_MC12TuneV3_ProbNNpi, &b_pi1_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("pi1_MC12TuneV3_ProbNNk", &pi1_MC12TuneV3_ProbNNk, &b_pi1_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("pi1_MC12TuneV3_ProbNNp", &pi1_MC12TuneV3_ProbNNp, &b_pi1_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("pi1_MC12TuneV3_ProbNNghost", &pi1_MC12TuneV3_ProbNNghost, &b_pi1_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("pi1_MC12TuneV4_ProbNNe", &pi1_MC12TuneV4_ProbNNe, &b_pi1_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("pi1_MC12TuneV4_ProbNNmu", &pi1_MC12TuneV4_ProbNNmu, &b_pi1_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("pi1_MC12TuneV4_ProbNNpi", &pi1_MC12TuneV4_ProbNNpi, &b_pi1_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("pi1_MC12TuneV4_ProbNNk", &pi1_MC12TuneV4_ProbNNk, &b_pi1_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("pi1_MC12TuneV4_ProbNNp", &pi1_MC12TuneV4_ProbNNp, &b_pi1_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("pi1_MC12TuneV4_ProbNNghost", &pi1_MC12TuneV4_ProbNNghost, &b_pi1_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("pi1_MC15TuneV1_ProbNNe", &pi1_MC15TuneV1_ProbNNe, &b_pi1_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("pi1_MC15TuneV1_ProbNNmu", &pi1_MC15TuneV1_ProbNNmu, &b_pi1_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("pi1_MC15TuneV1_ProbNNpi", &pi1_MC15TuneV1_ProbNNpi, &b_pi1_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("pi1_MC15TuneV1_ProbNNk", &pi1_MC15TuneV1_ProbNNk, &b_pi1_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("pi1_MC15TuneV1_ProbNNp", &pi1_MC15TuneV1_ProbNNp, &b_pi1_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("pi1_MC15TuneV1_ProbNNghost", &pi1_MC15TuneV1_ProbNNghost, &b_pi1_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("pi1_CosTheta", &pi1_CosTheta, &b_pi1_CosTheta);
   fChain->SetBranchAddress("pi1_OWNPV_X", &pi1_OWNPV_X, &b_pi1_OWNPV_X);
   fChain->SetBranchAddress("pi1_OWNPV_Y", &pi1_OWNPV_Y, &b_pi1_OWNPV_Y);
   fChain->SetBranchAddress("pi1_OWNPV_Z", &pi1_OWNPV_Z, &b_pi1_OWNPV_Z);
   fChain->SetBranchAddress("pi1_OWNPV_XERR", &pi1_OWNPV_XERR, &b_pi1_OWNPV_XERR);
   fChain->SetBranchAddress("pi1_OWNPV_YERR", &pi1_OWNPV_YERR, &b_pi1_OWNPV_YERR);
   fChain->SetBranchAddress("pi1_OWNPV_ZERR", &pi1_OWNPV_ZERR, &b_pi1_OWNPV_ZERR);
   fChain->SetBranchAddress("pi1_OWNPV_CHI2", &pi1_OWNPV_CHI2, &b_pi1_OWNPV_CHI2);
   fChain->SetBranchAddress("pi1_OWNPV_NDOF", &pi1_OWNPV_NDOF, &b_pi1_OWNPV_NDOF);
   fChain->SetBranchAddress("pi1_OWNPV_COV_", pi1_OWNPV_COV_, &b_pi1_OWNPV_COV_);
   fChain->SetBranchAddress("pi1_IP_OWNPV", &pi1_IP_OWNPV, &b_pi1_IP_OWNPV);
   fChain->SetBranchAddress("pi1_IPCHI2_OWNPV", &pi1_IPCHI2_OWNPV, &b_pi1_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pi1_ORIVX_X", &pi1_ORIVX_X, &b_pi1_ORIVX_X);
   fChain->SetBranchAddress("pi1_ORIVX_Y", &pi1_ORIVX_Y, &b_pi1_ORIVX_Y);
   fChain->SetBranchAddress("pi1_ORIVX_Z", &pi1_ORIVX_Z, &b_pi1_ORIVX_Z);
   fChain->SetBranchAddress("pi1_ORIVX_XERR", &pi1_ORIVX_XERR, &b_pi1_ORIVX_XERR);
   fChain->SetBranchAddress("pi1_ORIVX_YERR", &pi1_ORIVX_YERR, &b_pi1_ORIVX_YERR);
   fChain->SetBranchAddress("pi1_ORIVX_ZERR", &pi1_ORIVX_ZERR, &b_pi1_ORIVX_ZERR);
   fChain->SetBranchAddress("pi1_ORIVX_CHI2", &pi1_ORIVX_CHI2, &b_pi1_ORIVX_CHI2);
   fChain->SetBranchAddress("pi1_ORIVX_NDOF", &pi1_ORIVX_NDOF, &b_pi1_ORIVX_NDOF);
   fChain->SetBranchAddress("pi1_ORIVX_COV_", pi1_ORIVX_COV_, &b_pi1_ORIVX_COV_);
   fChain->SetBranchAddress("pi1_P", &pi1_P, &b_pi1_P);
   fChain->SetBranchAddress("pi1_PT", &pi1_PT, &b_pi1_PT);
   fChain->SetBranchAddress("pi1_PE", &pi1_PE, &b_pi1_PE);
   fChain->SetBranchAddress("pi1_PX", &pi1_PX, &b_pi1_PX);
   fChain->SetBranchAddress("pi1_PY", &pi1_PY, &b_pi1_PY);
   fChain->SetBranchAddress("pi1_PZ", &pi1_PZ, &b_pi1_PZ);
   fChain->SetBranchAddress("pi1_M", &pi1_M, &b_pi1_M);
   fChain->SetBranchAddress("pi1_TRUEID", &pi1_TRUEID, &b_pi1_TRUEID);
   fChain->SetBranchAddress("pi1_TRUECosTheta", &pi1_TRUECosTheta, &b_pi1_TRUECosTheta);
   fChain->SetBranchAddress("pi1_MCP_numPseudoTypes", &pi1_MCP_numPseudoTypes, &b_pi1_MCP_numPseudoTypes);
   fChain->SetBranchAddress("pi1_MCP_MCP_PseudoLen", &pi1_MCP_MCP_PseudoLen, &b_pi1_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("pi1_MCP_PseudoTypes", &pi1_MCP_PseudoTypes, &b_pi1_MCP_PseudoTypes);
   fChain->SetBranchAddress("pi1_MC_MOTHER_ID", &pi1_MC_MOTHER_ID, &b_pi1_MC_MOTHER_ID);
   fChain->SetBranchAddress("pi1_MC_MOTHER_KEY", &pi1_MC_MOTHER_KEY, &b_pi1_MC_MOTHER_KEY);
   fChain->SetBranchAddress("pi1_MC_GD_MOTHER_ID", &pi1_MC_GD_MOTHER_ID, &b_pi1_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("pi1_MC_GD_MOTHER_KEY", &pi1_MC_GD_MOTHER_KEY, &b_pi1_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pi1_MC_GD_GD_MOTHER_ID", &pi1_MC_GD_GD_MOTHER_ID, &b_pi1_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("pi1_MC_GD_GD_MOTHER_KEY", &pi1_MC_GD_GD_MOTHER_KEY, &b_pi1_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pi1_TRUEP_E", &pi1_TRUEP_E, &b_pi1_TRUEP_E);
   fChain->SetBranchAddress("pi1_TRUEP_X", &pi1_TRUEP_X, &b_pi1_TRUEP_X);
   fChain->SetBranchAddress("pi1_TRUEP_Y", &pi1_TRUEP_Y, &b_pi1_TRUEP_Y);
   fChain->SetBranchAddress("pi1_TRUEP_Z", &pi1_TRUEP_Z, &b_pi1_TRUEP_Z);
   fChain->SetBranchAddress("pi1_TRUEPT", &pi1_TRUEPT, &b_pi1_TRUEPT);
   fChain->SetBranchAddress("pi1_TRUEORIGINVERTEX_X", &pi1_TRUEORIGINVERTEX_X, &b_pi1_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("pi1_TRUEORIGINVERTEX_Y", &pi1_TRUEORIGINVERTEX_Y, &b_pi1_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("pi1_TRUEORIGINVERTEX_Z", &pi1_TRUEORIGINVERTEX_Z, &b_pi1_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("pi1_TRUEENDVERTEX_X", &pi1_TRUEENDVERTEX_X, &b_pi1_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("pi1_TRUEENDVERTEX_Y", &pi1_TRUEENDVERTEX_Y, &b_pi1_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("pi1_TRUEENDVERTEX_Z", &pi1_TRUEENDVERTEX_Z, &b_pi1_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("pi1_TRUEISSTABLE", &pi1_TRUEISSTABLE, &b_pi1_TRUEISSTABLE);
   fChain->SetBranchAddress("pi1_TRUETAU", &pi1_TRUETAU, &b_pi1_TRUETAU);
   fChain->SetBranchAddress("pi1_ID", &pi1_ID, &b_pi1_ID);
   fChain->SetBranchAddress("pi1_MC_ISPROMPT", &pi1_MC_ISPROMPT, &b_pi1_MC_ISPROMPT);
   fChain->SetBranchAddress("pi1_MC_LONGLIVED_ID", &pi1_MC_LONGLIVED_ID, &b_pi1_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("pi1_MC_LONGLIVED_KEY", &pi1_MC_LONGLIVED_KEY, &b_pi1_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("pi1_Reconstructible", &pi1_Reconstructible, &b_pi1_Reconstructible);
   fChain->SetBranchAddress("pi1_Reconstructed", &pi1_Reconstructed, &b_pi1_Reconstructed);
   fChain->SetBranchAddress("pi1_ProtoParticles", &pi1_ProtoParticles, &b_pi1_ProtoParticles);
   fChain->SetBranchAddress("pi1_PP_PX", pi1_PP_PX, &b_pi1_PP_PX);
   fChain->SetBranchAddress("pi1_PP_PY", pi1_PP_PY, &b_pi1_PP_PY);
   fChain->SetBranchAddress("pi1_PP_PZ", pi1_PP_PZ, &b_pi1_PP_PZ);
   fChain->SetBranchAddress("pi1_PP_Weight", pi1_PP_Weight, &b_pi1_PP_Weight);
   fChain->SetBranchAddress("pi1_PP_tr_pchi2", pi1_PP_tr_pchi2, &b_pi1_PP_tr_pchi2);
   fChain->SetBranchAddress("pi1_PP_DLLe", pi1_PP_DLLe, &b_pi1_PP_DLLe);
   fChain->SetBranchAddress("pi1_PP_DLLk", pi1_PP_DLLk, &b_pi1_PP_DLLk);
   fChain->SetBranchAddress("pi1_PP_DLLp", pi1_PP_DLLp, &b_pi1_PP_DLLp);
   fChain->SetBranchAddress("pi1_PP_DLLmu", pi1_PP_DLLmu, &b_pi1_PP_DLLmu);
   fChain->SetBranchAddress("pi1_PIDe", &pi1_PIDe, &b_pi1_PIDe);
   fChain->SetBranchAddress("pi1_PIDmu", &pi1_PIDmu, &b_pi1_PIDmu);
   fChain->SetBranchAddress("pi1_PIDK", &pi1_PIDK, &b_pi1_PIDK);
   fChain->SetBranchAddress("pi1_PIDp", &pi1_PIDp, &b_pi1_PIDp);
   fChain->SetBranchAddress("pi1_PIDd", &pi1_PIDd, &b_pi1_PIDd);
   fChain->SetBranchAddress("pi1_ProbNNe", &pi1_ProbNNe, &b_pi1_ProbNNe);
   fChain->SetBranchAddress("pi1_ProbNNk", &pi1_ProbNNk, &b_pi1_ProbNNk);
   fChain->SetBranchAddress("pi1_ProbNNp", &pi1_ProbNNp, &b_pi1_ProbNNp);
   fChain->SetBranchAddress("pi1_ProbNNpi", &pi1_ProbNNpi, &b_pi1_ProbNNpi);
   fChain->SetBranchAddress("pi1_ProbNNmu", &pi1_ProbNNmu, &b_pi1_ProbNNmu);
   fChain->SetBranchAddress("pi1_ProbNNd", &pi1_ProbNNd, &b_pi1_ProbNNd);
   fChain->SetBranchAddress("pi1_ProbNNghost", &pi1_ProbNNghost, &b_pi1_ProbNNghost);
   fChain->SetBranchAddress("pi1_hasMuon", &pi1_hasMuon, &b_pi1_hasMuon);
   fChain->SetBranchAddress("pi1_isMuon", &pi1_isMuon, &b_pi1_isMuon);
   fChain->SetBranchAddress("pi1_hasRich", &pi1_hasRich, &b_pi1_hasRich);
   fChain->SetBranchAddress("pi1_UsedRichAerogel", &pi1_UsedRichAerogel, &b_pi1_UsedRichAerogel);
   fChain->SetBranchAddress("pi1_UsedRich1Gas", &pi1_UsedRich1Gas, &b_pi1_UsedRich1Gas);
   fChain->SetBranchAddress("pi1_UsedRich2Gas", &pi1_UsedRich2Gas, &b_pi1_UsedRich2Gas);
   fChain->SetBranchAddress("pi1_RichAboveElThres", &pi1_RichAboveElThres, &b_pi1_RichAboveElThres);
   fChain->SetBranchAddress("pi1_RichAboveMuThres", &pi1_RichAboveMuThres, &b_pi1_RichAboveMuThres);
   fChain->SetBranchAddress("pi1_RichAbovePiThres", &pi1_RichAbovePiThres, &b_pi1_RichAbovePiThres);
   fChain->SetBranchAddress("pi1_RichAboveKaThres", &pi1_RichAboveKaThres, &b_pi1_RichAboveKaThres);
   fChain->SetBranchAddress("pi1_RichAbovePrThres", &pi1_RichAbovePrThres, &b_pi1_RichAbovePrThres);
   fChain->SetBranchAddress("pi1_hasCalo", &pi1_hasCalo, &b_pi1_hasCalo);
   fChain->SetBranchAddress("pi1_L0Global_Dec", &pi1_L0Global_Dec, &b_pi1_L0Global_Dec);
   fChain->SetBranchAddress("pi1_L0Global_TIS", &pi1_L0Global_TIS, &b_pi1_L0Global_TIS);
   fChain->SetBranchAddress("pi1_L0Global_TOS", &pi1_L0Global_TOS, &b_pi1_L0Global_TOS);
   fChain->SetBranchAddress("pi1_Hlt1Global_Dec", &pi1_Hlt1Global_Dec, &b_pi1_Hlt1Global_Dec);
   fChain->SetBranchAddress("pi1_Hlt1Global_TIS", &pi1_Hlt1Global_TIS, &b_pi1_Hlt1Global_TIS);
   fChain->SetBranchAddress("pi1_Hlt1Global_TOS", &pi1_Hlt1Global_TOS, &b_pi1_Hlt1Global_TOS);
   fChain->SetBranchAddress("pi1_Hlt1Phys_Dec", &pi1_Hlt1Phys_Dec, &b_pi1_Hlt1Phys_Dec);
   fChain->SetBranchAddress("pi1_Hlt1Phys_TIS", &pi1_Hlt1Phys_TIS, &b_pi1_Hlt1Phys_TIS);
   fChain->SetBranchAddress("pi1_Hlt1Phys_TOS", &pi1_Hlt1Phys_TOS, &b_pi1_Hlt1Phys_TOS);
   fChain->SetBranchAddress("pi1_Hlt2Global_Dec", &pi1_Hlt2Global_Dec, &b_pi1_Hlt2Global_Dec);
   fChain->SetBranchAddress("pi1_Hlt2Global_TIS", &pi1_Hlt2Global_TIS, &b_pi1_Hlt2Global_TIS);
   fChain->SetBranchAddress("pi1_Hlt2Global_TOS", &pi1_Hlt2Global_TOS, &b_pi1_Hlt2Global_TOS);
   fChain->SetBranchAddress("pi1_Hlt2Phys_Dec", &pi1_Hlt2Phys_Dec, &b_pi1_Hlt2Phys_Dec);
   fChain->SetBranchAddress("pi1_Hlt2Phys_TIS", &pi1_Hlt2Phys_TIS, &b_pi1_Hlt2Phys_TIS);
   fChain->SetBranchAddress("pi1_Hlt2Phys_TOS", &pi1_Hlt2Phys_TOS, &b_pi1_Hlt2Phys_TOS);
   fChain->SetBranchAddress("pi1_TRACK_Type", &pi1_TRACK_Type, &b_pi1_TRACK_Type);
   fChain->SetBranchAddress("pi1_TRACK_Key", &pi1_TRACK_Key, &b_pi1_TRACK_Key);
   fChain->SetBranchAddress("pi1_TRACK_CHI2NDOF", &pi1_TRACK_CHI2NDOF, &b_pi1_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pi1_TRACK_PCHI2", &pi1_TRACK_PCHI2, &b_pi1_TRACK_PCHI2);
   fChain->SetBranchAddress("pi1_TRACK_MatchCHI2", &pi1_TRACK_MatchCHI2, &b_pi1_TRACK_MatchCHI2);
   fChain->SetBranchAddress("pi1_TRACK_GhostProb", &pi1_TRACK_GhostProb, &b_pi1_TRACK_GhostProb);
   fChain->SetBranchAddress("pi1_TRACK_CloneDist", &pi1_TRACK_CloneDist, &b_pi1_TRACK_CloneDist);
   fChain->SetBranchAddress("pi1_TRACK_Likelihood", &pi1_TRACK_Likelihood, &b_pi1_TRACK_Likelihood);
   fChain->SetBranchAddress("pi1_X", &pi1_X, &b_pi1_X);
   fChain->SetBranchAddress("pi1_Y", &pi1_Y, &b_pi1_Y);
   fChain->SetBranchAddress("pi1_ETA", &pi1_ETA, &b_pi1_ETA);
   fChain->SetBranchAddress("pi1_PHI", &pi1_PHI, &b_pi1_PHI);
   fChain->SetBranchAddress("pi2_MC12TuneV2_ProbNNe", &pi2_MC12TuneV2_ProbNNe, &b_pi2_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("pi2_MC12TuneV2_ProbNNmu", &pi2_MC12TuneV2_ProbNNmu, &b_pi2_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("pi2_MC12TuneV2_ProbNNpi", &pi2_MC12TuneV2_ProbNNpi, &b_pi2_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("pi2_MC12TuneV2_ProbNNk", &pi2_MC12TuneV2_ProbNNk, &b_pi2_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("pi2_MC12TuneV2_ProbNNp", &pi2_MC12TuneV2_ProbNNp, &b_pi2_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("pi2_MC12TuneV2_ProbNNghost", &pi2_MC12TuneV2_ProbNNghost, &b_pi2_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("pi2_MC12TuneV3_ProbNNe", &pi2_MC12TuneV3_ProbNNe, &b_pi2_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("pi2_MC12TuneV3_ProbNNmu", &pi2_MC12TuneV3_ProbNNmu, &b_pi2_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("pi2_MC12TuneV3_ProbNNpi", &pi2_MC12TuneV3_ProbNNpi, &b_pi2_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("pi2_MC12TuneV3_ProbNNk", &pi2_MC12TuneV3_ProbNNk, &b_pi2_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("pi2_MC12TuneV3_ProbNNp", &pi2_MC12TuneV3_ProbNNp, &b_pi2_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("pi2_MC12TuneV3_ProbNNghost", &pi2_MC12TuneV3_ProbNNghost, &b_pi2_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("pi2_MC12TuneV4_ProbNNe", &pi2_MC12TuneV4_ProbNNe, &b_pi2_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("pi2_MC12TuneV4_ProbNNmu", &pi2_MC12TuneV4_ProbNNmu, &b_pi2_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("pi2_MC12TuneV4_ProbNNpi", &pi2_MC12TuneV4_ProbNNpi, &b_pi2_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("pi2_MC12TuneV4_ProbNNk", &pi2_MC12TuneV4_ProbNNk, &b_pi2_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("pi2_MC12TuneV4_ProbNNp", &pi2_MC12TuneV4_ProbNNp, &b_pi2_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("pi2_MC12TuneV4_ProbNNghost", &pi2_MC12TuneV4_ProbNNghost, &b_pi2_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("pi2_MC15TuneV1_ProbNNe", &pi2_MC15TuneV1_ProbNNe, &b_pi2_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("pi2_MC15TuneV1_ProbNNmu", &pi2_MC15TuneV1_ProbNNmu, &b_pi2_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("pi2_MC15TuneV1_ProbNNpi", &pi2_MC15TuneV1_ProbNNpi, &b_pi2_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("pi2_MC15TuneV1_ProbNNk", &pi2_MC15TuneV1_ProbNNk, &b_pi2_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("pi2_MC15TuneV1_ProbNNp", &pi2_MC15TuneV1_ProbNNp, &b_pi2_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("pi2_MC15TuneV1_ProbNNghost", &pi2_MC15TuneV1_ProbNNghost, &b_pi2_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("pi2_CosTheta", &pi2_CosTheta, &b_pi2_CosTheta);
   fChain->SetBranchAddress("pi2_OWNPV_X", &pi2_OWNPV_X, &b_pi2_OWNPV_X);
   fChain->SetBranchAddress("pi2_OWNPV_Y", &pi2_OWNPV_Y, &b_pi2_OWNPV_Y);
   fChain->SetBranchAddress("pi2_OWNPV_Z", &pi2_OWNPV_Z, &b_pi2_OWNPV_Z);
   fChain->SetBranchAddress("pi2_OWNPV_XERR", &pi2_OWNPV_XERR, &b_pi2_OWNPV_XERR);
   fChain->SetBranchAddress("pi2_OWNPV_YERR", &pi2_OWNPV_YERR, &b_pi2_OWNPV_YERR);
   fChain->SetBranchAddress("pi2_OWNPV_ZERR", &pi2_OWNPV_ZERR, &b_pi2_OWNPV_ZERR);
   fChain->SetBranchAddress("pi2_OWNPV_CHI2", &pi2_OWNPV_CHI2, &b_pi2_OWNPV_CHI2);
   fChain->SetBranchAddress("pi2_OWNPV_NDOF", &pi2_OWNPV_NDOF, &b_pi2_OWNPV_NDOF);
   fChain->SetBranchAddress("pi2_OWNPV_COV_", pi2_OWNPV_COV_, &b_pi2_OWNPV_COV_);
   fChain->SetBranchAddress("pi2_IP_OWNPV", &pi2_IP_OWNPV, &b_pi2_IP_OWNPV);
   fChain->SetBranchAddress("pi2_IPCHI2_OWNPV", &pi2_IPCHI2_OWNPV, &b_pi2_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pi2_ORIVX_X", &pi2_ORIVX_X, &b_pi2_ORIVX_X);
   fChain->SetBranchAddress("pi2_ORIVX_Y", &pi2_ORIVX_Y, &b_pi2_ORIVX_Y);
   fChain->SetBranchAddress("pi2_ORIVX_Z", &pi2_ORIVX_Z, &b_pi2_ORIVX_Z);
   fChain->SetBranchAddress("pi2_ORIVX_XERR", &pi2_ORIVX_XERR, &b_pi2_ORIVX_XERR);
   fChain->SetBranchAddress("pi2_ORIVX_YERR", &pi2_ORIVX_YERR, &b_pi2_ORIVX_YERR);
   fChain->SetBranchAddress("pi2_ORIVX_ZERR", &pi2_ORIVX_ZERR, &b_pi2_ORIVX_ZERR);
   fChain->SetBranchAddress("pi2_ORIVX_CHI2", &pi2_ORIVX_CHI2, &b_pi2_ORIVX_CHI2);
   fChain->SetBranchAddress("pi2_ORIVX_NDOF", &pi2_ORIVX_NDOF, &b_pi2_ORIVX_NDOF);
   fChain->SetBranchAddress("pi2_ORIVX_COV_", pi2_ORIVX_COV_, &b_pi2_ORIVX_COV_);
   fChain->SetBranchAddress("pi2_P", &pi2_P, &b_pi2_P);
   fChain->SetBranchAddress("pi2_PT", &pi2_PT, &b_pi2_PT);
   fChain->SetBranchAddress("pi2_PE", &pi2_PE, &b_pi2_PE);
   fChain->SetBranchAddress("pi2_PX", &pi2_PX, &b_pi2_PX);
   fChain->SetBranchAddress("pi2_PY", &pi2_PY, &b_pi2_PY);
   fChain->SetBranchAddress("pi2_PZ", &pi2_PZ, &b_pi2_PZ);
   fChain->SetBranchAddress("pi2_M", &pi2_M, &b_pi2_M);
   fChain->SetBranchAddress("pi2_TRUEID", &pi2_TRUEID, &b_pi2_TRUEID);
   fChain->SetBranchAddress("pi2_TRUECosTheta", &pi2_TRUECosTheta, &b_pi2_TRUECosTheta);
   fChain->SetBranchAddress("pi2_MCP_numPseudoTypes", &pi2_MCP_numPseudoTypes, &b_pi2_MCP_numPseudoTypes);
   fChain->SetBranchAddress("pi2_MCP_MCP_PseudoLen", &pi2_MCP_MCP_PseudoLen, &b_pi2_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("pi2_MCP_PseudoTypes", &pi2_MCP_PseudoTypes, &b_pi2_MCP_PseudoTypes);
   fChain->SetBranchAddress("pi2_MC_MOTHER_ID", &pi2_MC_MOTHER_ID, &b_pi2_MC_MOTHER_ID);
   fChain->SetBranchAddress("pi2_MC_MOTHER_KEY", &pi2_MC_MOTHER_KEY, &b_pi2_MC_MOTHER_KEY);
   fChain->SetBranchAddress("pi2_MC_GD_MOTHER_ID", &pi2_MC_GD_MOTHER_ID, &b_pi2_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("pi2_MC_GD_MOTHER_KEY", &pi2_MC_GD_MOTHER_KEY, &b_pi2_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pi2_MC_GD_GD_MOTHER_ID", &pi2_MC_GD_GD_MOTHER_ID, &b_pi2_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("pi2_MC_GD_GD_MOTHER_KEY", &pi2_MC_GD_GD_MOTHER_KEY, &b_pi2_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pi2_TRUEP_E", &pi2_TRUEP_E, &b_pi2_TRUEP_E);
   fChain->SetBranchAddress("pi2_TRUEP_X", &pi2_TRUEP_X, &b_pi2_TRUEP_X);
   fChain->SetBranchAddress("pi2_TRUEP_Y", &pi2_TRUEP_Y, &b_pi2_TRUEP_Y);
   fChain->SetBranchAddress("pi2_TRUEP_Z", &pi2_TRUEP_Z, &b_pi2_TRUEP_Z);
   fChain->SetBranchAddress("pi2_TRUEPT", &pi2_TRUEPT, &b_pi2_TRUEPT);
   fChain->SetBranchAddress("pi2_TRUEORIGINVERTEX_X", &pi2_TRUEORIGINVERTEX_X, &b_pi2_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("pi2_TRUEORIGINVERTEX_Y", &pi2_TRUEORIGINVERTEX_Y, &b_pi2_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("pi2_TRUEORIGINVERTEX_Z", &pi2_TRUEORIGINVERTEX_Z, &b_pi2_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("pi2_TRUEENDVERTEX_X", &pi2_TRUEENDVERTEX_X, &b_pi2_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("pi2_TRUEENDVERTEX_Y", &pi2_TRUEENDVERTEX_Y, &b_pi2_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("pi2_TRUEENDVERTEX_Z", &pi2_TRUEENDVERTEX_Z, &b_pi2_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("pi2_TRUEISSTABLE", &pi2_TRUEISSTABLE, &b_pi2_TRUEISSTABLE);
   fChain->SetBranchAddress("pi2_TRUETAU", &pi2_TRUETAU, &b_pi2_TRUETAU);
   fChain->SetBranchAddress("pi2_ID", &pi2_ID, &b_pi2_ID);
   fChain->SetBranchAddress("pi2_MC_ISPROMPT", &pi2_MC_ISPROMPT, &b_pi2_MC_ISPROMPT);
   fChain->SetBranchAddress("pi2_MC_LONGLIVED_ID", &pi2_MC_LONGLIVED_ID, &b_pi2_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("pi2_MC_LONGLIVED_KEY", &pi2_MC_LONGLIVED_KEY, &b_pi2_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("pi2_Reconstructible", &pi2_Reconstructible, &b_pi2_Reconstructible);
   fChain->SetBranchAddress("pi2_Reconstructed", &pi2_Reconstructed, &b_pi2_Reconstructed);
   fChain->SetBranchAddress("pi2_ProtoParticles", &pi2_ProtoParticles, &b_pi2_ProtoParticles);
   fChain->SetBranchAddress("pi2_PP_PX", pi2_PP_PX, &b_pi2_PP_PX);
   fChain->SetBranchAddress("pi2_PP_PY", pi2_PP_PY, &b_pi2_PP_PY);
   fChain->SetBranchAddress("pi2_PP_PZ", pi2_PP_PZ, &b_pi2_PP_PZ);
   fChain->SetBranchAddress("pi2_PP_Weight", pi2_PP_Weight, &b_pi2_PP_Weight);
   fChain->SetBranchAddress("pi2_PP_tr_pchi2", pi2_PP_tr_pchi2, &b_pi2_PP_tr_pchi2);
   fChain->SetBranchAddress("pi2_PP_DLLe", pi2_PP_DLLe, &b_pi2_PP_DLLe);
   fChain->SetBranchAddress("pi2_PP_DLLk", pi2_PP_DLLk, &b_pi2_PP_DLLk);
   fChain->SetBranchAddress("pi2_PP_DLLp", pi2_PP_DLLp, &b_pi2_PP_DLLp);
   fChain->SetBranchAddress("pi2_PP_DLLmu", pi2_PP_DLLmu, &b_pi2_PP_DLLmu);
   fChain->SetBranchAddress("pi2_PIDe", &pi2_PIDe, &b_pi2_PIDe);
   fChain->SetBranchAddress("pi2_PIDmu", &pi2_PIDmu, &b_pi2_PIDmu);
   fChain->SetBranchAddress("pi2_PIDK", &pi2_PIDK, &b_pi2_PIDK);
   fChain->SetBranchAddress("pi2_PIDp", &pi2_PIDp, &b_pi2_PIDp);
   fChain->SetBranchAddress("pi2_PIDd", &pi2_PIDd, &b_pi2_PIDd);
   fChain->SetBranchAddress("pi2_ProbNNe", &pi2_ProbNNe, &b_pi2_ProbNNe);
   fChain->SetBranchAddress("pi2_ProbNNk", &pi2_ProbNNk, &b_pi2_ProbNNk);
   fChain->SetBranchAddress("pi2_ProbNNp", &pi2_ProbNNp, &b_pi2_ProbNNp);
   fChain->SetBranchAddress("pi2_ProbNNpi", &pi2_ProbNNpi, &b_pi2_ProbNNpi);
   fChain->SetBranchAddress("pi2_ProbNNmu", &pi2_ProbNNmu, &b_pi2_ProbNNmu);
   fChain->SetBranchAddress("pi2_ProbNNd", &pi2_ProbNNd, &b_pi2_ProbNNd);
   fChain->SetBranchAddress("pi2_ProbNNghost", &pi2_ProbNNghost, &b_pi2_ProbNNghost);
   fChain->SetBranchAddress("pi2_hasMuon", &pi2_hasMuon, &b_pi2_hasMuon);
   fChain->SetBranchAddress("pi2_isMuon", &pi2_isMuon, &b_pi2_isMuon);
   fChain->SetBranchAddress("pi2_hasRich", &pi2_hasRich, &b_pi2_hasRich);
   fChain->SetBranchAddress("pi2_UsedRichAerogel", &pi2_UsedRichAerogel, &b_pi2_UsedRichAerogel);
   fChain->SetBranchAddress("pi2_UsedRich1Gas", &pi2_UsedRich1Gas, &b_pi2_UsedRich1Gas);
   fChain->SetBranchAddress("pi2_UsedRich2Gas", &pi2_UsedRich2Gas, &b_pi2_UsedRich2Gas);
   fChain->SetBranchAddress("pi2_RichAboveElThres", &pi2_RichAboveElThres, &b_pi2_RichAboveElThres);
   fChain->SetBranchAddress("pi2_RichAboveMuThres", &pi2_RichAboveMuThres, &b_pi2_RichAboveMuThres);
   fChain->SetBranchAddress("pi2_RichAbovePiThres", &pi2_RichAbovePiThres, &b_pi2_RichAbovePiThres);
   fChain->SetBranchAddress("pi2_RichAboveKaThres", &pi2_RichAboveKaThres, &b_pi2_RichAboveKaThres);
   fChain->SetBranchAddress("pi2_RichAbovePrThres", &pi2_RichAbovePrThres, &b_pi2_RichAbovePrThres);
   fChain->SetBranchAddress("pi2_hasCalo", &pi2_hasCalo, &b_pi2_hasCalo);
   fChain->SetBranchAddress("pi2_L0Global_Dec", &pi2_L0Global_Dec, &b_pi2_L0Global_Dec);
   fChain->SetBranchAddress("pi2_L0Global_TIS", &pi2_L0Global_TIS, &b_pi2_L0Global_TIS);
   fChain->SetBranchAddress("pi2_L0Global_TOS", &pi2_L0Global_TOS, &b_pi2_L0Global_TOS);
   fChain->SetBranchAddress("pi2_Hlt1Global_Dec", &pi2_Hlt1Global_Dec, &b_pi2_Hlt1Global_Dec);
   fChain->SetBranchAddress("pi2_Hlt1Global_TIS", &pi2_Hlt1Global_TIS, &b_pi2_Hlt1Global_TIS);
   fChain->SetBranchAddress("pi2_Hlt1Global_TOS", &pi2_Hlt1Global_TOS, &b_pi2_Hlt1Global_TOS);
   fChain->SetBranchAddress("pi2_Hlt1Phys_Dec", &pi2_Hlt1Phys_Dec, &b_pi2_Hlt1Phys_Dec);
   fChain->SetBranchAddress("pi2_Hlt1Phys_TIS", &pi2_Hlt1Phys_TIS, &b_pi2_Hlt1Phys_TIS);
   fChain->SetBranchAddress("pi2_Hlt1Phys_TOS", &pi2_Hlt1Phys_TOS, &b_pi2_Hlt1Phys_TOS);
   fChain->SetBranchAddress("pi2_Hlt2Global_Dec", &pi2_Hlt2Global_Dec, &b_pi2_Hlt2Global_Dec);
   fChain->SetBranchAddress("pi2_Hlt2Global_TIS", &pi2_Hlt2Global_TIS, &b_pi2_Hlt2Global_TIS);
   fChain->SetBranchAddress("pi2_Hlt2Global_TOS", &pi2_Hlt2Global_TOS, &b_pi2_Hlt2Global_TOS);
   fChain->SetBranchAddress("pi2_Hlt2Phys_Dec", &pi2_Hlt2Phys_Dec, &b_pi2_Hlt2Phys_Dec);
   fChain->SetBranchAddress("pi2_Hlt2Phys_TIS", &pi2_Hlt2Phys_TIS, &b_pi2_Hlt2Phys_TIS);
   fChain->SetBranchAddress("pi2_Hlt2Phys_TOS", &pi2_Hlt2Phys_TOS, &b_pi2_Hlt2Phys_TOS);
   fChain->SetBranchAddress("pi2_TRACK_Type", &pi2_TRACK_Type, &b_pi2_TRACK_Type);
   fChain->SetBranchAddress("pi2_TRACK_Key", &pi2_TRACK_Key, &b_pi2_TRACK_Key);
   fChain->SetBranchAddress("pi2_TRACK_CHI2NDOF", &pi2_TRACK_CHI2NDOF, &b_pi2_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pi2_TRACK_PCHI2", &pi2_TRACK_PCHI2, &b_pi2_TRACK_PCHI2);
   fChain->SetBranchAddress("pi2_TRACK_MatchCHI2", &pi2_TRACK_MatchCHI2, &b_pi2_TRACK_MatchCHI2);
   fChain->SetBranchAddress("pi2_TRACK_GhostProb", &pi2_TRACK_GhostProb, &b_pi2_TRACK_GhostProb);
   fChain->SetBranchAddress("pi2_TRACK_CloneDist", &pi2_TRACK_CloneDist, &b_pi2_TRACK_CloneDist);
   fChain->SetBranchAddress("pi2_TRACK_Likelihood", &pi2_TRACK_Likelihood, &b_pi2_TRACK_Likelihood);
   fChain->SetBranchAddress("pi2_X", &pi2_X, &b_pi2_X);
   fChain->SetBranchAddress("pi2_Y", &pi2_Y, &b_pi2_Y);
   fChain->SetBranchAddress("pi2_ETA", &pi2_ETA, &b_pi2_ETA);
   fChain->SetBranchAddress("pi2_PHI", &pi2_PHI, &b_pi2_PHI);
   fChain->SetBranchAddress("a_CosTheta", &a_CosTheta, &b_a_CosTheta);
   fChain->SetBranchAddress("a_ENDVERTEX_X", &a_ENDVERTEX_X, &b_a_ENDVERTEX_X);
   fChain->SetBranchAddress("a_ENDVERTEX_Y", &a_ENDVERTEX_Y, &b_a_ENDVERTEX_Y);
   fChain->SetBranchAddress("a_ENDVERTEX_Z", &a_ENDVERTEX_Z, &b_a_ENDVERTEX_Z);
   fChain->SetBranchAddress("a_ENDVERTEX_XERR", &a_ENDVERTEX_XERR, &b_a_ENDVERTEX_XERR);
   fChain->SetBranchAddress("a_ENDVERTEX_YERR", &a_ENDVERTEX_YERR, &b_a_ENDVERTEX_YERR);
   fChain->SetBranchAddress("a_ENDVERTEX_ZERR", &a_ENDVERTEX_ZERR, &b_a_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("a_ENDVERTEX_CHI2", &a_ENDVERTEX_CHI2, &b_a_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("a_ENDVERTEX_NDOF", &a_ENDVERTEX_NDOF, &b_a_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("a_ENDVERTEX_COV_", a_ENDVERTEX_COV_, &b_a_ENDVERTEX_COV_);
   fChain->SetBranchAddress("a_OWNPV_X", &a_OWNPV_X, &b_a_OWNPV_X);
   fChain->SetBranchAddress("a_OWNPV_Y", &a_OWNPV_Y, &b_a_OWNPV_Y);
   fChain->SetBranchAddress("a_OWNPV_Z", &a_OWNPV_Z, &b_a_OWNPV_Z);
   fChain->SetBranchAddress("a_OWNPV_XERR", &a_OWNPV_XERR, &b_a_OWNPV_XERR);
   fChain->SetBranchAddress("a_OWNPV_YERR", &a_OWNPV_YERR, &b_a_OWNPV_YERR);
   fChain->SetBranchAddress("a_OWNPV_ZERR", &a_OWNPV_ZERR, &b_a_OWNPV_ZERR);
   fChain->SetBranchAddress("a_OWNPV_CHI2", &a_OWNPV_CHI2, &b_a_OWNPV_CHI2);
   fChain->SetBranchAddress("a_OWNPV_NDOF", &a_OWNPV_NDOF, &b_a_OWNPV_NDOF);
   fChain->SetBranchAddress("a_OWNPV_COV_", a_OWNPV_COV_, &b_a_OWNPV_COV_);
   fChain->SetBranchAddress("a_IP_OWNPV", &a_IP_OWNPV, &b_a_IP_OWNPV);
   fChain->SetBranchAddress("a_IPCHI2_OWNPV", &a_IPCHI2_OWNPV, &b_a_IPCHI2_OWNPV);
   fChain->SetBranchAddress("a_FD_OWNPV", &a_FD_OWNPV, &b_a_FD_OWNPV);
   fChain->SetBranchAddress("a_FDCHI2_OWNPV", &a_FDCHI2_OWNPV, &b_a_FDCHI2_OWNPV);
   fChain->SetBranchAddress("a_DIRA_OWNPV", &a_DIRA_OWNPV, &b_a_DIRA_OWNPV);
   fChain->SetBranchAddress("a_ORIVX_X", &a_ORIVX_X, &b_a_ORIVX_X);
   fChain->SetBranchAddress("a_ORIVX_Y", &a_ORIVX_Y, &b_a_ORIVX_Y);
   fChain->SetBranchAddress("a_ORIVX_Z", &a_ORIVX_Z, &b_a_ORIVX_Z);
   fChain->SetBranchAddress("a_ORIVX_XERR", &a_ORIVX_XERR, &b_a_ORIVX_XERR);
   fChain->SetBranchAddress("a_ORIVX_YERR", &a_ORIVX_YERR, &b_a_ORIVX_YERR);
   fChain->SetBranchAddress("a_ORIVX_ZERR", &a_ORIVX_ZERR, &b_a_ORIVX_ZERR);
   fChain->SetBranchAddress("a_ORIVX_CHI2", &a_ORIVX_CHI2, &b_a_ORIVX_CHI2);
   fChain->SetBranchAddress("a_ORIVX_NDOF", &a_ORIVX_NDOF, &b_a_ORIVX_NDOF);
   fChain->SetBranchAddress("a_ORIVX_COV_", a_ORIVX_COV_, &b_a_ORIVX_COV_);
   fChain->SetBranchAddress("a_FD_ORIVX", &a_FD_ORIVX, &b_a_FD_ORIVX);
   fChain->SetBranchAddress("a_FDCHI2_ORIVX", &a_FDCHI2_ORIVX, &b_a_FDCHI2_ORIVX);
   fChain->SetBranchAddress("a_DIRA_ORIVX", &a_DIRA_ORIVX, &b_a_DIRA_ORIVX);
   fChain->SetBranchAddress("a_P", &a_P, &b_a_P);
   fChain->SetBranchAddress("a_PT", &a_PT, &b_a_PT);
   fChain->SetBranchAddress("a_PE", &a_PE, &b_a_PE);
   fChain->SetBranchAddress("a_PX", &a_PX, &b_a_PX);
   fChain->SetBranchAddress("a_PY", &a_PY, &b_a_PY);
   fChain->SetBranchAddress("a_PZ", &a_PZ, &b_a_PZ);
   fChain->SetBranchAddress("a_MM", &a_MM, &b_a_MM);
   fChain->SetBranchAddress("a_MMERR", &a_MMERR, &b_a_MMERR);
   fChain->SetBranchAddress("a_M", &a_M, &b_a_M);
   fChain->SetBranchAddress("a_BKGCAT", &a_BKGCAT, &b_a_BKGCAT);
   fChain->SetBranchAddress("a_TRUEID", &a_TRUEID, &b_a_TRUEID);
   fChain->SetBranchAddress("a_TRUECosTheta", &a_TRUECosTheta, &b_a_TRUECosTheta);
   fChain->SetBranchAddress("a_MCP_numPseudoTypes", &a_MCP_numPseudoTypes, &b_a_MCP_numPseudoTypes);
   fChain->SetBranchAddress("a_MCP_MCP_PseudoLen", &a_MCP_MCP_PseudoLen, &b_a_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("a_MCP_PseudoTypes", a_MCP_PseudoTypes, &b_a_MCP_PseudoTypes);
   fChain->SetBranchAddress("a_MC_MOTHER_ID", &a_MC_MOTHER_ID, &b_a_MC_MOTHER_ID);
   fChain->SetBranchAddress("a_MC_MOTHER_KEY", &a_MC_MOTHER_KEY, &b_a_MC_MOTHER_KEY);
   fChain->SetBranchAddress("a_MC_GD_MOTHER_ID", &a_MC_GD_MOTHER_ID, &b_a_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("a_MC_GD_MOTHER_KEY", &a_MC_GD_MOTHER_KEY, &b_a_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("a_MC_GD_GD_MOTHER_ID", &a_MC_GD_GD_MOTHER_ID, &b_a_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("a_MC_GD_GD_MOTHER_KEY", &a_MC_GD_GD_MOTHER_KEY, &b_a_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("a_TRUEP_E", &a_TRUEP_E, &b_a_TRUEP_E);
   fChain->SetBranchAddress("a_TRUEP_X", &a_TRUEP_X, &b_a_TRUEP_X);
   fChain->SetBranchAddress("a_TRUEP_Y", &a_TRUEP_Y, &b_a_TRUEP_Y);
   fChain->SetBranchAddress("a_TRUEP_Z", &a_TRUEP_Z, &b_a_TRUEP_Z);
   fChain->SetBranchAddress("a_TRUEPT", &a_TRUEPT, &b_a_TRUEPT);
   fChain->SetBranchAddress("a_TRUEORIGINVERTEX_X", &a_TRUEORIGINVERTEX_X, &b_a_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("a_TRUEORIGINVERTEX_Y", &a_TRUEORIGINVERTEX_Y, &b_a_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("a_TRUEORIGINVERTEX_Z", &a_TRUEORIGINVERTEX_Z, &b_a_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("a_TRUEENDVERTEX_X", &a_TRUEENDVERTEX_X, &b_a_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("a_TRUEENDVERTEX_Y", &a_TRUEENDVERTEX_Y, &b_a_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("a_TRUEENDVERTEX_Z", &a_TRUEENDVERTEX_Z, &b_a_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("a_TRUEISSTABLE", &a_TRUEISSTABLE, &b_a_TRUEISSTABLE);
   fChain->SetBranchAddress("a_TRUETAU", &a_TRUETAU, &b_a_TRUETAU);
   fChain->SetBranchAddress("a_ID", &a_ID, &b_a_ID);
   fChain->SetBranchAddress("a_MC_ISPROMPT", &a_MC_ISPROMPT, &b_a_MC_ISPROMPT);
   fChain->SetBranchAddress("a_MC_LONGLIVED_ID", &a_MC_LONGLIVED_ID, &b_a_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("a_MC_LONGLIVED_KEY", &a_MC_LONGLIVED_KEY, &b_a_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("a_Reconstructible", &a_Reconstructible, &b_a_Reconstructible);
   fChain->SetBranchAddress("a_Reconstructed", &a_Reconstructed, &b_a_Reconstructed);
   fChain->SetBranchAddress("a_ProtoParticles", &a_ProtoParticles, &b_a_ProtoParticles);
   fChain->SetBranchAddress("a_PP_PX", &a_PP_PX, &b_a_PP_PX);
   fChain->SetBranchAddress("a_PP_PY", &a_PP_PY, &b_a_PP_PY);
   fChain->SetBranchAddress("a_PP_PZ", &a_PP_PZ, &b_a_PP_PZ);
   fChain->SetBranchAddress("a_PP_Weight", &a_PP_Weight, &b_a_PP_Weight);
   fChain->SetBranchAddress("a_PP_tr_pchi2", &a_PP_tr_pchi2, &b_a_PP_tr_pchi2);
   fChain->SetBranchAddress("a_PP_DLLe", &a_PP_DLLe, &b_a_PP_DLLe);
   fChain->SetBranchAddress("a_PP_DLLk", &a_PP_DLLk, &b_a_PP_DLLk);
   fChain->SetBranchAddress("a_PP_DLLp", &a_PP_DLLp, &b_a_PP_DLLp);
   fChain->SetBranchAddress("a_PP_DLLmu", &a_PP_DLLmu, &b_a_PP_DLLmu);
   fChain->SetBranchAddress("a_TAU", &a_TAU, &b_a_TAU);
   fChain->SetBranchAddress("a_TAUERR", &a_TAUERR, &b_a_TAUERR);
   fChain->SetBranchAddress("a_TAUCHI2", &a_TAUCHI2, &b_a_TAUCHI2);
   fChain->SetBranchAddress("a_L0Global_Dec", &a_L0Global_Dec, &b_a_L0Global_Dec);
   fChain->SetBranchAddress("a_L0Global_TIS", &a_L0Global_TIS, &b_a_L0Global_TIS);
   fChain->SetBranchAddress("a_L0Global_TOS", &a_L0Global_TOS, &b_a_L0Global_TOS);
   fChain->SetBranchAddress("a_Hlt1Global_Dec", &a_Hlt1Global_Dec, &b_a_Hlt1Global_Dec);
   fChain->SetBranchAddress("a_Hlt1Global_TIS", &a_Hlt1Global_TIS, &b_a_Hlt1Global_TIS);
   fChain->SetBranchAddress("a_Hlt1Global_TOS", &a_Hlt1Global_TOS, &b_a_Hlt1Global_TOS);
   fChain->SetBranchAddress("a_Hlt1Phys_Dec", &a_Hlt1Phys_Dec, &b_a_Hlt1Phys_Dec);
   fChain->SetBranchAddress("a_Hlt1Phys_TIS", &a_Hlt1Phys_TIS, &b_a_Hlt1Phys_TIS);
   fChain->SetBranchAddress("a_Hlt1Phys_TOS", &a_Hlt1Phys_TOS, &b_a_Hlt1Phys_TOS);
   fChain->SetBranchAddress("a_Hlt2Global_Dec", &a_Hlt2Global_Dec, &b_a_Hlt2Global_Dec);
   fChain->SetBranchAddress("a_Hlt2Global_TIS", &a_Hlt2Global_TIS, &b_a_Hlt2Global_TIS);
   fChain->SetBranchAddress("a_Hlt2Global_TOS", &a_Hlt2Global_TOS, &b_a_Hlt2Global_TOS);
   fChain->SetBranchAddress("a_Hlt2Phys_Dec", &a_Hlt2Phys_Dec, &b_a_Hlt2Phys_Dec);
   fChain->SetBranchAddress("a_Hlt2Phys_TIS", &a_Hlt2Phys_TIS, &b_a_Hlt2Phys_TIS);
   fChain->SetBranchAddress("a_Hlt2Phys_TOS", &a_Hlt2Phys_TOS, &b_a_Hlt2Phys_TOS);
   fChain->SetBranchAddress("a_X", &a_X, &b_a_X);
   fChain->SetBranchAddress("a_Y", &a_Y, &b_a_Y);
   fChain->SetBranchAddress("a_NumVtxWithinChi2WindowOneTrack", &a_NumVtxWithinChi2WindowOneTrack, &b_a_NumVtxWithinChi2WindowOneTrack);
   fChain->SetBranchAddress("a_SmallestDeltaChi2OneTrack", &a_SmallestDeltaChi2OneTrack, &b_a_SmallestDeltaChi2OneTrack);
   fChain->SetBranchAddress("a_SmallestDeltaChi2MassOneTrack", &a_SmallestDeltaChi2MassOneTrack, &b_a_SmallestDeltaChi2MassOneTrack);
   fChain->SetBranchAddress("a_SmallestDeltaChi2TwoTracks", &a_SmallestDeltaChi2TwoTracks, &b_a_SmallestDeltaChi2TwoTracks);
   fChain->SetBranchAddress("a_SmallestDeltaChi2MassTwoTracks", &a_SmallestDeltaChi2MassTwoTracks, &b_a_SmallestDeltaChi2MassTwoTracks);
   fChain->SetBranchAddress("a_DOCA12", &a_DOCA12, &b_a_DOCA12);
   fChain->SetBranchAddress("a_DOCA13", &a_DOCA13, &b_a_DOCA13);
   fChain->SetBranchAddress("a_DOCA23", &a_DOCA23, &b_a_DOCA23);
   fChain->SetBranchAddress("a_DOCACHI2_12", &a_DOCACHI2_12, &b_a_DOCACHI2_12);
   fChain->SetBranchAddress("a_DOCACHI2_13", &a_DOCACHI2_13, &b_a_DOCACHI2_13);
   fChain->SetBranchAddress("a_DOCACHI2_23", &a_DOCACHI2_23, &b_a_DOCACHI2_23);
   fChain->SetBranchAddress("a_ETA", &a_ETA, &b_a_ETA);
   fChain->SetBranchAddress("a_LOKI_BPVCORRM", &a_LOKI_BPVCORRM, &b_a_LOKI_BPVCORRM);
   fChain->SetBranchAddress("a_LOKI_BPVLTIME", &a_LOKI_BPVLTIME, &b_a_LOKI_BPVLTIME);
   fChain->SetBranchAddress("a_LOKI_DIRA", &a_LOKI_DIRA, &b_a_LOKI_DIRA);
   fChain->SetBranchAddress("a_LOKI_FDCHI2", &a_LOKI_FDCHI2, &b_a_LOKI_FDCHI2);
   fChain->SetBranchAddress("a_LOKI_FDS", &a_LOKI_FDS, &b_a_LOKI_FDS);
   fChain->SetBranchAddress("a_LOKI_IPCHI2", &a_LOKI_IPCHI2, &b_a_LOKI_IPCHI2);
   fChain->SetBranchAddress("a_LOKI_MAXDOCA", &a_LOKI_MAXDOCA, &b_a_LOKI_MAXDOCA);
   fChain->SetBranchAddress("a_LV01", &a_LV01, &b_a_LV01);
   fChain->SetBranchAddress("a_LV02", &a_LV02, &b_a_LV02);
   fChain->SetBranchAddress("a_MASS12", &a_MASS12, &b_a_MASS12);
   fChain->SetBranchAddress("a_MASS13", &a_MASS13, &b_a_MASS13);
   fChain->SetBranchAddress("a_MASS23", &a_MASS23, &b_a_MASS23);
   fChain->SetBranchAddress("a_PHI", &a_PHI, &b_a_PHI);
   fChain->SetBranchAddress("p_MC12TuneV2_ProbNNe", &p_MC12TuneV2_ProbNNe, &b_p_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("p_MC12TuneV2_ProbNNmu", &p_MC12TuneV2_ProbNNmu, &b_p_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("p_MC12TuneV2_ProbNNpi", &p_MC12TuneV2_ProbNNpi, &b_p_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("p_MC12TuneV2_ProbNNk", &p_MC12TuneV2_ProbNNk, &b_p_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("p_MC12TuneV2_ProbNNp", &p_MC12TuneV2_ProbNNp, &b_p_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("p_MC12TuneV2_ProbNNghost", &p_MC12TuneV2_ProbNNghost, &b_p_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("p_MC12TuneV3_ProbNNe", &p_MC12TuneV3_ProbNNe, &b_p_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("p_MC12TuneV3_ProbNNmu", &p_MC12TuneV3_ProbNNmu, &b_p_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("p_MC12TuneV3_ProbNNpi", &p_MC12TuneV3_ProbNNpi, &b_p_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("p_MC12TuneV3_ProbNNk", &p_MC12TuneV3_ProbNNk, &b_p_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("p_MC12TuneV3_ProbNNp", &p_MC12TuneV3_ProbNNp, &b_p_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("p_MC12TuneV3_ProbNNghost", &p_MC12TuneV3_ProbNNghost, &b_p_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("p_MC12TuneV4_ProbNNe", &p_MC12TuneV4_ProbNNe, &b_p_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("p_MC12TuneV4_ProbNNmu", &p_MC12TuneV4_ProbNNmu, &b_p_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("p_MC12TuneV4_ProbNNpi", &p_MC12TuneV4_ProbNNpi, &b_p_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("p_MC12TuneV4_ProbNNk", &p_MC12TuneV4_ProbNNk, &b_p_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("p_MC12TuneV4_ProbNNp", &p_MC12TuneV4_ProbNNp, &b_p_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("p_MC12TuneV4_ProbNNghost", &p_MC12TuneV4_ProbNNghost, &b_p_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("p_MC15TuneV1_ProbNNe", &p_MC15TuneV1_ProbNNe, &b_p_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("p_MC15TuneV1_ProbNNmu", &p_MC15TuneV1_ProbNNmu, &b_p_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("p_MC15TuneV1_ProbNNpi", &p_MC15TuneV1_ProbNNpi, &b_p_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("p_MC15TuneV1_ProbNNk", &p_MC15TuneV1_ProbNNk, &b_p_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("p_MC15TuneV1_ProbNNp", &p_MC15TuneV1_ProbNNp, &b_p_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("p_MC15TuneV1_ProbNNghost", &p_MC15TuneV1_ProbNNghost, &b_p_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("p_CosTheta", &p_CosTheta, &b_p_CosTheta);
   fChain->SetBranchAddress("p_OWNPV_X", &p_OWNPV_X, &b_p_OWNPV_X);
   fChain->SetBranchAddress("p_OWNPV_Y", &p_OWNPV_Y, &b_p_OWNPV_Y);
   fChain->SetBranchAddress("p_OWNPV_Z", &p_OWNPV_Z, &b_p_OWNPV_Z);
   fChain->SetBranchAddress("p_OWNPV_XERR", &p_OWNPV_XERR, &b_p_OWNPV_XERR);
   fChain->SetBranchAddress("p_OWNPV_YERR", &p_OWNPV_YERR, &b_p_OWNPV_YERR);
   fChain->SetBranchAddress("p_OWNPV_ZERR", &p_OWNPV_ZERR, &b_p_OWNPV_ZERR);
   fChain->SetBranchAddress("p_OWNPV_CHI2", &p_OWNPV_CHI2, &b_p_OWNPV_CHI2);
   fChain->SetBranchAddress("p_OWNPV_NDOF", &p_OWNPV_NDOF, &b_p_OWNPV_NDOF);
   fChain->SetBranchAddress("p_OWNPV_COV_", p_OWNPV_COV_, &b_p_OWNPV_COV_);
   fChain->SetBranchAddress("p_IP_OWNPV", &p_IP_OWNPV, &b_p_IP_OWNPV);
   fChain->SetBranchAddress("p_IPCHI2_OWNPV", &p_IPCHI2_OWNPV, &b_p_IPCHI2_OWNPV);
   fChain->SetBranchAddress("p_ORIVX_X", &p_ORIVX_X, &b_p_ORIVX_X);
   fChain->SetBranchAddress("p_ORIVX_Y", &p_ORIVX_Y, &b_p_ORIVX_Y);
   fChain->SetBranchAddress("p_ORIVX_Z", &p_ORIVX_Z, &b_p_ORIVX_Z);
   fChain->SetBranchAddress("p_ORIVX_XERR", &p_ORIVX_XERR, &b_p_ORIVX_XERR);
   fChain->SetBranchAddress("p_ORIVX_YERR", &p_ORIVX_YERR, &b_p_ORIVX_YERR);
   fChain->SetBranchAddress("p_ORIVX_ZERR", &p_ORIVX_ZERR, &b_p_ORIVX_ZERR);
   fChain->SetBranchAddress("p_ORIVX_CHI2", &p_ORIVX_CHI2, &b_p_ORIVX_CHI2);
   fChain->SetBranchAddress("p_ORIVX_NDOF", &p_ORIVX_NDOF, &b_p_ORIVX_NDOF);
   fChain->SetBranchAddress("p_ORIVX_COV_", p_ORIVX_COV_, &b_p_ORIVX_COV_);
   fChain->SetBranchAddress("p_P", &p_P, &b_p_P);
   fChain->SetBranchAddress("p_PT", &p_PT, &b_p_PT);
   fChain->SetBranchAddress("p_PE", &p_PE, &b_p_PE);
   fChain->SetBranchAddress("p_PX", &p_PX, &b_p_PX);
   fChain->SetBranchAddress("p_PY", &p_PY, &b_p_PY);
   fChain->SetBranchAddress("p_PZ", &p_PZ, &b_p_PZ);
   fChain->SetBranchAddress("p_M", &p_M, &b_p_M);
   fChain->SetBranchAddress("p_TRUEID", &p_TRUEID, &b_p_TRUEID);
   fChain->SetBranchAddress("p_TRUECosTheta", &p_TRUECosTheta, &b_p_TRUECosTheta);
   fChain->SetBranchAddress("p_MCP_numPseudoTypes", &p_MCP_numPseudoTypes, &b_p_MCP_numPseudoTypes);
   fChain->SetBranchAddress("p_MCP_MCP_PseudoLen", &p_MCP_MCP_PseudoLen, &b_p_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("p_MCP_PseudoTypes", &p_MCP_PseudoTypes, &b_p_MCP_PseudoTypes);
   fChain->SetBranchAddress("p_MC_MOTHER_ID", &p_MC_MOTHER_ID, &b_p_MC_MOTHER_ID);
   fChain->SetBranchAddress("p_MC_MOTHER_KEY", &p_MC_MOTHER_KEY, &b_p_MC_MOTHER_KEY);
   fChain->SetBranchAddress("p_MC_GD_MOTHER_ID", &p_MC_GD_MOTHER_ID, &b_p_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("p_MC_GD_MOTHER_KEY", &p_MC_GD_MOTHER_KEY, &b_p_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("p_MC_GD_GD_MOTHER_ID", &p_MC_GD_GD_MOTHER_ID, &b_p_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("p_MC_GD_GD_MOTHER_KEY", &p_MC_GD_GD_MOTHER_KEY, &b_p_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("p_TRUEP_E", &p_TRUEP_E, &b_p_TRUEP_E);
   fChain->SetBranchAddress("p_TRUEP_X", &p_TRUEP_X, &b_p_TRUEP_X);
   fChain->SetBranchAddress("p_TRUEP_Y", &p_TRUEP_Y, &b_p_TRUEP_Y);
   fChain->SetBranchAddress("p_TRUEP_Z", &p_TRUEP_Z, &b_p_TRUEP_Z);
   fChain->SetBranchAddress("p_TRUEPT", &p_TRUEPT, &b_p_TRUEPT);
   fChain->SetBranchAddress("p_TRUEORIGINVERTEX_X", &p_TRUEORIGINVERTEX_X, &b_p_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("p_TRUEORIGINVERTEX_Y", &p_TRUEORIGINVERTEX_Y, &b_p_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("p_TRUEORIGINVERTEX_Z", &p_TRUEORIGINVERTEX_Z, &b_p_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("p_TRUEENDVERTEX_X", &p_TRUEENDVERTEX_X, &b_p_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("p_TRUEENDVERTEX_Y", &p_TRUEENDVERTEX_Y, &b_p_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("p_TRUEENDVERTEX_Z", &p_TRUEENDVERTEX_Z, &b_p_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("p_TRUEISSTABLE", &p_TRUEISSTABLE, &b_p_TRUEISSTABLE);
   fChain->SetBranchAddress("p_TRUETAU", &p_TRUETAU, &b_p_TRUETAU);
   fChain->SetBranchAddress("p_ID", &p_ID, &b_p_ID);
   fChain->SetBranchAddress("p_MC_ISPROMPT", &p_MC_ISPROMPT, &b_p_MC_ISPROMPT);
   fChain->SetBranchAddress("p_MC_LONGLIVED_ID", &p_MC_LONGLIVED_ID, &b_p_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("p_MC_LONGLIVED_KEY", &p_MC_LONGLIVED_KEY, &b_p_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("p_Reconstructible", &p_Reconstructible, &b_p_Reconstructible);
   fChain->SetBranchAddress("p_Reconstructed", &p_Reconstructed, &b_p_Reconstructed);
   fChain->SetBranchAddress("p_ProtoParticles", &p_ProtoParticles, &b_p_ProtoParticles);
   fChain->SetBranchAddress("p_PP_PX", p_PP_PX, &b_p_PP_PX);
   fChain->SetBranchAddress("p_PP_PY", p_PP_PY, &b_p_PP_PY);
   fChain->SetBranchAddress("p_PP_PZ", p_PP_PZ, &b_p_PP_PZ);
   fChain->SetBranchAddress("p_PP_Weight", p_PP_Weight, &b_p_PP_Weight);
   fChain->SetBranchAddress("p_PP_tr_pchi2", p_PP_tr_pchi2, &b_p_PP_tr_pchi2);
   fChain->SetBranchAddress("p_PP_DLLe", p_PP_DLLe, &b_p_PP_DLLe);
   fChain->SetBranchAddress("p_PP_DLLk", p_PP_DLLk, &b_p_PP_DLLk);
   fChain->SetBranchAddress("p_PP_DLLp", p_PP_DLLp, &b_p_PP_DLLp);
   fChain->SetBranchAddress("p_PP_DLLmu", p_PP_DLLmu, &b_p_PP_DLLmu);
   fChain->SetBranchAddress("p_PIDe", &p_PIDe, &b_p_PIDe);
   fChain->SetBranchAddress("p_PIDmu", &p_PIDmu, &b_p_PIDmu);
   fChain->SetBranchAddress("p_PIDK", &p_PIDK, &b_p_PIDK);
   fChain->SetBranchAddress("p_PIDp", &p_PIDp, &b_p_PIDp);
   fChain->SetBranchAddress("p_PIDd", &p_PIDd, &b_p_PIDd);
   fChain->SetBranchAddress("p_ProbNNe", &p_ProbNNe, &b_p_ProbNNe);
   fChain->SetBranchAddress("p_ProbNNk", &p_ProbNNk, &b_p_ProbNNk);
   fChain->SetBranchAddress("p_ProbNNp", &p_ProbNNp, &b_p_ProbNNp);
   fChain->SetBranchAddress("p_ProbNNpi", &p_ProbNNpi, &b_p_ProbNNpi);
   fChain->SetBranchAddress("p_ProbNNmu", &p_ProbNNmu, &b_p_ProbNNmu);
   fChain->SetBranchAddress("p_ProbNNd", &p_ProbNNd, &b_p_ProbNNd);
   fChain->SetBranchAddress("p_ProbNNghost", &p_ProbNNghost, &b_p_ProbNNghost);
   fChain->SetBranchAddress("p_hasMuon", &p_hasMuon, &b_p_hasMuon);
   fChain->SetBranchAddress("p_isMuon", &p_isMuon, &b_p_isMuon);
   fChain->SetBranchAddress("p_hasRich", &p_hasRich, &b_p_hasRich);
   fChain->SetBranchAddress("p_UsedRichAerogel", &p_UsedRichAerogel, &b_p_UsedRichAerogel);
   fChain->SetBranchAddress("p_UsedRich1Gas", &p_UsedRich1Gas, &b_p_UsedRich1Gas);
   fChain->SetBranchAddress("p_UsedRich2Gas", &p_UsedRich2Gas, &b_p_UsedRich2Gas);
   fChain->SetBranchAddress("p_RichAboveElThres", &p_RichAboveElThres, &b_p_RichAboveElThres);
   fChain->SetBranchAddress("p_RichAboveMuThres", &p_RichAboveMuThres, &b_p_RichAboveMuThres);
   fChain->SetBranchAddress("p_RichAbovePiThres", &p_RichAbovePiThres, &b_p_RichAbovePiThres);
   fChain->SetBranchAddress("p_RichAboveKaThres", &p_RichAboveKaThres, &b_p_RichAboveKaThres);
   fChain->SetBranchAddress("p_RichAbovePrThres", &p_RichAbovePrThres, &b_p_RichAbovePrThres);
   fChain->SetBranchAddress("p_hasCalo", &p_hasCalo, &b_p_hasCalo);
   fChain->SetBranchAddress("p_L0Global_Dec", &p_L0Global_Dec, &b_p_L0Global_Dec);
   fChain->SetBranchAddress("p_L0Global_TIS", &p_L0Global_TIS, &b_p_L0Global_TIS);
   fChain->SetBranchAddress("p_L0Global_TOS", &p_L0Global_TOS, &b_p_L0Global_TOS);
   fChain->SetBranchAddress("p_Hlt1Global_Dec", &p_Hlt1Global_Dec, &b_p_Hlt1Global_Dec);
   fChain->SetBranchAddress("p_Hlt1Global_TIS", &p_Hlt1Global_TIS, &b_p_Hlt1Global_TIS);
   fChain->SetBranchAddress("p_Hlt1Global_TOS", &p_Hlt1Global_TOS, &b_p_Hlt1Global_TOS);
   fChain->SetBranchAddress("p_Hlt1Phys_Dec", &p_Hlt1Phys_Dec, &b_p_Hlt1Phys_Dec);
   fChain->SetBranchAddress("p_Hlt1Phys_TIS", &p_Hlt1Phys_TIS, &b_p_Hlt1Phys_TIS);
   fChain->SetBranchAddress("p_Hlt1Phys_TOS", &p_Hlt1Phys_TOS, &b_p_Hlt1Phys_TOS);
   fChain->SetBranchAddress("p_Hlt2Global_Dec", &p_Hlt2Global_Dec, &b_p_Hlt2Global_Dec);
   fChain->SetBranchAddress("p_Hlt2Global_TIS", &p_Hlt2Global_TIS, &b_p_Hlt2Global_TIS);
   fChain->SetBranchAddress("p_Hlt2Global_TOS", &p_Hlt2Global_TOS, &b_p_Hlt2Global_TOS);
   fChain->SetBranchAddress("p_Hlt2Phys_Dec", &p_Hlt2Phys_Dec, &b_p_Hlt2Phys_Dec);
   fChain->SetBranchAddress("p_Hlt2Phys_TIS", &p_Hlt2Phys_TIS, &b_p_Hlt2Phys_TIS);
   fChain->SetBranchAddress("p_Hlt2Phys_TOS", &p_Hlt2Phys_TOS, &b_p_Hlt2Phys_TOS);
   fChain->SetBranchAddress("p_TRACK_Type", &p_TRACK_Type, &b_p_TRACK_Type);
   fChain->SetBranchAddress("p_TRACK_Key", &p_TRACK_Key, &b_p_TRACK_Key);
   fChain->SetBranchAddress("p_TRACK_CHI2NDOF", &p_TRACK_CHI2NDOF, &b_p_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("p_TRACK_PCHI2", &p_TRACK_PCHI2, &b_p_TRACK_PCHI2);
   fChain->SetBranchAddress("p_TRACK_MatchCHI2", &p_TRACK_MatchCHI2, &b_p_TRACK_MatchCHI2);
   fChain->SetBranchAddress("p_TRACK_GhostProb", &p_TRACK_GhostProb, &b_p_TRACK_GhostProb);
   fChain->SetBranchAddress("p_TRACK_CloneDist", &p_TRACK_CloneDist, &b_p_TRACK_CloneDist);
   fChain->SetBranchAddress("p_TRACK_Likelihood", &p_TRACK_Likelihood, &b_p_TRACK_Likelihood);
   fChain->SetBranchAddress("p_X", &p_X, &b_p_X);
   fChain->SetBranchAddress("p_Y", &p_Y, &b_p_Y);
   fChain->SetBranchAddress("p_ETA", &p_ETA, &b_p_ETA);
   fChain->SetBranchAddress("p_PHI", &p_PHI, &b_p_PHI);
   fChain->SetBranchAddress("pbar_MC12TuneV2_ProbNNe", &pbar_MC12TuneV2_ProbNNe, &b_pbar_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("pbar_MC12TuneV2_ProbNNmu", &pbar_MC12TuneV2_ProbNNmu, &b_pbar_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("pbar_MC12TuneV2_ProbNNpi", &pbar_MC12TuneV2_ProbNNpi, &b_pbar_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("pbar_MC12TuneV2_ProbNNk", &pbar_MC12TuneV2_ProbNNk, &b_pbar_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("pbar_MC12TuneV2_ProbNNp", &pbar_MC12TuneV2_ProbNNp, &b_pbar_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("pbar_MC12TuneV2_ProbNNghost", &pbar_MC12TuneV2_ProbNNghost, &b_pbar_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("pbar_MC12TuneV3_ProbNNe", &pbar_MC12TuneV3_ProbNNe, &b_pbar_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("pbar_MC12TuneV3_ProbNNmu", &pbar_MC12TuneV3_ProbNNmu, &b_pbar_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("pbar_MC12TuneV3_ProbNNpi", &pbar_MC12TuneV3_ProbNNpi, &b_pbar_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("pbar_MC12TuneV3_ProbNNk", &pbar_MC12TuneV3_ProbNNk, &b_pbar_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("pbar_MC12TuneV3_ProbNNp", &pbar_MC12TuneV3_ProbNNp, &b_pbar_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("pbar_MC12TuneV3_ProbNNghost", &pbar_MC12TuneV3_ProbNNghost, &b_pbar_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("pbar_MC12TuneV4_ProbNNe", &pbar_MC12TuneV4_ProbNNe, &b_pbar_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("pbar_MC12TuneV4_ProbNNmu", &pbar_MC12TuneV4_ProbNNmu, &b_pbar_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("pbar_MC12TuneV4_ProbNNpi", &pbar_MC12TuneV4_ProbNNpi, &b_pbar_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("pbar_MC12TuneV4_ProbNNk", &pbar_MC12TuneV4_ProbNNk, &b_pbar_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("pbar_MC12TuneV4_ProbNNp", &pbar_MC12TuneV4_ProbNNp, &b_pbar_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("pbar_MC12TuneV4_ProbNNghost", &pbar_MC12TuneV4_ProbNNghost, &b_pbar_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("pbar_MC15TuneV1_ProbNNe", &pbar_MC15TuneV1_ProbNNe, &b_pbar_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("pbar_MC15TuneV1_ProbNNmu", &pbar_MC15TuneV1_ProbNNmu, &b_pbar_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("pbar_MC15TuneV1_ProbNNpi", &pbar_MC15TuneV1_ProbNNpi, &b_pbar_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("pbar_MC15TuneV1_ProbNNk", &pbar_MC15TuneV1_ProbNNk, &b_pbar_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("pbar_MC15TuneV1_ProbNNp", &pbar_MC15TuneV1_ProbNNp, &b_pbar_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("pbar_MC15TuneV1_ProbNNghost", &pbar_MC15TuneV1_ProbNNghost, &b_pbar_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("pbar_CosTheta", &pbar_CosTheta, &b_pbar_CosTheta);
   fChain->SetBranchAddress("pbar_OWNPV_X", &pbar_OWNPV_X, &b_pbar_OWNPV_X);
   fChain->SetBranchAddress("pbar_OWNPV_Y", &pbar_OWNPV_Y, &b_pbar_OWNPV_Y);
   fChain->SetBranchAddress("pbar_OWNPV_Z", &pbar_OWNPV_Z, &b_pbar_OWNPV_Z);
   fChain->SetBranchAddress("pbar_OWNPV_XERR", &pbar_OWNPV_XERR, &b_pbar_OWNPV_XERR);
   fChain->SetBranchAddress("pbar_OWNPV_YERR", &pbar_OWNPV_YERR, &b_pbar_OWNPV_YERR);
   fChain->SetBranchAddress("pbar_OWNPV_ZERR", &pbar_OWNPV_ZERR, &b_pbar_OWNPV_ZERR);
   fChain->SetBranchAddress("pbar_OWNPV_CHI2", &pbar_OWNPV_CHI2, &b_pbar_OWNPV_CHI2);
   fChain->SetBranchAddress("pbar_OWNPV_NDOF", &pbar_OWNPV_NDOF, &b_pbar_OWNPV_NDOF);
   fChain->SetBranchAddress("pbar_OWNPV_COV_", pbar_OWNPV_COV_, &b_pbar_OWNPV_COV_);
   fChain->SetBranchAddress("pbar_IP_OWNPV", &pbar_IP_OWNPV, &b_pbar_IP_OWNPV);
   fChain->SetBranchAddress("pbar_IPCHI2_OWNPV", &pbar_IPCHI2_OWNPV, &b_pbar_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pbar_ORIVX_X", &pbar_ORIVX_X, &b_pbar_ORIVX_X);
   fChain->SetBranchAddress("pbar_ORIVX_Y", &pbar_ORIVX_Y, &b_pbar_ORIVX_Y);
   fChain->SetBranchAddress("pbar_ORIVX_Z", &pbar_ORIVX_Z, &b_pbar_ORIVX_Z);
   fChain->SetBranchAddress("pbar_ORIVX_XERR", &pbar_ORIVX_XERR, &b_pbar_ORIVX_XERR);
   fChain->SetBranchAddress("pbar_ORIVX_YERR", &pbar_ORIVX_YERR, &b_pbar_ORIVX_YERR);
   fChain->SetBranchAddress("pbar_ORIVX_ZERR", &pbar_ORIVX_ZERR, &b_pbar_ORIVX_ZERR);
   fChain->SetBranchAddress("pbar_ORIVX_CHI2", &pbar_ORIVX_CHI2, &b_pbar_ORIVX_CHI2);
   fChain->SetBranchAddress("pbar_ORIVX_NDOF", &pbar_ORIVX_NDOF, &b_pbar_ORIVX_NDOF);
   fChain->SetBranchAddress("pbar_ORIVX_COV_", pbar_ORIVX_COV_, &b_pbar_ORIVX_COV_);
   fChain->SetBranchAddress("pbar_P", &pbar_P, &b_pbar_P);
   fChain->SetBranchAddress("pbar_PT", &pbar_PT, &b_pbar_PT);
   fChain->SetBranchAddress("pbar_PE", &pbar_PE, &b_pbar_PE);
   fChain->SetBranchAddress("pbar_PX", &pbar_PX, &b_pbar_PX);
   fChain->SetBranchAddress("pbar_PY", &pbar_PY, &b_pbar_PY);
   fChain->SetBranchAddress("pbar_PZ", &pbar_PZ, &b_pbar_PZ);
   fChain->SetBranchAddress("pbar_M", &pbar_M, &b_pbar_M);
   fChain->SetBranchAddress("pbar_TRUEID", &pbar_TRUEID, &b_pbar_TRUEID);
   fChain->SetBranchAddress("pbar_TRUECosTheta", &pbar_TRUECosTheta, &b_pbar_TRUECosTheta);
   fChain->SetBranchAddress("pbar_MCP_numPseudoTypes", &pbar_MCP_numPseudoTypes, &b_pbar_MCP_numPseudoTypes);
   fChain->SetBranchAddress("pbar_MCP_MCP_PseudoLen", &pbar_MCP_MCP_PseudoLen, &b_pbar_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("pbar_MCP_PseudoTypes", &pbar_MCP_PseudoTypes, &b_pbar_MCP_PseudoTypes);
   fChain->SetBranchAddress("pbar_MC_MOTHER_ID", &pbar_MC_MOTHER_ID, &b_pbar_MC_MOTHER_ID);
   fChain->SetBranchAddress("pbar_MC_MOTHER_KEY", &pbar_MC_MOTHER_KEY, &b_pbar_MC_MOTHER_KEY);
   fChain->SetBranchAddress("pbar_MC_GD_MOTHER_ID", &pbar_MC_GD_MOTHER_ID, &b_pbar_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("pbar_MC_GD_MOTHER_KEY", &pbar_MC_GD_MOTHER_KEY, &b_pbar_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pbar_MC_GD_GD_MOTHER_ID", &pbar_MC_GD_GD_MOTHER_ID, &b_pbar_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("pbar_MC_GD_GD_MOTHER_KEY", &pbar_MC_GD_GD_MOTHER_KEY, &b_pbar_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pbar_TRUEP_E", &pbar_TRUEP_E, &b_pbar_TRUEP_E);
   fChain->SetBranchAddress("pbar_TRUEP_X", &pbar_TRUEP_X, &b_pbar_TRUEP_X);
   fChain->SetBranchAddress("pbar_TRUEP_Y", &pbar_TRUEP_Y, &b_pbar_TRUEP_Y);
   fChain->SetBranchAddress("pbar_TRUEP_Z", &pbar_TRUEP_Z, &b_pbar_TRUEP_Z);
   fChain->SetBranchAddress("pbar_TRUEPT", &pbar_TRUEPT, &b_pbar_TRUEPT);
   fChain->SetBranchAddress("pbar_TRUEORIGINVERTEX_X", &pbar_TRUEORIGINVERTEX_X, &b_pbar_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("pbar_TRUEORIGINVERTEX_Y", &pbar_TRUEORIGINVERTEX_Y, &b_pbar_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("pbar_TRUEORIGINVERTEX_Z", &pbar_TRUEORIGINVERTEX_Z, &b_pbar_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("pbar_TRUEENDVERTEX_X", &pbar_TRUEENDVERTEX_X, &b_pbar_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("pbar_TRUEENDVERTEX_Y", &pbar_TRUEENDVERTEX_Y, &b_pbar_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("pbar_TRUEENDVERTEX_Z", &pbar_TRUEENDVERTEX_Z, &b_pbar_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("pbar_TRUEISSTABLE", &pbar_TRUEISSTABLE, &b_pbar_TRUEISSTABLE);
   fChain->SetBranchAddress("pbar_TRUETAU", &pbar_TRUETAU, &b_pbar_TRUETAU);
   fChain->SetBranchAddress("pbar_ID", &pbar_ID, &b_pbar_ID);
   fChain->SetBranchAddress("pbar_MC_ISPROMPT", &pbar_MC_ISPROMPT, &b_pbar_MC_ISPROMPT);
   fChain->SetBranchAddress("pbar_MC_LONGLIVED_ID", &pbar_MC_LONGLIVED_ID, &b_pbar_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("pbar_MC_LONGLIVED_KEY", &pbar_MC_LONGLIVED_KEY, &b_pbar_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("pbar_Reconstructible", &pbar_Reconstructible, &b_pbar_Reconstructible);
   fChain->SetBranchAddress("pbar_Reconstructed", &pbar_Reconstructed, &b_pbar_Reconstructed);
   fChain->SetBranchAddress("pbar_ProtoParticles", &pbar_ProtoParticles, &b_pbar_ProtoParticles);
   fChain->SetBranchAddress("pbar_PP_PX", pbar_PP_PX, &b_pbar_PP_PX);
   fChain->SetBranchAddress("pbar_PP_PY", pbar_PP_PY, &b_pbar_PP_PY);
   fChain->SetBranchAddress("pbar_PP_PZ", pbar_PP_PZ, &b_pbar_PP_PZ);
   fChain->SetBranchAddress("pbar_PP_Weight", pbar_PP_Weight, &b_pbar_PP_Weight);
   fChain->SetBranchAddress("pbar_PP_tr_pchi2", pbar_PP_tr_pchi2, &b_pbar_PP_tr_pchi2);
   fChain->SetBranchAddress("pbar_PP_DLLe", pbar_PP_DLLe, &b_pbar_PP_DLLe);
   fChain->SetBranchAddress("pbar_PP_DLLk", pbar_PP_DLLk, &b_pbar_PP_DLLk);
   fChain->SetBranchAddress("pbar_PP_DLLp", pbar_PP_DLLp, &b_pbar_PP_DLLp);
   fChain->SetBranchAddress("pbar_PP_DLLmu", pbar_PP_DLLmu, &b_pbar_PP_DLLmu);
   fChain->SetBranchAddress("pbar_PIDe", &pbar_PIDe, &b_pbar_PIDe);
   fChain->SetBranchAddress("pbar_PIDmu", &pbar_PIDmu, &b_pbar_PIDmu);
   fChain->SetBranchAddress("pbar_PIDK", &pbar_PIDK, &b_pbar_PIDK);
   fChain->SetBranchAddress("pbar_PIDp", &pbar_PIDp, &b_pbar_PIDp);
   fChain->SetBranchAddress("pbar_PIDd", &pbar_PIDd, &b_pbar_PIDd);
   fChain->SetBranchAddress("pbar_ProbNNe", &pbar_ProbNNe, &b_pbar_ProbNNe);
   fChain->SetBranchAddress("pbar_ProbNNk", &pbar_ProbNNk, &b_pbar_ProbNNk);
   fChain->SetBranchAddress("pbar_ProbNNp", &pbar_ProbNNp, &b_pbar_ProbNNp);
   fChain->SetBranchAddress("pbar_ProbNNpi", &pbar_ProbNNpi, &b_pbar_ProbNNpi);
   fChain->SetBranchAddress("pbar_ProbNNmu", &pbar_ProbNNmu, &b_pbar_ProbNNmu);
   fChain->SetBranchAddress("pbar_ProbNNd", &pbar_ProbNNd, &b_pbar_ProbNNd);
   fChain->SetBranchAddress("pbar_ProbNNghost", &pbar_ProbNNghost, &b_pbar_ProbNNghost);
   fChain->SetBranchAddress("pbar_hasMuon", &pbar_hasMuon, &b_pbar_hasMuon);
   fChain->SetBranchAddress("pbar_isMuon", &pbar_isMuon, &b_pbar_isMuon);
   fChain->SetBranchAddress("pbar_hasRich", &pbar_hasRich, &b_pbar_hasRich);
   fChain->SetBranchAddress("pbar_UsedRichAerogel", &pbar_UsedRichAerogel, &b_pbar_UsedRichAerogel);
   fChain->SetBranchAddress("pbar_UsedRich1Gas", &pbar_UsedRich1Gas, &b_pbar_UsedRich1Gas);
   fChain->SetBranchAddress("pbar_UsedRich2Gas", &pbar_UsedRich2Gas, &b_pbar_UsedRich2Gas);
   fChain->SetBranchAddress("pbar_RichAboveElThres", &pbar_RichAboveElThres, &b_pbar_RichAboveElThres);
   fChain->SetBranchAddress("pbar_RichAboveMuThres", &pbar_RichAboveMuThres, &b_pbar_RichAboveMuThres);
   fChain->SetBranchAddress("pbar_RichAbovePiThres", &pbar_RichAbovePiThres, &b_pbar_RichAbovePiThres);
   fChain->SetBranchAddress("pbar_RichAboveKaThres", &pbar_RichAboveKaThres, &b_pbar_RichAboveKaThres);
   fChain->SetBranchAddress("pbar_RichAbovePrThres", &pbar_RichAbovePrThres, &b_pbar_RichAbovePrThres);
   fChain->SetBranchAddress("pbar_hasCalo", &pbar_hasCalo, &b_pbar_hasCalo);
   fChain->SetBranchAddress("pbar_L0Global_Dec", &pbar_L0Global_Dec, &b_pbar_L0Global_Dec);
   fChain->SetBranchAddress("pbar_L0Global_TIS", &pbar_L0Global_TIS, &b_pbar_L0Global_TIS);
   fChain->SetBranchAddress("pbar_L0Global_TOS", &pbar_L0Global_TOS, &b_pbar_L0Global_TOS);
   fChain->SetBranchAddress("pbar_Hlt1Global_Dec", &pbar_Hlt1Global_Dec, &b_pbar_Hlt1Global_Dec);
   fChain->SetBranchAddress("pbar_Hlt1Global_TIS", &pbar_Hlt1Global_TIS, &b_pbar_Hlt1Global_TIS);
   fChain->SetBranchAddress("pbar_Hlt1Global_TOS", &pbar_Hlt1Global_TOS, &b_pbar_Hlt1Global_TOS);
   fChain->SetBranchAddress("pbar_Hlt1Phys_Dec", &pbar_Hlt1Phys_Dec, &b_pbar_Hlt1Phys_Dec);
   fChain->SetBranchAddress("pbar_Hlt1Phys_TIS", &pbar_Hlt1Phys_TIS, &b_pbar_Hlt1Phys_TIS);
   fChain->SetBranchAddress("pbar_Hlt1Phys_TOS", &pbar_Hlt1Phys_TOS, &b_pbar_Hlt1Phys_TOS);
   fChain->SetBranchAddress("pbar_Hlt2Global_Dec", &pbar_Hlt2Global_Dec, &b_pbar_Hlt2Global_Dec);
   fChain->SetBranchAddress("pbar_Hlt2Global_TIS", &pbar_Hlt2Global_TIS, &b_pbar_Hlt2Global_TIS);
   fChain->SetBranchAddress("pbar_Hlt2Global_TOS", &pbar_Hlt2Global_TOS, &b_pbar_Hlt2Global_TOS);
   fChain->SetBranchAddress("pbar_Hlt2Phys_Dec", &pbar_Hlt2Phys_Dec, &b_pbar_Hlt2Phys_Dec);
   fChain->SetBranchAddress("pbar_Hlt2Phys_TIS", &pbar_Hlt2Phys_TIS, &b_pbar_Hlt2Phys_TIS);
   fChain->SetBranchAddress("pbar_Hlt2Phys_TOS", &pbar_Hlt2Phys_TOS, &b_pbar_Hlt2Phys_TOS);
   fChain->SetBranchAddress("pbar_TRACK_Type", &pbar_TRACK_Type, &b_pbar_TRACK_Type);
   fChain->SetBranchAddress("pbar_TRACK_Key", &pbar_TRACK_Key, &b_pbar_TRACK_Key);
   fChain->SetBranchAddress("pbar_TRACK_CHI2NDOF", &pbar_TRACK_CHI2NDOF, &b_pbar_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pbar_TRACK_PCHI2", &pbar_TRACK_PCHI2, &b_pbar_TRACK_PCHI2);
   fChain->SetBranchAddress("pbar_TRACK_MatchCHI2", &pbar_TRACK_MatchCHI2, &b_pbar_TRACK_MatchCHI2);
   fChain->SetBranchAddress("pbar_TRACK_GhostProb", &pbar_TRACK_GhostProb, &b_pbar_TRACK_GhostProb);
   fChain->SetBranchAddress("pbar_TRACK_CloneDist", &pbar_TRACK_CloneDist, &b_pbar_TRACK_CloneDist);
   fChain->SetBranchAddress("pbar_TRACK_Likelihood", &pbar_TRACK_Likelihood, &b_pbar_TRACK_Likelihood);
   fChain->SetBranchAddress("pbar_X", &pbar_X, &b_pbar_X);
   fChain->SetBranchAddress("pbar_Y", &pbar_Y, &b_pbar_Y);
   fChain->SetBranchAddress("pbar_ETA", &pbar_ETA, &b_pbar_ETA);
   fChain->SetBranchAddress("pbar_PHI", &pbar_PHI, &b_pbar_PHI);
   fChain->SetBranchAddress("pi_MC12TuneV2_ProbNNe", &pi_MC12TuneV2_ProbNNe, &b_pi_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("pi_MC12TuneV2_ProbNNmu", &pi_MC12TuneV2_ProbNNmu, &b_pi_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("pi_MC12TuneV2_ProbNNpi", &pi_MC12TuneV2_ProbNNpi, &b_pi_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("pi_MC12TuneV2_ProbNNk", &pi_MC12TuneV2_ProbNNk, &b_pi_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("pi_MC12TuneV2_ProbNNp", &pi_MC12TuneV2_ProbNNp, &b_pi_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("pi_MC12TuneV2_ProbNNghost", &pi_MC12TuneV2_ProbNNghost, &b_pi_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("pi_MC12TuneV3_ProbNNe", &pi_MC12TuneV3_ProbNNe, &b_pi_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("pi_MC12TuneV3_ProbNNmu", &pi_MC12TuneV3_ProbNNmu, &b_pi_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("pi_MC12TuneV3_ProbNNpi", &pi_MC12TuneV3_ProbNNpi, &b_pi_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("pi_MC12TuneV3_ProbNNk", &pi_MC12TuneV3_ProbNNk, &b_pi_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("pi_MC12TuneV3_ProbNNp", &pi_MC12TuneV3_ProbNNp, &b_pi_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("pi_MC12TuneV3_ProbNNghost", &pi_MC12TuneV3_ProbNNghost, &b_pi_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("pi_MC12TuneV4_ProbNNe", &pi_MC12TuneV4_ProbNNe, &b_pi_MC12TuneV4_ProbNNe);
   fChain->SetBranchAddress("pi_MC12TuneV4_ProbNNmu", &pi_MC12TuneV4_ProbNNmu, &b_pi_MC12TuneV4_ProbNNmu);
   fChain->SetBranchAddress("pi_MC12TuneV4_ProbNNpi", &pi_MC12TuneV4_ProbNNpi, &b_pi_MC12TuneV4_ProbNNpi);
   fChain->SetBranchAddress("pi_MC12TuneV4_ProbNNk", &pi_MC12TuneV4_ProbNNk, &b_pi_MC12TuneV4_ProbNNk);
   fChain->SetBranchAddress("pi_MC12TuneV4_ProbNNp", &pi_MC12TuneV4_ProbNNp, &b_pi_MC12TuneV4_ProbNNp);
   fChain->SetBranchAddress("pi_MC12TuneV4_ProbNNghost", &pi_MC12TuneV4_ProbNNghost, &b_pi_MC12TuneV4_ProbNNghost);
   fChain->SetBranchAddress("pi_MC15TuneV1_ProbNNe", &pi_MC15TuneV1_ProbNNe, &b_pi_MC15TuneV1_ProbNNe);
   fChain->SetBranchAddress("pi_MC15TuneV1_ProbNNmu", &pi_MC15TuneV1_ProbNNmu, &b_pi_MC15TuneV1_ProbNNmu);
   fChain->SetBranchAddress("pi_MC15TuneV1_ProbNNpi", &pi_MC15TuneV1_ProbNNpi, &b_pi_MC15TuneV1_ProbNNpi);
   fChain->SetBranchAddress("pi_MC15TuneV1_ProbNNk", &pi_MC15TuneV1_ProbNNk, &b_pi_MC15TuneV1_ProbNNk);
   fChain->SetBranchAddress("pi_MC15TuneV1_ProbNNp", &pi_MC15TuneV1_ProbNNp, &b_pi_MC15TuneV1_ProbNNp);
   fChain->SetBranchAddress("pi_MC15TuneV1_ProbNNghost", &pi_MC15TuneV1_ProbNNghost, &b_pi_MC15TuneV1_ProbNNghost);
   fChain->SetBranchAddress("pi_CosTheta", &pi_CosTheta, &b_pi_CosTheta);
   fChain->SetBranchAddress("pi_OWNPV_X", &pi_OWNPV_X, &b_pi_OWNPV_X);
   fChain->SetBranchAddress("pi_OWNPV_Y", &pi_OWNPV_Y, &b_pi_OWNPV_Y);
   fChain->SetBranchAddress("pi_OWNPV_Z", &pi_OWNPV_Z, &b_pi_OWNPV_Z);
   fChain->SetBranchAddress("pi_OWNPV_XERR", &pi_OWNPV_XERR, &b_pi_OWNPV_XERR);
   fChain->SetBranchAddress("pi_OWNPV_YERR", &pi_OWNPV_YERR, &b_pi_OWNPV_YERR);
   fChain->SetBranchAddress("pi_OWNPV_ZERR", &pi_OWNPV_ZERR, &b_pi_OWNPV_ZERR);
   fChain->SetBranchAddress("pi_OWNPV_CHI2", &pi_OWNPV_CHI2, &b_pi_OWNPV_CHI2);
   fChain->SetBranchAddress("pi_OWNPV_NDOF", &pi_OWNPV_NDOF, &b_pi_OWNPV_NDOF);
   fChain->SetBranchAddress("pi_OWNPV_COV_", pi_OWNPV_COV_, &b_pi_OWNPV_COV_);
   fChain->SetBranchAddress("pi_IP_OWNPV", &pi_IP_OWNPV, &b_pi_IP_OWNPV);
   fChain->SetBranchAddress("pi_IPCHI2_OWNPV", &pi_IPCHI2_OWNPV, &b_pi_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pi_ORIVX_X", &pi_ORIVX_X, &b_pi_ORIVX_X);
   fChain->SetBranchAddress("pi_ORIVX_Y", &pi_ORIVX_Y, &b_pi_ORIVX_Y);
   fChain->SetBranchAddress("pi_ORIVX_Z", &pi_ORIVX_Z, &b_pi_ORIVX_Z);
   fChain->SetBranchAddress("pi_ORIVX_XERR", &pi_ORIVX_XERR, &b_pi_ORIVX_XERR);
   fChain->SetBranchAddress("pi_ORIVX_YERR", &pi_ORIVX_YERR, &b_pi_ORIVX_YERR);
   fChain->SetBranchAddress("pi_ORIVX_ZERR", &pi_ORIVX_ZERR, &b_pi_ORIVX_ZERR);
   fChain->SetBranchAddress("pi_ORIVX_CHI2", &pi_ORIVX_CHI2, &b_pi_ORIVX_CHI2);
   fChain->SetBranchAddress("pi_ORIVX_NDOF", &pi_ORIVX_NDOF, &b_pi_ORIVX_NDOF);
   fChain->SetBranchAddress("pi_ORIVX_COV_", pi_ORIVX_COV_, &b_pi_ORIVX_COV_);
   fChain->SetBranchAddress("pi_P", &pi_P, &b_pi_P);
   fChain->SetBranchAddress("pi_PT", &pi_PT, &b_pi_PT);
   fChain->SetBranchAddress("pi_PE", &pi_PE, &b_pi_PE);
   fChain->SetBranchAddress("pi_PX", &pi_PX, &b_pi_PX);
   fChain->SetBranchAddress("pi_PY", &pi_PY, &b_pi_PY);
   fChain->SetBranchAddress("pi_PZ", &pi_PZ, &b_pi_PZ);
   fChain->SetBranchAddress("pi_M", &pi_M, &b_pi_M);
   fChain->SetBranchAddress("pi_TRUEID", &pi_TRUEID, &b_pi_TRUEID);
   fChain->SetBranchAddress("pi_TRUECosTheta", &pi_TRUECosTheta, &b_pi_TRUECosTheta);
   fChain->SetBranchAddress("pi_MCP_numPseudoTypes", &pi_MCP_numPseudoTypes, &b_pi_MCP_numPseudoTypes);
   fChain->SetBranchAddress("pi_MCP_MCP_PseudoLen", &pi_MCP_MCP_PseudoLen, &b_pi_MCP_MCP_PseudoLen);
   fChain->SetBranchAddress("pi_MCP_PseudoTypes", &pi_MCP_PseudoTypes, &b_pi_MCP_PseudoTypes);
   fChain->SetBranchAddress("pi_MC_MOTHER_ID", &pi_MC_MOTHER_ID, &b_pi_MC_MOTHER_ID);
   fChain->SetBranchAddress("pi_MC_MOTHER_KEY", &pi_MC_MOTHER_KEY, &b_pi_MC_MOTHER_KEY);
   fChain->SetBranchAddress("pi_MC_GD_MOTHER_ID", &pi_MC_GD_MOTHER_ID, &b_pi_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("pi_MC_GD_MOTHER_KEY", &pi_MC_GD_MOTHER_KEY, &b_pi_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pi_MC_GD_GD_MOTHER_ID", &pi_MC_GD_GD_MOTHER_ID, &b_pi_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("pi_MC_GD_GD_MOTHER_KEY", &pi_MC_GD_GD_MOTHER_KEY, &b_pi_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("pi_TRUEP_E", &pi_TRUEP_E, &b_pi_TRUEP_E);
   fChain->SetBranchAddress("pi_TRUEP_X", &pi_TRUEP_X, &b_pi_TRUEP_X);
   fChain->SetBranchAddress("pi_TRUEP_Y", &pi_TRUEP_Y, &b_pi_TRUEP_Y);
   fChain->SetBranchAddress("pi_TRUEP_Z", &pi_TRUEP_Z, &b_pi_TRUEP_Z);
   fChain->SetBranchAddress("pi_TRUEPT", &pi_TRUEPT, &b_pi_TRUEPT);
   fChain->SetBranchAddress("pi_TRUEORIGINVERTEX_X", &pi_TRUEORIGINVERTEX_X, &b_pi_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("pi_TRUEORIGINVERTEX_Y", &pi_TRUEORIGINVERTEX_Y, &b_pi_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("pi_TRUEORIGINVERTEX_Z", &pi_TRUEORIGINVERTEX_Z, &b_pi_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("pi_TRUEENDVERTEX_X", &pi_TRUEENDVERTEX_X, &b_pi_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("pi_TRUEENDVERTEX_Y", &pi_TRUEENDVERTEX_Y, &b_pi_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("pi_TRUEENDVERTEX_Z", &pi_TRUEENDVERTEX_Z, &b_pi_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("pi_TRUEISSTABLE", &pi_TRUEISSTABLE, &b_pi_TRUEISSTABLE);
   fChain->SetBranchAddress("pi_TRUETAU", &pi_TRUETAU, &b_pi_TRUETAU);
   fChain->SetBranchAddress("pi_ID", &pi_ID, &b_pi_ID);
   fChain->SetBranchAddress("pi_MC_ISPROMPT", &pi_MC_ISPROMPT, &b_pi_MC_ISPROMPT);
   fChain->SetBranchAddress("pi_MC_LONGLIVED_ID", &pi_MC_LONGLIVED_ID, &b_pi_MC_LONGLIVED_ID);
   fChain->SetBranchAddress("pi_MC_LONGLIVED_KEY", &pi_MC_LONGLIVED_KEY, &b_pi_MC_LONGLIVED_KEY);
   fChain->SetBranchAddress("pi_Reconstructible", &pi_Reconstructible, &b_pi_Reconstructible);
   fChain->SetBranchAddress("pi_Reconstructed", &pi_Reconstructed, &b_pi_Reconstructed);
   fChain->SetBranchAddress("pi_ProtoParticles", &pi_ProtoParticles, &b_pi_ProtoParticles);
   fChain->SetBranchAddress("pi_PP_PX", pi_PP_PX, &b_pi_PP_PX);
   fChain->SetBranchAddress("pi_PP_PY", pi_PP_PY, &b_pi_PP_PY);
   fChain->SetBranchAddress("pi_PP_PZ", pi_PP_PZ, &b_pi_PP_PZ);
   fChain->SetBranchAddress("pi_PP_Weight", pi_PP_Weight, &b_pi_PP_Weight);
   fChain->SetBranchAddress("pi_PP_tr_pchi2", pi_PP_tr_pchi2, &b_pi_PP_tr_pchi2);
   fChain->SetBranchAddress("pi_PP_DLLe", pi_PP_DLLe, &b_pi_PP_DLLe);
   fChain->SetBranchAddress("pi_PP_DLLk", pi_PP_DLLk, &b_pi_PP_DLLk);
   fChain->SetBranchAddress("pi_PP_DLLp", pi_PP_DLLp, &b_pi_PP_DLLp);
   fChain->SetBranchAddress("pi_PP_DLLmu", pi_PP_DLLmu, &b_pi_PP_DLLmu);
   fChain->SetBranchAddress("pi_PIDe", &pi_PIDe, &b_pi_PIDe);
   fChain->SetBranchAddress("pi_PIDmu", &pi_PIDmu, &b_pi_PIDmu);
   fChain->SetBranchAddress("pi_PIDK", &pi_PIDK, &b_pi_PIDK);
   fChain->SetBranchAddress("pi_PIDp", &pi_PIDp, &b_pi_PIDp);
   fChain->SetBranchAddress("pi_PIDd", &pi_PIDd, &b_pi_PIDd);
   fChain->SetBranchAddress("pi_ProbNNe", &pi_ProbNNe, &b_pi_ProbNNe);
   fChain->SetBranchAddress("pi_ProbNNk", &pi_ProbNNk, &b_pi_ProbNNk);
   fChain->SetBranchAddress("pi_ProbNNp", &pi_ProbNNp, &b_pi_ProbNNp);
   fChain->SetBranchAddress("pi_ProbNNpi", &pi_ProbNNpi, &b_pi_ProbNNpi);
   fChain->SetBranchAddress("pi_ProbNNmu", &pi_ProbNNmu, &b_pi_ProbNNmu);
   fChain->SetBranchAddress("pi_ProbNNd", &pi_ProbNNd, &b_pi_ProbNNd);
   fChain->SetBranchAddress("pi_ProbNNghost", &pi_ProbNNghost, &b_pi_ProbNNghost);
   fChain->SetBranchAddress("pi_hasMuon", &pi_hasMuon, &b_pi_hasMuon);
   fChain->SetBranchAddress("pi_isMuon", &pi_isMuon, &b_pi_isMuon);
   fChain->SetBranchAddress("pi_hasRich", &pi_hasRich, &b_pi_hasRich);
   fChain->SetBranchAddress("pi_UsedRichAerogel", &pi_UsedRichAerogel, &b_pi_UsedRichAerogel);
   fChain->SetBranchAddress("pi_UsedRich1Gas", &pi_UsedRich1Gas, &b_pi_UsedRich1Gas);
   fChain->SetBranchAddress("pi_UsedRich2Gas", &pi_UsedRich2Gas, &b_pi_UsedRich2Gas);
   fChain->SetBranchAddress("pi_RichAboveElThres", &pi_RichAboveElThres, &b_pi_RichAboveElThres);
   fChain->SetBranchAddress("pi_RichAboveMuThres", &pi_RichAboveMuThres, &b_pi_RichAboveMuThres);
   fChain->SetBranchAddress("pi_RichAbovePiThres", &pi_RichAbovePiThres, &b_pi_RichAbovePiThres);
   fChain->SetBranchAddress("pi_RichAboveKaThres", &pi_RichAboveKaThres, &b_pi_RichAboveKaThres);
   fChain->SetBranchAddress("pi_RichAbovePrThres", &pi_RichAbovePrThres, &b_pi_RichAbovePrThres);
   fChain->SetBranchAddress("pi_hasCalo", &pi_hasCalo, &b_pi_hasCalo);
   fChain->SetBranchAddress("pi_L0Global_Dec", &pi_L0Global_Dec, &b_pi_L0Global_Dec);
   fChain->SetBranchAddress("pi_L0Global_TIS", &pi_L0Global_TIS, &b_pi_L0Global_TIS);
   fChain->SetBranchAddress("pi_L0Global_TOS", &pi_L0Global_TOS, &b_pi_L0Global_TOS);
   fChain->SetBranchAddress("pi_Hlt1Global_Dec", &pi_Hlt1Global_Dec, &b_pi_Hlt1Global_Dec);
   fChain->SetBranchAddress("pi_Hlt1Global_TIS", &pi_Hlt1Global_TIS, &b_pi_Hlt1Global_TIS);
   fChain->SetBranchAddress("pi_Hlt1Global_TOS", &pi_Hlt1Global_TOS, &b_pi_Hlt1Global_TOS);
   fChain->SetBranchAddress("pi_Hlt1Phys_Dec", &pi_Hlt1Phys_Dec, &b_pi_Hlt1Phys_Dec);
   fChain->SetBranchAddress("pi_Hlt1Phys_TIS", &pi_Hlt1Phys_TIS, &b_pi_Hlt1Phys_TIS);
   fChain->SetBranchAddress("pi_Hlt1Phys_TOS", &pi_Hlt1Phys_TOS, &b_pi_Hlt1Phys_TOS);
   fChain->SetBranchAddress("pi_Hlt2Global_Dec", &pi_Hlt2Global_Dec, &b_pi_Hlt2Global_Dec);
   fChain->SetBranchAddress("pi_Hlt2Global_TIS", &pi_Hlt2Global_TIS, &b_pi_Hlt2Global_TIS);
   fChain->SetBranchAddress("pi_Hlt2Global_TOS", &pi_Hlt2Global_TOS, &b_pi_Hlt2Global_TOS);
   fChain->SetBranchAddress("pi_Hlt2Phys_Dec", &pi_Hlt2Phys_Dec, &b_pi_Hlt2Phys_Dec);
   fChain->SetBranchAddress("pi_Hlt2Phys_TIS", &pi_Hlt2Phys_TIS, &b_pi_Hlt2Phys_TIS);
   fChain->SetBranchAddress("pi_Hlt2Phys_TOS", &pi_Hlt2Phys_TOS, &b_pi_Hlt2Phys_TOS);
   fChain->SetBranchAddress("pi_TRACK_Type", &pi_TRACK_Type, &b_pi_TRACK_Type);
   fChain->SetBranchAddress("pi_TRACK_Key", &pi_TRACK_Key, &b_pi_TRACK_Key);
   fChain->SetBranchAddress("pi_TRACK_CHI2NDOF", &pi_TRACK_CHI2NDOF, &b_pi_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pi_TRACK_PCHI2", &pi_TRACK_PCHI2, &b_pi_TRACK_PCHI2);
   fChain->SetBranchAddress("pi_TRACK_MatchCHI2", &pi_TRACK_MatchCHI2, &b_pi_TRACK_MatchCHI2);
   fChain->SetBranchAddress("pi_TRACK_GhostProb", &pi_TRACK_GhostProb, &b_pi_TRACK_GhostProb);
   fChain->SetBranchAddress("pi_TRACK_CloneDist", &pi_TRACK_CloneDist, &b_pi_TRACK_CloneDist);
   fChain->SetBranchAddress("pi_TRACK_Likelihood", &pi_TRACK_Likelihood, &b_pi_TRACK_Likelihood);
   fChain->SetBranchAddress("pi_X", &pi_X, &b_pi_X);
   fChain->SetBranchAddress("pi_Y", &pi_Y, &b_pi_Y);
   fChain->SetBranchAddress("pi_ETA", &pi_ETA, &b_pi_ETA);
   fChain->SetBranchAddress("pi_PHI", &pi_PHI, &b_pi_PHI);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLT1TCK", &HLT1TCK, &b_HLT1TCK);
   fChain->SetBranchAddress("HLT2TCK", &HLT2TCK, &b_HLT2TCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_Kplus_ID", &B0_PVALLFit_Dplus_Kplus_ID, &b_B0_PVALLFit_Dplus_Kplus_ID);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_Kplus_PE", &B0_PVALLFit_Dplus_Kplus_PE, &b_B0_PVALLFit_Dplus_Kplus_PE);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_Kplus_PX", &B0_PVALLFit_Dplus_Kplus_PX, &b_B0_PVALLFit_Dplus_Kplus_PX);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_Kplus_PY", &B0_PVALLFit_Dplus_Kplus_PY, &b_B0_PVALLFit_Dplus_Kplus_PY);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_Kplus_PZ", &B0_PVALLFit_Dplus_Kplus_PZ, &b_B0_PVALLFit_Dplus_Kplus_PZ);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_M", &B0_PVALLFit_Dplus_M, &b_B0_PVALLFit_Dplus_M);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_MERR", &B0_PVALLFit_Dplus_MERR, &b_B0_PVALLFit_Dplus_MERR);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_P", &B0_PVALLFit_Dplus_P, &b_B0_PVALLFit_Dplus_P);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_PERR", &B0_PVALLFit_Dplus_PERR, &b_B0_PVALLFit_Dplus_PERR);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_ctau", &B0_PVALLFit_Dplus_ctau, &b_B0_PVALLFit_Dplus_ctau);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_ctauErr", &B0_PVALLFit_Dplus_ctauErr, &b_B0_PVALLFit_Dplus_ctauErr);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_decayLength", &B0_PVALLFit_Dplus_decayLength, &b_B0_PVALLFit_Dplus_decayLength);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_decayLengthErr", &B0_PVALLFit_Dplus_decayLengthErr, &b_B0_PVALLFit_Dplus_decayLengthErr);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_0_ID", &B0_PVALLFit_Dplus_piplus_0_ID, &b_B0_PVALLFit_Dplus_piplus_0_ID);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_0_PE", &B0_PVALLFit_Dplus_piplus_0_PE, &b_B0_PVALLFit_Dplus_piplus_0_PE);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_0_PX", &B0_PVALLFit_Dplus_piplus_0_PX, &b_B0_PVALLFit_Dplus_piplus_0_PX);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_0_PY", &B0_PVALLFit_Dplus_piplus_0_PY, &b_B0_PVALLFit_Dplus_piplus_0_PY);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_0_PZ", &B0_PVALLFit_Dplus_piplus_0_PZ, &b_B0_PVALLFit_Dplus_piplus_0_PZ);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_ID", &B0_PVALLFit_Dplus_piplus_ID, &b_B0_PVALLFit_Dplus_piplus_ID);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_PE", &B0_PVALLFit_Dplus_piplus_PE, &b_B0_PVALLFit_Dplus_piplus_PE);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_PX", &B0_PVALLFit_Dplus_piplus_PX, &b_B0_PVALLFit_Dplus_piplus_PX);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_PY", &B0_PVALLFit_Dplus_piplus_PY, &b_B0_PVALLFit_Dplus_piplus_PY);
   fChain->SetBranchAddress("B0_PVALLFit_Dplus_piplus_PZ", &B0_PVALLFit_Dplus_piplus_PZ, &b_B0_PVALLFit_Dplus_piplus_PZ);
   fChain->SetBranchAddress("B0_PVALLFit_M", &B0_PVALLFit_M, &b_B0_PVALLFit_M);
   fChain->SetBranchAddress("B0_PVALLFit_MERR", &B0_PVALLFit_MERR, &b_B0_PVALLFit_MERR);
   fChain->SetBranchAddress("B0_PVALLFit_P", &B0_PVALLFit_P, &b_B0_PVALLFit_P);
   fChain->SetBranchAddress("B0_PVALLFit_PERR", &B0_PVALLFit_PERR, &b_B0_PVALLFit_PERR);
   fChain->SetBranchAddress("B0_PVALLFit_PV_X", &B0_PVALLFit_PV_X, &b_B0_PVALLFit_PV_X);
   fChain->SetBranchAddress("B0_PVALLFit_PV_Y", &B0_PVALLFit_PV_Y, &b_B0_PVALLFit_PV_Y);
   fChain->SetBranchAddress("B0_PVALLFit_PV_Z", &B0_PVALLFit_PV_Z, &b_B0_PVALLFit_PV_Z);
   fChain->SetBranchAddress("B0_PVALLFit_PV_key", &B0_PVALLFit_PV_key, &b_B0_PVALLFit_PV_key);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_M", &B0_PVALLFit_a_1_1260_plus_M, &b_B0_PVALLFit_a_1_1260_plus_M);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_MERR", &B0_PVALLFit_a_1_1260_plus_MERR, &b_B0_PVALLFit_a_1_1260_plus_MERR);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_P", &B0_PVALLFit_a_1_1260_plus_P, &b_B0_PVALLFit_a_1_1260_plus_P);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_PERR", &B0_PVALLFit_a_1_1260_plus_PERR, &b_B0_PVALLFit_a_1_1260_plus_PERR);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_ctau", &B0_PVALLFit_a_1_1260_plus_ctau, &b_B0_PVALLFit_a_1_1260_plus_ctau);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_ctauErr", &B0_PVALLFit_a_1_1260_plus_ctauErr, &b_B0_PVALLFit_a_1_1260_plus_ctauErr);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_decayLength", &B0_PVALLFit_a_1_1260_plus_decayLength, &b_B0_PVALLFit_a_1_1260_plus_decayLength);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_decayLengthErr", &B0_PVALLFit_a_1_1260_plus_decayLengthErr, &b_B0_PVALLFit_a_1_1260_plus_decayLengthErr);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_piplus_ID", &B0_PVALLFit_a_1_1260_plus_piplus_ID, &b_B0_PVALLFit_a_1_1260_plus_piplus_ID);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_piplus_PE", &B0_PVALLFit_a_1_1260_plus_piplus_PE, &b_B0_PVALLFit_a_1_1260_plus_piplus_PE);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_piplus_PX", &B0_PVALLFit_a_1_1260_plus_piplus_PX, &b_B0_PVALLFit_a_1_1260_plus_piplus_PX);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_piplus_PY", &B0_PVALLFit_a_1_1260_plus_piplus_PY, &b_B0_PVALLFit_a_1_1260_plus_piplus_PY);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_piplus_PZ", &B0_PVALLFit_a_1_1260_plus_piplus_PZ, &b_B0_PVALLFit_a_1_1260_plus_piplus_PZ);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_0_ID", &B0_PVALLFit_a_1_1260_plus_pplus_0_ID, &b_B0_PVALLFit_a_1_1260_plus_pplus_0_ID);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_0_PE", &B0_PVALLFit_a_1_1260_plus_pplus_0_PE, &b_B0_PVALLFit_a_1_1260_plus_pplus_0_PE);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_0_PX", &B0_PVALLFit_a_1_1260_plus_pplus_0_PX, &b_B0_PVALLFit_a_1_1260_plus_pplus_0_PX);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_0_PY", &B0_PVALLFit_a_1_1260_plus_pplus_0_PY, &b_B0_PVALLFit_a_1_1260_plus_pplus_0_PY);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_0_PZ", &B0_PVALLFit_a_1_1260_plus_pplus_0_PZ, &b_B0_PVALLFit_a_1_1260_plus_pplus_0_PZ);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_ID", &B0_PVALLFit_a_1_1260_plus_pplus_ID, &b_B0_PVALLFit_a_1_1260_plus_pplus_ID);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_PE", &B0_PVALLFit_a_1_1260_plus_pplus_PE, &b_B0_PVALLFit_a_1_1260_plus_pplus_PE);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_PX", &B0_PVALLFit_a_1_1260_plus_pplus_PX, &b_B0_PVALLFit_a_1_1260_plus_pplus_PX);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_PY", &B0_PVALLFit_a_1_1260_plus_pplus_PY, &b_B0_PVALLFit_a_1_1260_plus_pplus_PY);
   fChain->SetBranchAddress("B0_PVALLFit_a_1_1260_plus_pplus_PZ", &B0_PVALLFit_a_1_1260_plus_pplus_PZ, &b_B0_PVALLFit_a_1_1260_plus_pplus_PZ);
   fChain->SetBranchAddress("B0_PVALLFit_chi2", &B0_PVALLFit_chi2, &b_B0_PVALLFit_chi2);
   fChain->SetBranchAddress("B0_PVALLFit_ctau", &B0_PVALLFit_ctau, &b_B0_PVALLFit_ctau);
   fChain->SetBranchAddress("B0_PVALLFit_ctauErr", &B0_PVALLFit_ctauErr, &b_B0_PVALLFit_ctauErr);
   fChain->SetBranchAddress("B0_PVALLFit_decayLength", &B0_PVALLFit_decayLength, &b_B0_PVALLFit_decayLength);
   fChain->SetBranchAddress("B0_PVALLFit_decayLengthErr", &B0_PVALLFit_decayLengthErr, &b_B0_PVALLFit_decayLengthErr);
   fChain->SetBranchAddress("B0_PVALLFit_nDOF", &B0_PVALLFit_nDOF, &b_B0_PVALLFit_nDOF);
   fChain->SetBranchAddress("B0_PVALLFit_nIter", &B0_PVALLFit_nIter, &b_B0_PVALLFit_nIter);
   fChain->SetBranchAddress("B0_PVALLFit_status", &B0_PVALLFit_status, &b_B0_PVALLFit_status);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_Kplus_ID", &B0_PVDFit_Dplus_Kplus_ID, &b_B0_PVDFit_Dplus_Kplus_ID);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_Kplus_PE", &B0_PVDFit_Dplus_Kplus_PE, &b_B0_PVDFit_Dplus_Kplus_PE);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_Kplus_PX", &B0_PVDFit_Dplus_Kplus_PX, &b_B0_PVDFit_Dplus_Kplus_PX);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_Kplus_PY", &B0_PVDFit_Dplus_Kplus_PY, &b_B0_PVDFit_Dplus_Kplus_PY);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_Kplus_PZ", &B0_PVDFit_Dplus_Kplus_PZ, &b_B0_PVDFit_Dplus_Kplus_PZ);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_M", &B0_PVDFit_Dplus_M, &b_B0_PVDFit_Dplus_M);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_MERR", &B0_PVDFit_Dplus_MERR, &b_B0_PVDFit_Dplus_MERR);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_P", &B0_PVDFit_Dplus_P, &b_B0_PVDFit_Dplus_P);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_PERR", &B0_PVDFit_Dplus_PERR, &b_B0_PVDFit_Dplus_PERR);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_ctau", &B0_PVDFit_Dplus_ctau, &b_B0_PVDFit_Dplus_ctau);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_ctauErr", &B0_PVDFit_Dplus_ctauErr, &b_B0_PVDFit_Dplus_ctauErr);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_decayLength", &B0_PVDFit_Dplus_decayLength, &b_B0_PVDFit_Dplus_decayLength);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_decayLengthErr", &B0_PVDFit_Dplus_decayLengthErr, &b_B0_PVDFit_Dplus_decayLengthErr);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_0_ID", &B0_PVDFit_Dplus_piplus_0_ID, &b_B0_PVDFit_Dplus_piplus_0_ID);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_0_PE", &B0_PVDFit_Dplus_piplus_0_PE, &b_B0_PVDFit_Dplus_piplus_0_PE);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_0_PX", &B0_PVDFit_Dplus_piplus_0_PX, &b_B0_PVDFit_Dplus_piplus_0_PX);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_0_PY", &B0_PVDFit_Dplus_piplus_0_PY, &b_B0_PVDFit_Dplus_piplus_0_PY);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_0_PZ", &B0_PVDFit_Dplus_piplus_0_PZ, &b_B0_PVDFit_Dplus_piplus_0_PZ);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_ID", &B0_PVDFit_Dplus_piplus_ID, &b_B0_PVDFit_Dplus_piplus_ID);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_PE", &B0_PVDFit_Dplus_piplus_PE, &b_B0_PVDFit_Dplus_piplus_PE);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_PX", &B0_PVDFit_Dplus_piplus_PX, &b_B0_PVDFit_Dplus_piplus_PX);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_PY", &B0_PVDFit_Dplus_piplus_PY, &b_B0_PVDFit_Dplus_piplus_PY);
   fChain->SetBranchAddress("B0_PVDFit_Dplus_piplus_PZ", &B0_PVDFit_Dplus_piplus_PZ, &b_B0_PVDFit_Dplus_piplus_PZ);
   fChain->SetBranchAddress("B0_PVDFit_M", &B0_PVDFit_M, &b_B0_PVDFit_M);
   fChain->SetBranchAddress("B0_PVDFit_MERR", &B0_PVDFit_MERR, &b_B0_PVDFit_MERR);
   fChain->SetBranchAddress("B0_PVDFit_P", &B0_PVDFit_P, &b_B0_PVDFit_P);
   fChain->SetBranchAddress("B0_PVDFit_PERR", &B0_PVDFit_PERR, &b_B0_PVDFit_PERR);
   fChain->SetBranchAddress("B0_PVDFit_PV_X", &B0_PVDFit_PV_X, &b_B0_PVDFit_PV_X);
   fChain->SetBranchAddress("B0_PVDFit_PV_Y", &B0_PVDFit_PV_Y, &b_B0_PVDFit_PV_Y);
   fChain->SetBranchAddress("B0_PVDFit_PV_Z", &B0_PVDFit_PV_Z, &b_B0_PVDFit_PV_Z);
   fChain->SetBranchAddress("B0_PVDFit_PV_key", &B0_PVDFit_PV_key, &b_B0_PVDFit_PV_key);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_M", &B0_PVDFit_a_1_1260_plus_M, &b_B0_PVDFit_a_1_1260_plus_M);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_MERR", &B0_PVDFit_a_1_1260_plus_MERR, &b_B0_PVDFit_a_1_1260_plus_MERR);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_P", &B0_PVDFit_a_1_1260_plus_P, &b_B0_PVDFit_a_1_1260_plus_P);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_PERR", &B0_PVDFit_a_1_1260_plus_PERR, &b_B0_PVDFit_a_1_1260_plus_PERR);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_ctau", &B0_PVDFit_a_1_1260_plus_ctau, &b_B0_PVDFit_a_1_1260_plus_ctau);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_ctauErr", &B0_PVDFit_a_1_1260_plus_ctauErr, &b_B0_PVDFit_a_1_1260_plus_ctauErr);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_decayLength", &B0_PVDFit_a_1_1260_plus_decayLength, &b_B0_PVDFit_a_1_1260_plus_decayLength);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_decayLengthErr", &B0_PVDFit_a_1_1260_plus_decayLengthErr, &b_B0_PVDFit_a_1_1260_plus_decayLengthErr);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_piplus_ID", &B0_PVDFit_a_1_1260_plus_piplus_ID, &b_B0_PVDFit_a_1_1260_plus_piplus_ID);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_piplus_PE", &B0_PVDFit_a_1_1260_plus_piplus_PE, &b_B0_PVDFit_a_1_1260_plus_piplus_PE);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_piplus_PX", &B0_PVDFit_a_1_1260_plus_piplus_PX, &b_B0_PVDFit_a_1_1260_plus_piplus_PX);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_piplus_PY", &B0_PVDFit_a_1_1260_plus_piplus_PY, &b_B0_PVDFit_a_1_1260_plus_piplus_PY);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_piplus_PZ", &B0_PVDFit_a_1_1260_plus_piplus_PZ, &b_B0_PVDFit_a_1_1260_plus_piplus_PZ);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_0_ID", &B0_PVDFit_a_1_1260_plus_pplus_0_ID, &b_B0_PVDFit_a_1_1260_plus_pplus_0_ID);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_0_PE", &B0_PVDFit_a_1_1260_plus_pplus_0_PE, &b_B0_PVDFit_a_1_1260_plus_pplus_0_PE);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_0_PX", &B0_PVDFit_a_1_1260_plus_pplus_0_PX, &b_B0_PVDFit_a_1_1260_plus_pplus_0_PX);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_0_PY", &B0_PVDFit_a_1_1260_plus_pplus_0_PY, &b_B0_PVDFit_a_1_1260_plus_pplus_0_PY);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_0_PZ", &B0_PVDFit_a_1_1260_plus_pplus_0_PZ, &b_B0_PVDFit_a_1_1260_plus_pplus_0_PZ);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_ID", &B0_PVDFit_a_1_1260_plus_pplus_ID, &b_B0_PVDFit_a_1_1260_plus_pplus_ID);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_PE", &B0_PVDFit_a_1_1260_plus_pplus_PE, &b_B0_PVDFit_a_1_1260_plus_pplus_PE);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_PX", &B0_PVDFit_a_1_1260_plus_pplus_PX, &b_B0_PVDFit_a_1_1260_plus_pplus_PX);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_PY", &B0_PVDFit_a_1_1260_plus_pplus_PY, &b_B0_PVDFit_a_1_1260_plus_pplus_PY);
   fChain->SetBranchAddress("B0_PVDFit_a_1_1260_plus_pplus_PZ", &B0_PVDFit_a_1_1260_plus_pplus_PZ, &b_B0_PVDFit_a_1_1260_plus_pplus_PZ);
   fChain->SetBranchAddress("B0_PVDFit_chi2", &B0_PVDFit_chi2, &b_B0_PVDFit_chi2);
   fChain->SetBranchAddress("B0_PVDFit_ctau", &B0_PVDFit_ctau, &b_B0_PVDFit_ctau);
   fChain->SetBranchAddress("B0_PVDFit_ctauErr", &B0_PVDFit_ctauErr, &b_B0_PVDFit_ctauErr);
   fChain->SetBranchAddress("B0_PVDFit_decayLength", &B0_PVDFit_decayLength, &b_B0_PVDFit_decayLength);
   fChain->SetBranchAddress("B0_PVDFit_decayLengthErr", &B0_PVDFit_decayLengthErr, &b_B0_PVDFit_decayLengthErr);
   fChain->SetBranchAddress("B0_PVDFit_nDOF", &B0_PVDFit_nDOF, &b_B0_PVDFit_nDOF);
   fChain->SetBranchAddress("B0_PVDFit_nIter", &B0_PVDFit_nIter, &b_B0_PVDFit_nIter);
   fChain->SetBranchAddress("B0_PVDFit_status", &B0_PVDFit_status, &b_B0_PVDFit_status);
   fChain->SetBranchAddress("B0_PVFit_Dplus_Kplus_ID", &B0_PVFit_Dplus_Kplus_ID, &b_B0_PVFit_Dplus_Kplus_ID);
   fChain->SetBranchAddress("B0_PVFit_Dplus_Kplus_PE", &B0_PVFit_Dplus_Kplus_PE, &b_B0_PVFit_Dplus_Kplus_PE);
   fChain->SetBranchAddress("B0_PVFit_Dplus_Kplus_PX", &B0_PVFit_Dplus_Kplus_PX, &b_B0_PVFit_Dplus_Kplus_PX);
   fChain->SetBranchAddress("B0_PVFit_Dplus_Kplus_PY", &B0_PVFit_Dplus_Kplus_PY, &b_B0_PVFit_Dplus_Kplus_PY);
   fChain->SetBranchAddress("B0_PVFit_Dplus_Kplus_PZ", &B0_PVFit_Dplus_Kplus_PZ, &b_B0_PVFit_Dplus_Kplus_PZ);
   fChain->SetBranchAddress("B0_PVFit_Dplus_M", &B0_PVFit_Dplus_M, &b_B0_PVFit_Dplus_M);
   fChain->SetBranchAddress("B0_PVFit_Dplus_MERR", &B0_PVFit_Dplus_MERR, &b_B0_PVFit_Dplus_MERR);
   fChain->SetBranchAddress("B0_PVFit_Dplus_P", &B0_PVFit_Dplus_P, &b_B0_PVFit_Dplus_P);
   fChain->SetBranchAddress("B0_PVFit_Dplus_PERR", &B0_PVFit_Dplus_PERR, &b_B0_PVFit_Dplus_PERR);
   fChain->SetBranchAddress("B0_PVFit_Dplus_ctau", &B0_PVFit_Dplus_ctau, &b_B0_PVFit_Dplus_ctau);
   fChain->SetBranchAddress("B0_PVFit_Dplus_ctauErr", &B0_PVFit_Dplus_ctauErr, &b_B0_PVFit_Dplus_ctauErr);
   fChain->SetBranchAddress("B0_PVFit_Dplus_decayLength", &B0_PVFit_Dplus_decayLength, &b_B0_PVFit_Dplus_decayLength);
   fChain->SetBranchAddress("B0_PVFit_Dplus_decayLengthErr", &B0_PVFit_Dplus_decayLengthErr, &b_B0_PVFit_Dplus_decayLengthErr);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_0_ID", &B0_PVFit_Dplus_piplus_0_ID, &b_B0_PVFit_Dplus_piplus_0_ID);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_0_PE", &B0_PVFit_Dplus_piplus_0_PE, &b_B0_PVFit_Dplus_piplus_0_PE);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_0_PX", &B0_PVFit_Dplus_piplus_0_PX, &b_B0_PVFit_Dplus_piplus_0_PX);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_0_PY", &B0_PVFit_Dplus_piplus_0_PY, &b_B0_PVFit_Dplus_piplus_0_PY);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_0_PZ", &B0_PVFit_Dplus_piplus_0_PZ, &b_B0_PVFit_Dplus_piplus_0_PZ);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_ID", &B0_PVFit_Dplus_piplus_ID, &b_B0_PVFit_Dplus_piplus_ID);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_PE", &B0_PVFit_Dplus_piplus_PE, &b_B0_PVFit_Dplus_piplus_PE);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_PX", &B0_PVFit_Dplus_piplus_PX, &b_B0_PVFit_Dplus_piplus_PX);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_PY", &B0_PVFit_Dplus_piplus_PY, &b_B0_PVFit_Dplus_piplus_PY);
   fChain->SetBranchAddress("B0_PVFit_Dplus_piplus_PZ", &B0_PVFit_Dplus_piplus_PZ, &b_B0_PVFit_Dplus_piplus_PZ);
   fChain->SetBranchAddress("B0_PVFit_M", &B0_PVFit_M, &b_B0_PVFit_M);
   fChain->SetBranchAddress("B0_PVFit_MERR", &B0_PVFit_MERR, &b_B0_PVFit_MERR);
   fChain->SetBranchAddress("B0_PVFit_P", &B0_PVFit_P, &b_B0_PVFit_P);
   fChain->SetBranchAddress("B0_PVFit_PERR", &B0_PVFit_PERR, &b_B0_PVFit_PERR);
   fChain->SetBranchAddress("B0_PVFit_PV_X", &B0_PVFit_PV_X, &b_B0_PVFit_PV_X);
   fChain->SetBranchAddress("B0_PVFit_PV_Y", &B0_PVFit_PV_Y, &b_B0_PVFit_PV_Y);
   fChain->SetBranchAddress("B0_PVFit_PV_Z", &B0_PVFit_PV_Z, &b_B0_PVFit_PV_Z);
   fChain->SetBranchAddress("B0_PVFit_PV_key", &B0_PVFit_PV_key, &b_B0_PVFit_PV_key);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_M", &B0_PVFit_a_1_1260_plus_M, &b_B0_PVFit_a_1_1260_plus_M);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_MERR", &B0_PVFit_a_1_1260_plus_MERR, &b_B0_PVFit_a_1_1260_plus_MERR);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_P", &B0_PVFit_a_1_1260_plus_P, &b_B0_PVFit_a_1_1260_plus_P);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_PERR", &B0_PVFit_a_1_1260_plus_PERR, &b_B0_PVFit_a_1_1260_plus_PERR);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_ctau", &B0_PVFit_a_1_1260_plus_ctau, &b_B0_PVFit_a_1_1260_plus_ctau);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_ctauErr", &B0_PVFit_a_1_1260_plus_ctauErr, &b_B0_PVFit_a_1_1260_plus_ctauErr);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_decayLength", &B0_PVFit_a_1_1260_plus_decayLength, &b_B0_PVFit_a_1_1260_plus_decayLength);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_decayLengthErr", &B0_PVFit_a_1_1260_plus_decayLengthErr, &b_B0_PVFit_a_1_1260_plus_decayLengthErr);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_piplus_ID", &B0_PVFit_a_1_1260_plus_piplus_ID, &b_B0_PVFit_a_1_1260_plus_piplus_ID);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_piplus_PE", &B0_PVFit_a_1_1260_plus_piplus_PE, &b_B0_PVFit_a_1_1260_plus_piplus_PE);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_piplus_PX", &B0_PVFit_a_1_1260_plus_piplus_PX, &b_B0_PVFit_a_1_1260_plus_piplus_PX);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_piplus_PY", &B0_PVFit_a_1_1260_plus_piplus_PY, &b_B0_PVFit_a_1_1260_plus_piplus_PY);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_piplus_PZ", &B0_PVFit_a_1_1260_plus_piplus_PZ, &b_B0_PVFit_a_1_1260_plus_piplus_PZ);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_0_ID", &B0_PVFit_a_1_1260_plus_pplus_0_ID, &b_B0_PVFit_a_1_1260_plus_pplus_0_ID);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_0_PE", &B0_PVFit_a_1_1260_plus_pplus_0_PE, &b_B0_PVFit_a_1_1260_plus_pplus_0_PE);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_0_PX", &B0_PVFit_a_1_1260_plus_pplus_0_PX, &b_B0_PVFit_a_1_1260_plus_pplus_0_PX);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_0_PY", &B0_PVFit_a_1_1260_plus_pplus_0_PY, &b_B0_PVFit_a_1_1260_plus_pplus_0_PY);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_0_PZ", &B0_PVFit_a_1_1260_plus_pplus_0_PZ, &b_B0_PVFit_a_1_1260_plus_pplus_0_PZ);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_ID", &B0_PVFit_a_1_1260_plus_pplus_ID, &b_B0_PVFit_a_1_1260_plus_pplus_ID);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_PE", &B0_PVFit_a_1_1260_plus_pplus_PE, &b_B0_PVFit_a_1_1260_plus_pplus_PE);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_PX", &B0_PVFit_a_1_1260_plus_pplus_PX, &b_B0_PVFit_a_1_1260_plus_pplus_PX);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_PY", &B0_PVFit_a_1_1260_plus_pplus_PY, &b_B0_PVFit_a_1_1260_plus_pplus_PY);
   fChain->SetBranchAddress("B0_PVFit_a_1_1260_plus_pplus_PZ", &B0_PVFit_a_1_1260_plus_pplus_PZ, &b_B0_PVFit_a_1_1260_plus_pplus_PZ);
   fChain->SetBranchAddress("B0_PVFit_chi2", &B0_PVFit_chi2, &b_B0_PVFit_chi2);
   fChain->SetBranchAddress("B0_PVFit_ctau", &B0_PVFit_ctau, &b_B0_PVFit_ctau);
   fChain->SetBranchAddress("B0_PVFit_ctauErr", &B0_PVFit_ctauErr, &b_B0_PVFit_ctauErr);
   fChain->SetBranchAddress("B0_PVFit_decayLength", &B0_PVFit_decayLength, &b_B0_PVFit_decayLength);
   fChain->SetBranchAddress("B0_PVFit_decayLengthErr", &B0_PVFit_decayLengthErr, &b_B0_PVFit_decayLengthErr);
   fChain->SetBranchAddress("B0_PVFit_nDOF", &B0_PVFit_nDOF, &b_B0_PVFit_nDOF);
   fChain->SetBranchAddress("B0_PVFit_nIter", &B0_PVFit_nIter, &b_B0_PVFit_nIter);
   fChain->SetBranchAddress("B0_PVFit_status", &B0_PVFit_status, &b_B0_PVFit_status);
   fChain->SetBranchAddress("K_ProbNNk_corr", &K_ProbNNk_corr, &b_K_ProbNNk_corr);
   fChain->SetBranchAddress("K_ProbNNk_corr_calibstat", &K_ProbNNk_corr_calibstat, &b_K_ProbNNk_corr_calibstat);
   fChain->SetBranchAddress("K_ProbNNk_corr_mcstat", &K_ProbNNk_corr_mcstat, &b_K_ProbNNk_corr_mcstat);
   fChain->SetBranchAddress("K_ProbNNpi_corr", &K_ProbNNpi_corr, &b_K_ProbNNpi_corr);
   fChain->SetBranchAddress("K_ProbNNpi_corr_calibstat", &K_ProbNNpi_corr_calibstat, &b_K_ProbNNpi_corr_calibstat);
   fChain->SetBranchAddress("K_ProbNNpi_corr_mcstat", &K_ProbNNpi_corr_mcstat, &b_K_ProbNNpi_corr_mcstat);
   fChain->SetBranchAddress("K_ProbNNp_corr", &K_ProbNNp_corr, &b_K_ProbNNp_corr);
   fChain->SetBranchAddress("K_ProbNNp_corr_calibstat", &K_ProbNNp_corr_calibstat, &b_K_ProbNNp_corr_calibstat);
   fChain->SetBranchAddress("K_ProbNNp_corr_mcstat", &K_ProbNNp_corr_mcstat, &b_K_ProbNNp_corr_mcstat);
   fChain->SetBranchAddress("pi1_ProbNNk_corr", &pi1_ProbNNk_corr, &b_pi1_ProbNNk_corr);
   fChain->SetBranchAddress("pi1_ProbNNk_corr_calibstat", &pi1_ProbNNk_corr_calibstat, &b_pi1_ProbNNk_corr_calibstat);
   fChain->SetBranchAddress("pi1_ProbNNk_corr_mcstat", &pi1_ProbNNk_corr_mcstat, &b_pi1_ProbNNk_corr_mcstat);
   fChain->SetBranchAddress("pi1_ProbNNpi_corr", &pi1_ProbNNpi_corr, &b_pi1_ProbNNpi_corr);
   fChain->SetBranchAddress("pi1_ProbNNpi_corr_calibstat", &pi1_ProbNNpi_corr_calibstat, &b_pi1_ProbNNpi_corr_calibstat);
   fChain->SetBranchAddress("pi1_ProbNNpi_corr_mcstat", &pi1_ProbNNpi_corr_mcstat, &b_pi1_ProbNNpi_corr_mcstat);
   fChain->SetBranchAddress("pi1_ProbNNp_corr", &pi1_ProbNNp_corr, &b_pi1_ProbNNp_corr);
   fChain->SetBranchAddress("pi1_ProbNNp_corr_calibstat", &pi1_ProbNNp_corr_calibstat, &b_pi1_ProbNNp_corr_calibstat);
   fChain->SetBranchAddress("pi1_ProbNNp_corr_mcstat", &pi1_ProbNNp_corr_mcstat, &b_pi1_ProbNNp_corr_mcstat);
   fChain->SetBranchAddress("pi2_ProbNNk_corr", &pi2_ProbNNk_corr, &b_pi2_ProbNNk_corr);
   fChain->SetBranchAddress("pi2_ProbNNk_corr_calibstat", &pi2_ProbNNk_corr_calibstat, &b_pi2_ProbNNk_corr_calibstat);
   fChain->SetBranchAddress("pi2_ProbNNk_corr_mcstat", &pi2_ProbNNk_corr_mcstat, &b_pi2_ProbNNk_corr_mcstat);
   fChain->SetBranchAddress("pi2_ProbNNpi_corr", &pi2_ProbNNpi_corr, &b_pi2_ProbNNpi_corr);
   fChain->SetBranchAddress("pi2_ProbNNpi_corr_calibstat", &pi2_ProbNNpi_corr_calibstat, &b_pi2_ProbNNpi_corr_calibstat);
   fChain->SetBranchAddress("pi2_ProbNNpi_corr_mcstat", &pi2_ProbNNpi_corr_mcstat, &b_pi2_ProbNNpi_corr_mcstat);
   fChain->SetBranchAddress("pi2_ProbNNp_corr", &pi2_ProbNNp_corr, &b_pi2_ProbNNp_corr);
   fChain->SetBranchAddress("pi2_ProbNNp_corr_calibstat", &pi2_ProbNNp_corr_calibstat, &b_pi2_ProbNNp_corr_calibstat);
   fChain->SetBranchAddress("pi2_ProbNNp_corr_mcstat", &pi2_ProbNNp_corr_mcstat, &b_pi2_ProbNNp_corr_mcstat);
   fChain->SetBranchAddress("p_ProbNNk_corr", &p_ProbNNk_corr, &b_p_ProbNNk_corr);
   fChain->SetBranchAddress("p_ProbNNk_corr_calibstat", &p_ProbNNk_corr_calibstat, &b_p_ProbNNk_corr_calibstat);
   fChain->SetBranchAddress("p_ProbNNk_corr_mcstat", &p_ProbNNk_corr_mcstat, &b_p_ProbNNk_corr_mcstat);
   fChain->SetBranchAddress("p_ProbNNpi_corr", &p_ProbNNpi_corr, &b_p_ProbNNpi_corr);
   fChain->SetBranchAddress("p_ProbNNpi_corr_calibstat", &p_ProbNNpi_corr_calibstat, &b_p_ProbNNpi_corr_calibstat);
   fChain->SetBranchAddress("p_ProbNNpi_corr_mcstat", &p_ProbNNpi_corr_mcstat, &b_p_ProbNNpi_corr_mcstat);
   fChain->SetBranchAddress("p_ProbNNp_corr", &p_ProbNNp_corr, &b_p_ProbNNp_corr);
   fChain->SetBranchAddress("p_ProbNNp_corr_calibstat", &p_ProbNNp_corr_calibstat, &b_p_ProbNNp_corr_calibstat);
   fChain->SetBranchAddress("p_ProbNNp_corr_mcstat", &p_ProbNNp_corr_mcstat, &b_p_ProbNNp_corr_mcstat);
   fChain->SetBranchAddress("pbar_ProbNNk_corr", &pbar_ProbNNk_corr, &b_pbar_ProbNNk_corr);
   fChain->SetBranchAddress("pbar_ProbNNk_corr_calibstat", &pbar_ProbNNk_corr_calibstat, &b_pbar_ProbNNk_corr_calibstat);
   fChain->SetBranchAddress("pbar_ProbNNk_corr_mcstat", &pbar_ProbNNk_corr_mcstat, &b_pbar_ProbNNk_corr_mcstat);
   fChain->SetBranchAddress("pbar_ProbNNpi_corr", &pbar_ProbNNpi_corr, &b_pbar_ProbNNpi_corr);
   fChain->SetBranchAddress("pbar_ProbNNpi_corr_calibstat", &pbar_ProbNNpi_corr_calibstat, &b_pbar_ProbNNpi_corr_calibstat);
   fChain->SetBranchAddress("pbar_ProbNNpi_corr_mcstat", &pbar_ProbNNpi_corr_mcstat, &b_pbar_ProbNNpi_corr_mcstat);
   fChain->SetBranchAddress("pbar_ProbNNp_corr", &pbar_ProbNNp_corr, &b_pbar_ProbNNp_corr);
   fChain->SetBranchAddress("pbar_ProbNNp_corr_calibstat", &pbar_ProbNNp_corr_calibstat, &b_pbar_ProbNNp_corr_calibstat);
   fChain->SetBranchAddress("pbar_ProbNNp_corr_mcstat", &pbar_ProbNNp_corr_mcstat, &b_pbar_ProbNNp_corr_mcstat);
   fChain->SetBranchAddress("pi_ProbNNk_corr", &pi_ProbNNk_corr, &b_pi_ProbNNk_corr);
   fChain->SetBranchAddress("pi_ProbNNk_corr_calibstat", &pi_ProbNNk_corr_calibstat, &b_pi_ProbNNk_corr_calibstat);
   fChain->SetBranchAddress("pi_ProbNNk_corr_mcstat", &pi_ProbNNk_corr_mcstat, &b_pi_ProbNNk_corr_mcstat);
   fChain->SetBranchAddress("pi_ProbNNpi_corr", &pi_ProbNNpi_corr, &b_pi_ProbNNpi_corr);
   fChain->SetBranchAddress("pi_ProbNNpi_corr_calibstat", &pi_ProbNNpi_corr_calibstat, &b_pi_ProbNNpi_corr_calibstat);
   fChain->SetBranchAddress("pi_ProbNNpi_corr_mcstat", &pi_ProbNNpi_corr_mcstat, &b_pi_ProbNNpi_corr_mcstat);
   fChain->SetBranchAddress("pi_ProbNNp_corr", &pi_ProbNNp_corr, &b_pi_ProbNNp_corr);
   fChain->SetBranchAddress("pi_ProbNNp_corr_calibstat", &pi_ProbNNp_corr_calibstat, &b_pi_ProbNNp_corr_calibstat);
   fChain->SetBranchAddress("pi_ProbNNp_corr_mcstat", &pi_ProbNNp_corr_mcstat, &b_pi_ProbNNp_corr_mcstat);
   Notify();
}

Bool_t make_add_mc::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void make_add_mc::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t make_add_mc::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef make_add_mc_cxx
