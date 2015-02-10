#include "utils.h"

using namespace std ;

double deltaPhi (double phi1, double phi2){
  double deltaphi=fabs(phi1-phi2);
  if (deltaphi > 6.283185308) deltaphi -= 6.283185308;
  if (deltaphi > 3.141592654) deltaphi = 6.283185308-deltaphi;
  return deltaphi;
}


// ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- -

bool closeToLeptons (float eta, float phi, vector<leptonContainer> & TL_leptons, float R){
  for (unsigned int iLep = 0 ; iLep < TL_leptons.size () ; ++iLep){
    if ((eta - TL_leptons.at(iLep).lepton4V_.Eta ()) * (eta - TL_leptons.at(iLep).lepton4V_.Eta ()) +
	deltaPhi (phi, TL_leptons.at(iLep).lepton4V_.Phi ()) * deltaPhi (phi, TL_leptons.at(iLep).lepton4V_.Phi ()) < R * R) 
      return true ;
  }
  return false ;
}


// ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- -


bool closeToLeptons (float eta, float phi, readTree & reader, float R){

  if ((eta - reader.eta1) * (eta - reader.eta1) +
      deltaPhi (phi, reader.phi1) * deltaPhi (phi, reader.phi1) < R * R) return true ;
  if ((eta - reader.eta2) * (eta - reader.eta2) +
      deltaPhi (phi, reader.phi2) * deltaPhi (phi, reader.phi2) < R * R) return true ;
  return false ;
}


// ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- -


void fillRecoJetArray (vector<jetContainer> & jetVector, readTree & reader) {

  jetContainer dummy;
  if(reader.jetpt1 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt1,reader.jeteta1,reader.jetphi1,reader.jetmass1);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased1 ;
    dummy.btag_     = reader.jetBTagAlgo1 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt2 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt2,reader.jeteta2,reader.jetphi2,reader.jetmass2);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased2 ;
    dummy.btag_     = reader.jetBTagAlgo2 ;
    jetVector.push_back(dummy);
  }
      
  if(reader.jetpt3 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt3,reader.jeteta3,reader.jetphi3,reader.jetmass3);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased3 ;
    dummy.btag_     = reader.jetBTagAlgo3 ;
    jetVector.push_back(dummy);
  }


  if(reader.jetpt4 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt4,reader.jeteta4,reader.jetphi4,reader.jetmass4);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased4 ;
    dummy.btag_     = reader.jetBTagAlgo4 ;
    jetVector.push_back(dummy);
  }
  
  if(reader.jetpt5 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt5,reader.jeteta5,reader.jetphi5,reader.jetmass5);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased5 ;
    dummy.btag_     = reader.jetBTagAlgo5 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt6 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt6,reader.jeteta6,reader.jetphi6,reader.jetmass6);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased6 ;
    dummy.btag_     = reader.jetBTagAlgo6 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt7 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt7,reader.jeteta7,reader.jetphi7,reader.jetmass7);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased7 ;
    dummy.btag_     = reader.jetBTagAlgo7 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt8 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt8,reader.jeteta8,reader.jetphi8,reader.jetmass8);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased8 ;
    dummy.btag_     = reader.jetBTagAlgo8 ;
    jetVector.push_back(dummy);
  }
    
  return ;
}

// 
void fillPuppiJetArray (vector<jetContainer> & jetVector, readTree & reader) {

  jetContainer dummy;
  if(reader.jetpt_puppi1 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt_puppi1,reader.jeteta_puppi1,reader.jetphi_puppi1,reader.jetmass_puppi1);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased_puppi1 ;
    dummy.btag_     = reader.jetBTagAlgo_puppi1 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt_puppi2 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt_puppi2,reader.jeteta_puppi2,reader.jetphi_puppi2,reader.jetmass_puppi2);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased_puppi2 ;
    dummy.btag_     = reader.jetBTagAlgo_puppi2 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt_puppi3 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt_puppi3,reader.jeteta_puppi3,reader.jetphi_puppi3,reader.jetmass_puppi3);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased_puppi3 ;
    dummy.btag_     = reader.jetBTagAlgo_puppi3 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt_puppi4 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt_puppi4,reader.jeteta_puppi4,reader.jetphi_puppi4,reader.jetmass_puppi4);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased_puppi4 ;
    dummy.btag_     = reader.jetBTagAlgo_puppi4 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt_puppi5 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt_puppi5,reader.jeteta_puppi5,reader.jetphi_puppi5,reader.jetmass_puppi5);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased_puppi5 ;
    dummy.btag_     = reader.jetBTagAlgo_puppi5 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt_puppi6 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt_puppi6,reader.jeteta_puppi6,reader.jetphi_puppi6,reader.jetmass_puppi6);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased_puppi6 ;
    dummy.btag_     = reader.jetBTagAlgo_puppi6 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt_puppi7 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt_puppi7,reader.jeteta_puppi7,reader.jetphi_puppi7,reader.jetmass_puppi7);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased_puppi7 ;
    dummy.btag_     = reader.jetBTagAlgo_puppi7 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetpt_puppi8 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetpt_puppi8,reader.jeteta_puppi8,reader.jetphi_puppi8,reader.jetmass_puppi8);
    dummy.jetPUID_  = reader.jetpileupIDFlagCutBased_puppi8 ;
    dummy.btag_     = reader.jetBTagAlgo_puppi8 ;
    jetVector.push_back(dummy);
  }
    
  return ;
}

void fillGenJetArray (vector<jetContainer> & jetVector, readTree & reader) {

  jetContainer dummy;
  if(reader.jetGenpt1 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetGenpt1,reader.jetGeneta1,reader.jetGenphi1,reader.jetGenm1);
    dummy.jetPUID_  = -999 ;
    dummy.btag_     = -999 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetGenpt2 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetGenpt2,reader.jetGeneta2,reader.jetGenphi2,reader.jetGenm2);
    dummy.jetPUID_  = -999 ;
    dummy.btag_     = -999 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetGenpt3 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetGenpt3,reader.jetGeneta3,reader.jetGenphi3,reader.jetGenm3);
    dummy.jetPUID_  = -999 ;
    dummy.btag_     = -999 ;
    jetVector.push_back(dummy);
  }

  if(reader.jetGenpt4 > 0){
    dummy.jet4V_.SetPtEtaPhiM(reader.jetGenpt4,reader.jetGeneta4,reader.jetGenphi4,reader.jetGenm4);
    dummy.jetPUID_  = -999 ;
    dummy.btag_     = -999 ;
    jetVector.push_back(dummy);
  }

  return ;
}


// ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- -


// isolation applied here
void fillRecoLeptonsArray (vector<leptonContainer> & lepVector, readTree & reader){

  leptonContainer dummy;

  if(reader.pt1 > 0 ){
    dummy.lepton4V_.SetPtEtaPhiM(reader.pt1,reader.eta1,reader.phi1,0);    
    dummy.charge_   = reader.ch1 ;
    dummy.iso_      = reader.isoRhoCorr1 ;
    dummy.flavour_ = reader.pid1;
    lepVector.push_back(dummy);
  }

  if(reader.pt2 > 0){
    dummy.lepton4V_.SetPtEtaPhiM(reader.pt2,reader.eta2,reader.phi2,0);
    dummy.charge_   = reader.ch2 ;
    dummy.iso_      = reader.isoRhoCorr2 ;
    dummy.flavour_ = reader.pid2;
    lepVector.push_back(dummy);
  }
   
  if(reader.pt3 > 0){
    dummy.lepton4V_.SetPtEtaPhiM(reader.pt3,reader.eta3,reader.phi3,0);
    dummy.charge_   = reader.ch3 ;
    dummy.iso_      = reader.isoRhoCorr3 ;
    dummy.flavour_ = reader.pid3;
    lepVector.push_back(dummy);
  }

  if(reader.pt4 > 0){
    dummy.lepton4V_.SetPtEtaPhiM(reader.pt4,reader.eta4,reader.phi4,0);
    dummy.charge_   = reader.ch4 ;
    dummy.iso_      = reader.isoRhoCorr4 ;
    dummy.flavour_ = reader.pid4;
    lepVector.push_back(dummy);
  }

  return ;
}


// ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- -


vector<leptonContainer>  dumpLeptons (vector<leptonContainer> & TL_leptons, 
                                      float isocut, float minptcut){
  vector<leptonContainer>  goodLeptons ;
  for (size_t i = 0 ; i < TL_leptons.size() ; ++i){
    if (TL_leptons.at(i).iso_  > isocut) continue ;
    if (TL_leptons.at(i).lepton4V_.Pt() < minptcut) continue ;
    goodLeptons.push_back (TL_leptons.at(i)) ;
  }
  return goodLeptons;
}

vector<leptonContainer>  dumpLeptons (vector<leptonContainer> & TL_leptons, 
                                      float isocut_mu, float isocut_el, float minptcut){
  vector<leptonContainer>  goodLeptons ;
  for (size_t i = 0 ; i < TL_leptons.size() ; ++i){
    if (TL_leptons.at(i).lepton4V_.Pt() < minptcut) continue ;
    if (TL_leptons.at(i).iso_  > isocut_mu and fabs(TL_leptons.at(i).flavour_) == 13) continue ;
    if (TL_leptons.at(i).iso_  > isocut_el and fabs(TL_leptons.at(i).flavour_) == 11) continue ;
    goodLeptons.push_back (TL_leptons.at(i)) ;
  }
  return goodLeptons;
}



// ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- -
//vector<jetContainer> dumpJets (vector<jetContainer> & TL_jets, vector<leptonContainer> & TL_leptons, 
//                               float minptcut, float btagcut, float jetPUIDCut, float lepminptcut, float deltaR){

vector<jetContainer> dumpJets (vector<jetContainer> & TL_jets, vector<leptonContainer> & TL_leptons, 
                               float minptcut, float lepminptcut, float deltaR){

  vector<jetContainer> goodJets ;
  for (size_t iJet = 0 ; iJet < TL_jets.size() ; ++iJet){
    if (TL_jets.at(iJet).jet4V_.Pt() < minptcut)   continue ;
    //if (TL_jets.at(iJet).btag_       > btagcut)    continue ;
   // if (TL_jets.at(iJet).jetPUID_    < jetPUIDCut) continue ;
    
    bool discard = false ;
    for (unsigned int iLep = 0 ; iLep < TL_leptons.size () ; ++iLep){
      if (TL_leptons.at(iLep).lepton4V_.Pt () < lepminptcut) continue ;
      if (TL_leptons.at(iLep).lepton4V_.DeltaR(TL_jets.at(iJet).jet4V_) < deltaR){
	discard = true ;
	break ;
      }
    }
    if (discard) continue ;
    goodJets.push_back(TL_jets.at(iJet));;        
  }
  return goodJets ;
}
               

// ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- -


void fillTrackJetArray (vector<jetContainer> & jetVector, readTree & reader){
  for( int iJet = 0; iJet < reader.TrackJet_V4_ ; iJet++){    
    jetContainer dummy;
    dummy.jet4V_.SetPxPyPzE(reader.TrackJet_V4_fP_fX[iJet],reader.TrackJet_V4_fP_fY[iJet],reader.TrackJet_V4_fP_fZ[iJet],reader.TrackJet_V4_fE[iJet]);
    dummy.btag_    = -999 ;
    dummy.jetPUID_ = -999;     
    jetVector.push_back(dummy);
    
  }
  return ;
}
               
// ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- -


vector<jetContainer> dumpTrackJets (vector<jetContainer> & TL_jets, vector<leptonContainer> & TL_leptons, 
                    float minptcut, float lepminptcut, float deltaR){

  vector<jetContainer> goodJets ; 
  for (size_t iJet = 0 ; iJet < TL_jets.size() ; ++iJet){
    if (TL_jets.at(iJet).jet4V_.Pt() < minptcut) continue ;
    bool discard = false ;
    for (unsigned int iLep = 0 ; iLep < TL_leptons.size () ; ++iLep){
      if (TL_leptons.at(iLep).lepton4V_.Pt() < lepminptcut) continue ;
       if (TL_leptons.at(iLep).lepton4V_.DeltaR(TL_jets.at(iJet).jet4V_) < deltaR) {
	 discard = true ;
       	 break ;
       }    
    }
    if (discard) continue ;    
    goodJets.push_back (TL_jets.at(iJet)) ;        
  }
  return goodJets;
}


//----------------------
void fillHistos (plotter & analysisPlots, 
                 readTree* reader, 
                 vector<cutContainer> & CutList,
                 vector<variableContainer> & VariableList,
                 const string & sampleName,     const bool & usePuppiAsDefault, 
                 const double & minPtLeptonCut, const double & minPtLeptonCutCleaning,
                 const double & leptonIsoCut_mu,const double & leptonIsoCut_el, const double & leptonIsoLooseCut,
                 const double & matchingCone,   const double & minJetCutPt,   
                 map <string,TH1F*> & vect) {

  cout << "reading sample " << sampleName << "\n" ;
  int maxevents = reader->fChain->GetEntries() ;

  //maxevents = 50;
  

  // loop over events                                                                                                                                                       
  for (int iEvent = 0 ; iEvent < maxevents ; ++iEvent){    
  //cout << " iEvent " << iEvent << endl;                                                                                                                  

    reader->fChain->GetEntry(iEvent) ;                                                                                                                                      
           
    if (iEvent % 100000 == 0) cout << "reading event " << iEvent << "\n" ;                                                                                                  

    
    for(size_t iCut = 0; iCut < CutList.size() ; iCut++){ 

      if(!passCutContainerSelection(reader,
				    CutList.at(iCut),
				    sampleName,
				    usePuppiAsDefault,
				    minPtLeptonCut,
				    minPtLeptonCutCleaning,
				    leptonIsoCut_mu,
				    leptonIsoCut_el,
				    leptonIsoLooseCut,
				    matchingCone,
				    minJetCutPt,
				    vect)) continue;

      // some basic lorentz vectors
      TLorentzVector L_dilepton, L_met, L_puppi_met, L_gen_met, L_LLmet;
      TLorentzVector L_dijet, L_dijet_gen, L_dijet_puppi;
      
      //WZ related lepton vectors
      TLorentzVector L_trilepton, L_LLLmet;

 
      // dump all the lepton in the event                                                                                                                                       
      vector<leptonContainer> LeptonsAll;
      fillRecoLeptonsArray (LeptonsAll, *reader);

      // dump tight leptons                                                                                                                                                     
      vector<leptonContainer> leptonsIsoTight ;
      leptonsIsoTight = dumpLeptons (LeptonsAll, leptonIsoCut_mu, leptonIsoCut_el, minPtLeptonCut);

      L_dilepton = leptonsIsoTight.at(0).lepton4V_ + leptonsIsoTight.at(1).lepton4V_ ;               
      L_met.SetPtEtaPhiM       (reader->pfmet,0.,reader->pfmetphi, 0.) ;                                                                                                      
      L_LLmet = L_dilepton + L_met ;
      //WZ 
      L_trilepton = leptonsIsoTight.at(0).lepton4V_ + leptonsIsoTight.at(1).lepton4V_ + leptonsIsoTight.at(2).lepton4V_ ;               
      L_LLLmet = L_trilepton + L_met ;
      
      L_gen_met.SetPtEtaPhiM   (reader->metGenpt,0.,reader->metGenphi, 0.) ;                                                                                                   
      L_puppi_met.SetPtEtaPhiM (reader->pfmet_puppi,0.,reader->pfmetphi_puppi, 0.) ;                                                                                        
                                                                                                                                                                           
      float asimJ = 0, asimL = 0, Rvar = 0, asimPuppiJ = 0, RvarPuppi = 0, asimGenJ = 0, RvarGen = 0;
      float aveEta = 0, aveEta_puppi = 0, aveEta_gen = 0;


      // take reco jets                                                                                                                                                         
      vector<jetContainer> RecoJetsAll ;
      fillRecoJetArray (RecoJetsAll, *reader) ;

      // Take Puppi jets                                                                                                                                                        
      vector<jetContainer> PuppiJetsAll ;
      fillPuppiJetArray (PuppiJetsAll, *reader) ;

      // take gen jets                                                                                                                                                          
      vector<jetContainer> GenJetsAll ;
      fillGenJetArray (GenJetsAll, *reader) ;

      // take jets                                                                                                                                                          
      vector<jetContainer> RecoJets;
      RecoJets  = dumpJets (RecoJetsAll, leptonsIsoTight, minJetCutPt, minPtLeptonCutCleaning, matchingCone);
     // RecoJets  = dumpJets (RecoJetsAll, leptonsIsoTight, minJetCutPt, CutList.at(iCut).bTagVeto, CutList.at(iCut).jetPUID, minPtLeptonCutCleaning, matchingCone);
     
     


      // take puppi jets                                                                                                                                                      
      vector<jetContainer> PuppiJets;
      PuppiJets  = dumpJets (PuppiJetsAll, leptonsIsoTight, minJetCutPt, minPtLeptonCutCleaning, matchingCone);
    //  PuppiJets  = dumpJets (PuppiJetsAll, leptonsIsoTight, minJetCutPt, CutList.at(iCut).bTagVeto, CutList.at(iCut).jetPUID, minPtLeptonCutCleaning, matchingCone);

      // take gen jets                                                                                                                                                         
      vector<jetContainer> GenJets;
      GenJets  = dumpJets (GenJetsAll, leptonsIsoTight, minJetCutPt, minPtLeptonCutCleaning, matchingCone);


      asimL = (leptonsIsoTight.at(0).lepton4V_.Pt()-leptonsIsoTight.at(1).lepton4V_.Pt())/(leptonsIsoTight.at(0).lepton4V_.Pt()+leptonsIsoTight.at(1).lepton4V_.Pt()) ;      

      if(RecoJets.size() >= 2){
	L_dijet  = RecoJets.at(0).jet4V_ + RecoJets.at(1).jet4V_;                                                                                                    
	asimJ    = (RecoJets.at(0).jet4V_.Pt()-RecoJets.at(1).jet4V_.Pt())/(RecoJets.at(0).jet4V_.Pt()+RecoJets.at(1).jet4V_.Pt()) ;                                        
	Rvar     = (leptonsIsoTight.at(0).lepton4V_.Pt()*leptonsIsoTight.at(1).lepton4V_.Pt())/(RecoJets.at(0).jet4V_.Pt()*RecoJets.at(1).jet4V_.Pt()) ;                  
        aveEta   = 0.5*(RecoJets.at(0).jet4V_.Eta()+RecoJets.at(1).jet4V_.Eta());
      }
    
      if(GenJets.size() >= 2){
	L_dijet_gen   = GenJets.at(0).jet4V_ + GenJets.at(1).jet4V_;                                                                                              
	asimGenJ      = (GenJets.at(0).jet4V_.Pt()-GenJets.at(1).jet4V_.Pt())/(GenJets.at(0).jet4V_.Pt()+GenJets.at(1).jet4V_.Pt()) ;                             
	RvarGen       = (leptonsIsoTight.at(0).lepton4V_.Pt()*leptonsIsoTight.at(1).lepton4V_.Pt())/(GenJets.at(0).jet4V_.Pt()*GenJets.at(1).jet4V_.Pt()) ;                     
        aveEta_gen    = 0.5*(GenJets.at(0).jet4V_.Eta()+GenJets.at(1).jet4V_.Eta());
      }

      if(PuppiJets.size() >= 2){
	L_dijet_puppi = PuppiJets.at(0).jet4V_ + PuppiJets.at(1).jet4V_ ;                                                                                                 
	asimPuppiJ    = (PuppiJets.at(0).jet4V_.Pt()-PuppiJets.at(1).jet4V_.Pt())/(PuppiJets.at(0).jet4V_.Pt()+PuppiJets.at(1).jet4V_.Pt()) ;                                  
	RvarPuppi     = (leptonsIsoTight.at(0).lepton4V_.Pt()*leptonsIsoTight.at(1).lepton4V_.Pt())/(PuppiJets.at(0).jet4V_.Pt()*PuppiJets.at(1).jet4V_.Pt()) ;                
        aveEta_puppi  = 0.5*(PuppiJets.at(0).jet4V_.Eta()+PuppiJets.at(1).jet4V_.Eta());
      }                                                                                                                                            

      
      // track jet info
      float TKJ_SumHT = 0.,TKJ_SumHT_IN = 0., TKJ_SumHT_OUT = 0. ;
      int   TKJ_num   = 0, TKJ_num_IN   = 0,  TKJ_num_OUT  = 0 ;

      if(RecoJets.size() >=2){

	float dRThreshold = 0.5 ;

	vector<jetContainer> trackJetsAll;
	fillTrackJetArray (trackJetsAll,*reader) ;
	vector<jetContainer> trackJets ;
	trackJets = dumpTrackJets (trackJetsAll, leptonsIsoTight, 1., minPtLeptonCutCleaning, dRThreshold);

	float TJ_etaMin = RecoJets.at (0).jet4V_.Eta () ;
	float TJ_etaMax = RecoJets.at (1).jet4V_.Eta () ;
	float TJ_phiMin = RecoJets.at (0).jet4V_.Phi () ;
	float TJ_phiMax = RecoJets.at (1).jet4V_.Phi () ;
	if (TJ_etaMin > TJ_etaMax){
          swap (TJ_etaMin, TJ_etaMax) ;
          swap (TJ_phiMin, TJ_phiMax) ;
        }

	// loop over track jets                                                                                                                                                
	for (size_t iJet = 0 ; iJet < trackJets.size () ; ++iJet){

          float iJetPhi = trackJets.at (iJet).jet4V_.Phi () ;
          float iJetEta = trackJets.at (iJet).jet4V_.Eta () ;
          float iJetPt  = trackJets.at (iJet).jet4V_.Pt () ;

          float dR2_Min = deltaPhi(TJ_phiMin, iJetPhi);
          dR2_Min *= dR2_Min ;
          dR2_Min += (iJetEta - TJ_etaMin) * (iJetEta - TJ_etaMin) ;
          float dR2_Max = deltaPhi (TJ_phiMax, iJetPhi) ;
          dR2_Max *= dR2_Max ;
          dR2_Max += (iJetEta - TJ_etaMax) * (iJetEta - TJ_etaMax) ;

          // veto the tag jets                                                                                                                                                  
          if (sqrt(dR2_Max) < dRThreshold || sqrt(dR2_Min) < dRThreshold) continue ;

          float iJetModPhi = iJetPhi ;
          float iJetZep    = (trackJets.at (iJet).jet4V_.Eta () - aveEta) /(TJ_etaMax - TJ_etaMin);
          if (iJetZep < -0.5)     iJetModPhi -= TJ_phiMin ;
          else if (iJetZep > 0.5) iJetModPhi -= TJ_phiMax ;

	  ++TKJ_num ;
          TKJ_SumHT += iJetPt ;

          if (iJetEta > TJ_etaMin && iJetEta < TJ_etaMax){
	      ++TKJ_num_IN ;
	      TKJ_SumHT_IN += iJetPt ;
	  }

	  else if (iJetEta < TJ_etaMin || iJetEta > TJ_etaMax){
	      ++TKJ_num_OUT ;
	      TKJ_SumHT_OUT += iJetPt ;
	  }
	}
	
      }

      for(size_t iVar = 0; iVar < VariableList.size(); iVar++){

        // track jets
        if(VariableList.at(iVar).variableName == "numTkjets" and RecoJets.size() >=2){ 
	  analysisPlots.fillHisto (sampleName, CutList.at(iCut).cutLayerName, VariableList.at(iVar).variableName,  TKJ_num,                1.) ;
	}
        else if(VariableList.at(iVar).variableName == "numTkjets_In"  and RecoJets.size() >=2){ 
	  analysisPlots.fillHisto (sampleName, CutList.at(iCut).cutLayerName, VariableList.at(iVar).variableName,  TKJ_num_IN,             1.) ;
	}
        else if(VariableList.at(iVar).variableName == "numTkjets_Out" and RecoJets.size() >=2){ 
	  analysisPlots.fillHisto (sampleName, CutList.at(iCut).cutLayerName, VariableList.at(iVar).variableName,  TKJ_num_OUT,            1.) ;
	}
        else if(VariableList.at(iVar).variableName == "HTtkjets"      and RecoJets.size() >=2){ 
	  analysisPlots.fillHisto (sampleName, CutList.at(iCut).cutLayerName, VariableList.at(iVar).variableName,  TKJ_SumHT,              1.) ;
	}
        else if(VariableList.at(iVar).variableName == "HTtkjets_In"   and RecoJets.size() >=2){ 
	  analysisPlots.fillHisto (sampleName, CutList.at(iCut).cutLayerName, VariableList.at(iVar).variableName,  TKJ_SumHT_IN,           1.) ;
	}
        else if(VariableList.at(iVar).variableName == "HTtkjets_Out"  and RecoJets.size() >=2){ 
	  analysisPlots.fillHisto (sampleName, CutList.at(iCut).cutLayerName, VariableList.at(iVar).variableName,  TKJ_SumHT_OUT,          1.) ;
	}

        // jet based variables
	if(VariableList.at(iVar).variableName == "ptj1" and RecoJets.size() >= 1){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(0).jet4V_.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "ptj1_puppi" and PuppiJets.size() >= 1){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,PuppiJets.at(0).jet4V_.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "ptj1_gen" and GenJets.size() >= 1){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,GenJets.at(0).jet4V_.Pt(),1);   
	}

	else if(VariableList.at(iVar).variableName == "ptj2" and RecoJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(1).jet4V_.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "ptj2_puppi" and PuppiJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,PuppiJets.at(1).jet4V_.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "ptj2_gen" and GenJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,GenJets.at(1).jet4V_.Pt(),1);   
	}


	else if(VariableList.at(iVar).variableName == "etaj1" and RecoJets.size() >= 1){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(0).jet4V_.Eta(),1);   
	}
	else if(VariableList.at(iVar).variableName == "etaj1_puppi" and PuppiJets.size() >= 1){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,PuppiJets.at(0).jet4V_.Eta(),1);   
	}
	else if(VariableList.at(iVar).variableName == "etaj1_gen" and GenJets.size() >= 1){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,GenJets.at(0).jet4V_.Eta(),1);   
	}
	else if(VariableList.at(iVar).variableName == "etaj2" and RecoJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(1).jet4V_.Eta(),1);   
	}
	else if(VariableList.at(iVar).variableName == "etaj2_puppi" and PuppiJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,PuppiJets.at(1).jet4V_.Eta(),1);   
	}
	else if(VariableList.at(iVar).variableName == "etaj2_gen" and GenJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,GenJets.at(1).jet4V_.Eta(),1);   
	}


	else if(VariableList.at(iVar).variableName == "detajj" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(0).jet4V_.Eta()-RecoJets.at(1).jet4V_.Eta()),1);   
	}
	else if(VariableList.at(iVar).variableName == "detajj_puppi" and PuppiJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(PuppiJets.at(0).jet4V_.Eta()-PuppiJets.at(1).jet4V_.Eta()),1);   
	}
	else if(VariableList.at(iVar).variableName == "detajj_gen" and GenJets.size() >= 2){
	 analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(GenJets.at(0).jet4V_.Eta()-GenJets.at(1).jet4V_.Eta()),1);   
	}       

	else if(VariableList.at(iVar).variableName == "dRjj" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(0).jet4V_.DeltaR(RecoJets.at(1).jet4V_),1);   
	}
	else if(VariableList.at(iVar).variableName == "dRjj_puppi" and PuppiJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,PuppiJets.at(0).jet4V_.DeltaR(PuppiJets.at(1).jet4V_),1);   
	}
	else if(VariableList.at(iVar).variableName == "dRjj_gen" and GenJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,GenJets.at(0).jet4V_.DeltaR(GenJets.at(1).jet4V_),1);   
	}       

	else if(VariableList.at(iVar).variableName == "mjj" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet.M(),1);   
	}
	else if(VariableList.at(iVar).variableName == "mjj_gen" and GenJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet_gen.M(),1);   
	}
	else if(VariableList.at(iVar).variableName == "mjj_puppi" and PuppiJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet_puppi.M(),1);   
	}

	else if(VariableList.at(iVar).variableName == "ptjj" and RecoJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "ptjj_puppi" and PuppiJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet_puppi.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "ptjj_gen" and GenJets.size() >= 2){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet_gen.Pt(),1);   
	}

	else if(VariableList.at(iVar).variableName == "Asim_j" and RecoJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,asimJ,1);   
	}
	else if(VariableList.at(iVar).variableName == "Asim_j_puppi" and PuppiJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,asimPuppiJ,1);   
	}
	else if(VariableList.at(iVar).variableName == "Asim_j_gen" and PuppiJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,asimGenJ,1);   
	}

	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ"       and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(0).jet4V_.DeltaPhi(RecoJets.at(1).jet4V_)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_puppi" and PuppiJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(PuppiJets.at(0).jet4V_.DeltaPhi(PuppiJets.at(1).jet4V_)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_gen"   and GenJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(GenJets.at(0).jet4V_.DeltaPhi(GenJets.at(1).jet4V_)),1);   
	}        

	else if(VariableList.at(iVar).variableName == "etaj1etaj2"       and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(0).jet4V_.Eta()*RecoJets.at(1).jet4V_.Eta(),1);   
	} 
	else if(VariableList.at(iVar).variableName == "etaj1etaj2_puppi"       and PuppiJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,PuppiJets.at(0).jet4V_.Eta()*PuppiJets.at(1).jet4V_.Eta(),1);   
	} 
	else if(VariableList.at(iVar).variableName == "etaj1etaj2_gen"       and GenJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,GenJets.at(0).jet4V_.Eta()*GenJets.at(1).jet4V_.Eta(),1);   
	} 

        // lepton based quantities

	else if(VariableList.at(iVar).variableName == "ptl1"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,leptonsIsoTight.at(0).lepton4V_.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "ptl2"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,leptonsIsoTight.at(1).lepton4V_.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "ptl3"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,leptonsIsoTight.at(2).lepton4V_.Pt(),1);   
	}

	else if(VariableList.at(iVar).variableName == "etal1"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,leptonsIsoTight.at(0).lepton4V_.Eta(),1);   
	}
	else if(VariableList.at(iVar).variableName == "etal2"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,leptonsIsoTight.at(1).lepton4V_.Eta(),1);   
	}
	else if(VariableList.at(iVar).variableName == "etal3"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,leptonsIsoTight.at(2).lepton4V_.Eta(),1);   
	}

	else if(VariableList.at(iVar).variableName == "ptll"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dilepton.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "phill"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dilepton.Phi(),1);   
	}
	else if(VariableList.at(iVar).variableName == "dRll"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,leptonsIsoTight.at(0).lepton4V_.DeltaR(leptonsIsoTight.at(1).lepton4V_),1);   
	}
	else if(VariableList.at(iVar).variableName == "etall"){
 	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dilepton.Eta(),1);   
	}
	else if(VariableList.at(iVar).variableName == "mll"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dilepton.M(),1);   
	}
	
	//WZ related
	else if(VariableList.at(iVar).variableName == "mlll"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_trilepton.M(),1);   
	}
	
	else if(VariableList.at(iVar).variableName == "mwz"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_LLLmet.Mt(),1);   
	}
	
	
	//

	else if(VariableList.at(iVar).variableName == "etal1etal2"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,leptonsIsoTight.at(0).lepton4V_.Eta()*leptonsIsoTight.at(1).lepton4V_.Eta(),1);   
	} 


	else if(VariableList.at(iVar).variableName == "DeltaPhi_LL"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(leptonsIsoTight.at(0).lepton4V_.DeltaPhi(leptonsIsoTight.at(1).lepton4V_)),1);   
	}
	else if(VariableList.at(iVar).variableName == "DeltaEta_LL"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(leptonsIsoTight.at(0).lepton4V_.Eta()-leptonsIsoTight.at(1).lepton4V_.Eta()),1);   
	} 

	else if(VariableList.at(iVar).variableName == "Asim_l"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,asimL,1);   
	}

        // met
	else if(VariableList.at(iVar).variableName == "met"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_met.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "met_puppi"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_puppi_met.Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "met_gen"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_gen_met.Pt(),1);   
	}


        /// mixed variables using all event objects

	else if(VariableList.at(iVar).variableName == "leadLepZep" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(leptonsIsoTight.at(0).lepton4V_.Eta()-aveEta)/(fabs(RecoJets.at(0).jet4V_.Eta()-RecoJets.at(1).jet4V_.Eta())),1);   
	}
	else if(VariableList.at(iVar).variableName == "leadLepZep_puppi" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(leptonsIsoTight.at(0).lepton4V_.Eta()-aveEta_puppi)/(fabs(PuppiJets.at(0).jet4V_.Eta()-PuppiJets.at(1).jet4V_.Eta())),1);   
	}
	else if(VariableList.at(iVar).variableName == "leadLepZep_gen" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(leptonsIsoTight.at(0).lepton4V_.Eta()-aveEta_gen)/(fabs(GenJets.at(0).jet4V_.Eta()-GenJets.at(1).jet4V_.Eta())),1);   
	}
	else if(VariableList.at(iVar).variableName == "trailLepZep" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(leptonsIsoTight.at(1).lepton4V_.Eta()-aveEta)/(fabs(RecoJets.at(0).jet4V_.Eta()-RecoJets.at(1).jet4V_.Eta())),1);   
	}
	else if(VariableList.at(iVar).variableName == "trailLepZep_puppi" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(leptonsIsoTight.at(1).lepton4V_.Eta()-aveEta)/(fabs(PuppiJets.at(0).jet4V_.Eta()-PuppiJets.at(1).jet4V_.Eta())),1);   
	}
	else if(VariableList.at(iVar).variableName == "trailLepZep_gen" and RecoJets.size() >= 2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(leptonsIsoTight.at(1).lepton4V_.Eta()-aveEta)/(fabs(GenJets.at(0).jet4V_.Eta()-GenJets.at(1).jet4V_.Eta())),1);   
	}

       
	else if(VariableList.at(iVar).variableName == "R"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,Rvar,1);   
	}
	else if(VariableList.at(iVar).variableName == "R_gen"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RvarGen,1);   
	}
	else if(VariableList.at(iVar).variableName == "R_puppi"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RvarPuppi,1);   
	}
      
        // lepton and met
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LMet"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(leptonsIsoTight.at(0).lepton4V_.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LMet_puppi"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(leptonsIsoTight.at(0).lepton4V_.DeltaPhi(L_puppi_met)),1); 
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LMet_gen"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(leptonsIsoTight.at(0).lepton4V_.DeltaPhi(L_gen_met)),1);   
	} 	

	else if(VariableList.at(iVar).variableName == "ptLMet"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(leptonsIsoTight.at(0).lepton4V_+L_met).Pt(),1);   
	}         

	else if(VariableList.at(iVar).variableName == "DeltaPhi_TLMet"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(leptonsIsoTight.at(1).lepton4V_.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TLMet_puppi"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(leptonsIsoTight.at(1).lepton4V_.DeltaPhi(L_puppi_met)),1); 
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TLMet_gen"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(leptonsIsoTight.at(1).lepton4V_.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "ptTLMet"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(leptonsIsoTight.at(1).lepton4V_+L_met).Pt(),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_LLMet"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dilepton.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LLMet_puppi"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dilepton.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LLMet_gen"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dilepton.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "ptLLMet"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(L_dilepton+L_met).Pt(),1);   
	} 

	
        // lepton and jets
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(0).jet4V_.DeltaPhi(leptonsIsoTight.at(0).lepton4V_)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(0).jet4V_.DeltaPhi(leptonsIsoTight.at(1).lepton4V_)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(0).jet4V_.DeltaPhi(L_dilepton)),1);   
	} 


	else if(VariableList.at(iVar).variableName == "dR_LJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(0).jet4V_.DeltaR(leptonsIsoTight.at(0).lepton4V_),1);   
	} 
	else if(VariableList.at(iVar).variableName == "dR_LJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(0).jet4V_.DeltaR(leptonsIsoTight.at(1).lepton4V_),1);   
	} 
	else if(VariableList.at(iVar).variableName == "dR_LJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(0).jet4V_.DeltaR(L_dilepton),1);   
	} 
      
	else if(VariableList.at(iVar).variableName == "ptLJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(RecoJets.at(0).jet4V_+leptonsIsoTight.at(0).lepton4V_).Pt(),1); 
	} 
	else if(VariableList.at(iVar).variableName == "ptLJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(RecoJets.at(0).jet4V_+leptonsIsoTight.at(1).lepton4V_).Pt(),1);
	} 
	else if(VariableList.at(iVar).variableName == "ptLJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(RecoJets.at(0).jet4V_+L_dilepton).Pt(),1);   
	} 

      
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(1).jet4V_.DeltaPhi(leptonsIsoTight.at(0).lepton4V_)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(1).jet4V_.DeltaPhi(leptonsIsoTight.at(1).lepton4V_)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(1).jet4V_.DeltaPhi(L_dilepton)),1);   
	} 


	else if(VariableList.at(iVar).variableName == "dR_TJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(1).jet4V_.DeltaR(leptonsIsoTight.at(0).lepton4V_),1);   
	} 
	else if(VariableList.at(iVar).variableName == "dR_TJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(1).jet4V_.DeltaR(leptonsIsoTight.at(1).lepton4V_),1);   
	} 
	else if(VariableList.at(iVar).variableName == "dR_TJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,RecoJets.at(1).jet4V_.DeltaR(L_dilepton),1);   
	} 


	else if(VariableList.at(iVar).variableName == "ptTJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(RecoJets.at(1).jet4V_+leptonsIsoTight.at(0).lepton4V_).Pt(),1); 
	} 
	else if(VariableList.at(iVar).variableName == "ptTJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(RecoJets.at(1).jet4V_+leptonsIsoTight.at(1).lepton4V_).Pt(),1);
	} 
	else if(VariableList.at(iVar).variableName == "ptTJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(RecoJets.at(1).jet4V_+L_dilepton).Pt(),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet.DeltaPhi(leptonsIsoTight.at(0).lepton4V_)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet.DeltaPhi(leptonsIsoTight.at(1).lepton4V_)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet.DeltaPhi(L_dilepton)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "dR_JJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet.DeltaR(leptonsIsoTight.at(0).lepton4V_),1);   
	} 
	else if(VariableList.at(iVar).variableName == "dR_JJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet.DeltaR(leptonsIsoTight.at(1).lepton4V_),1);   
	} 
	else if(VariableList.at(iVar).variableName == "dR_JJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet.DeltaR(L_dilepton),1);   
	} 


	else if(VariableList.at(iVar).variableName == "ptJJL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(L_dijet+leptonsIsoTight.at(0).lepton4V_).Pt(),1); 
	} 
	else if(VariableList.at(iVar).variableName == "ptJJTL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(L_dijet+leptonsIsoTight.at(1).lepton4V_).Pt(),1);
	} 
	else if(VariableList.at(iVar).variableName == "ptJJLL" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(L_dijet+L_dilepton).Pt(),1);   
	} 


        // jet and met
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJMet" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJMet_puppi" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJMet_gen" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "ptJJMet" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(L_dijet+L_met).Pt(),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_gen_Met" and GenJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet_gen.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_gen_Met_puppi" and GenJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet_gen.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_gen_Met_gen" and GenJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet_gen.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_puppi_Met" and PuppiJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet_puppi.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_puppi_Met_puppi" and PuppiJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet_puppi.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_puppi_Met_gen" and PuppiJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet_puppi.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJMet" and RecoJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(0).jet4V_.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJMet_puppi" and RecoJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(0).jet4V_.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJMet_gen" and RecoJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(0).jet4V_.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "ptLJMet" and RecoJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(RecoJets.at(0).jet4V_+L_met).Pt(),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJ_puppi_Met" and PuppiJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(PuppiJets.at(0).jet4V_.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJ_puppi_Met_puppi" and PuppiJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(PuppiJets.at(0).jet4V_.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJ_puppi_Met_gen" and PuppiJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(PuppiJets.at(0).jet4V_.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJ_gen_Met" and GenJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(GenJets.at(0).jet4V_.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJ_gen_Met_puppi" and GenJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(GenJets.at(0).jet4V_.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_LJ_gen_Met_gen" and GenJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(GenJets.at(0).jet4V_.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJMet" and RecoJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(1).jet4V_.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJMet_puppi" and RecoJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(1).jet4V_.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJMet_gen" and RecoJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(RecoJets.at(1).jet4V_.DeltaPhi(L_gen_met)),1);   
	} 

	else if(VariableList.at(iVar).variableName == "ptTJMet" and RecoJets.size()>=1){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(RecoJets.at(1).jet4V_+L_met).Pt(),1);   
	} 

	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJ_puppi_Met" and PuppiJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(PuppiJets.at(1).jet4V_.DeltaPhi(L_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJ_puppi_Met_puppi" and PuppiJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(PuppiJets.at(1).jet4V_.DeltaPhi(L_puppi_met)),1);   
	} 
	else if(VariableList.at(iVar).variableName == "DeltaPhi_TJ_puppi_Met_gen" and PuppiJets.size() >=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(PuppiJets.at(1).jet4V_.DeltaPhi(L_gen_met)),1);   
	} 

        // Lepton JJ_LLMET
	else if(VariableList.at(iVar).variableName == "ptJJ_LLMet" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(L_dijet+L_LLmet).Pt(),1);   
	}
	else if(VariableList.at(iVar).variableName == "DeltaPhi_JJ_LLMet" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,fabs(L_dijet.DeltaPhi(L_LLmet)),1);   
	}
	else if(VariableList.at(iVar).variableName == "dR_JJ_LLMet" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,L_dijet.DeltaR(L_LLmet),1);   
	}

        // some invariant mass
        else if(VariableList.at(iVar).variableName == "mlljj" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(L_dilepton+L_dijet).M(),1);
	}

        else if(VariableList.at(iVar).variableName == "mlljjmet" and RecoJets.size()>=2){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,(L_dilepton+L_dijet+L_met).M(),1);
	}

        // tranvserse mass
	else if(VariableList.at(iVar).variableName == "mTH"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,sqrt(2*L_dilepton.Pt()*L_met.Pt()*(1-TMath::Cos(L_dilepton.DeltaPhi(L_met)))),1);   
	}
	else if(VariableList.at(iVar).variableName == "mTH_puppi"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,sqrt(2*L_dilepton.Pt()*L_puppi_met.Pt()*(1-TMath::Cos(L_dilepton.DeltaPhi(L_puppi_met)))),1);   
	}

	else if(VariableList.at(iVar).variableName == "mTH_gen"){
	  analysisPlots.fillHisto (sampleName,CutList.at(iCut).cutLayerName,VariableList.at(iVar).variableName,sqrt(2*L_dilepton.Pt()*L_gen_met.Pt()*(1-TMath::Cos(L_dilepton.DeltaPhi(L_gen_met)))),1);   
	}

      }                
    }
  }
}


bool passCutContainerSelection (readTree* reader,
				cutContainer & Cut,
				const string & sampleName,
				const bool   & usePuppiAsDefault,
				const double & minPtLeptonCut,
                                const double & minPtLeptonCutCleaning,
                                const double & leptonIsoCut_mu,
                                const double & leptonIsoCut_el,
                                const double & leptonIsoLooseCut,
                                const double & matchingCone,
                                const double & minJetCutPt,
                                map<string,TH1F*> & vect){
                                



//WZ objects
double mll1, mll2;
double mz = 91;

// dump all the lepton in the event
  vector<leptonContainer> LeptonsAll;
  fillRecoLeptonsArray (LeptonsAll, *reader); 

// dump tight leptons
  vector <leptonContainer>leptonsIsoTight ;                                                                                                                             
  leptonsIsoTight = dumpLeptons (LeptonsAll, leptonIsoCut_mu, leptonIsoCut_el, minPtLeptonCut);                                                                               

  // identify loose leptons                                                                                                                                             
  // vector<leptonContainer> leptonsIsoLoose ;                                                                                                                              
  //leptonsIsoLoose = dumpLeptons (LeptonsAll, leptonIsoLooseCut,minPtLeptonCut);                                          

  // take reco jets 
  vector<jetContainer> RecoJetsAll ;                                                                                                                                     
  if(!usePuppiAsDefault)
    fillRecoJetArray (RecoJetsAll, *reader) ;                                                                                              
  else 
    fillPuppiJetArray (RecoJetsAll, *reader) ;                                                                                              

  int iBin = 1;
  if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"all events");
    iBin++;   
  }
  
  
  
//WZ
// LEPTON CUTS
   
  // identify tight leptons and require exactly nLep             

  
  if ( Cut.nLep !=0 and int(leptonsIsoTight.size()) != Cut.nLep ) return false;                                                                                                    

  if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"NLep tight");
    iBin++;   
  }

  
  if ( Cut.ptL1 != 0 and leptonsIsoTight.at(0).lepton4V_.Pt() < Cut.ptL1) return false;
  if ( Cut.ptL2 != 0 and leptonsIsoTight.at(1).lepton4V_.Pt() < Cut.ptL2) return false;
  if ( Cut.ptL3 != 0 and leptonsIsoTight.at(2).lepton4V_.Pt() < Cut.ptL3) return false;
  
   if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"Lepton PT");
    iBin++;   
  }
  

                                                                                           
// eta lepton
  
  if ( Cut.etaL != 0 and leptonsIsoTight.at(0).lepton4V_.Eta() > Cut.etaL) return false;
  if ( Cut.etaL != 0 and leptonsIsoTight.at(1).lepton4V_.Eta() > Cut.etaL) return false;
  if ( Cut.etaL != 0 and leptonsIsoTight.at(2).lepton4V_.Eta() > Cut.etaL) return false;
  
   if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"Lepton Eta");
    iBin++;   
  }

   
   // modified for WZ case 
 
  int extraLepton = 0; // count the extra lepton number               
  for(size_t iLepton = 0; iLepton < leptonsIsoTight.size() ; iLepton++){                                                                                             
           
    if(leptonsIsoTight.at(iLepton).lepton4V_ == leptonsIsoTight.at(0).lepton4V_ or leptonsIsoTight.at(iLepton).lepton4V_ == leptonsIsoTight.at(1).lepton4V_ or leptonsIsoTight.at(iLepton).lepton4V_ == leptonsIsoTight.at(2).lepton4V_ ) continue; // skip tight ones
    extraLepton++;                                                                                                                                                          
  }   
 
   if( Cut.nextra !=99 and extraLepton != Cut.nextra ) return false; // extra lepton cut   

  
     if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"extra lepton");
    iBin++;   
  }
                                                                                                                                                                          


//wz correction
// Z Mass for one same flavour opposite charge lepton pair
// Mll mass cut for any same flavour opposite chrge lepton pair
	bool isZMassCut1 = true;
	bool isZMassCut2 = true;
	bool isLLMassCut1 = false;
	bool isLLMassCut2 = false;
	
	if( leptonsIsoTight.at(2).lepton4V_.Pt()>-999 ) {
	mll1 =-999;
	mll2 =-999;
	bool mllFilled = false;
		for(int il=0; il<2; il++){
			for(int ij=1; ij<3; ij++ ){
			if(il==ij)continue;
				if( ( abs(leptonsIsoTight.at(il).flavour_) == abs(leptonsIsoTight.at(ij).flavour_) ) and ( (leptonsIsoTight.at(il).charge_ ) * ( leptonsIsoTight.at(ij).charge_) == -1) ){
					if(!mllFilled) {
					mll1 = (leptonsIsoTight.at(il).lepton4V_ + leptonsIsoTight.at(ij).lepton4V_).M();
					mllFilled = true;
					}
				else mll2 = (leptonsIsoTight.at(il).lepton4V_ + leptonsIsoTight.at(ij).lepton4V_).M();
				}
				if(abs(mll1 - mz) < Cut.MZcut) isZMassCut1 = false;
				if(abs(mll2 - mz) < Cut.MZcut) isZMassCut2 = false;
			    if ( mll1 != -999 and mll1 < Cut.MLLcut ) isLLMassCut1 = true;
				if ( mll2 != -999 and mll2 < Cut.MLLcut) isLLMassCut2 = true;
				

					
			}
		}	
	}
	
	
	
	if( Cut.MZcut != 0 ){
	if(!isZMassCut1 and !isZMassCut2) return false;
	}
	
	if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"Z mass cut");
    iBin++;   
  }
  
    if( Cut.MLLcut != 0 ){
	if(isLLMassCut1 and isLLMassCut2 ) return false;
	}
	
	 if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"Mll");
    iBin++;   
    }
    
//wz
 
 //opposite charge same flavour condition for two leptons
// 0 means no cut, -1 means SF OS leptons

int isSFOS = -1;
  if(Cut.SFOS != 0){	
	for(int il=0; il<2; il++){
			for(int ij=1; ij<3; ij++ ){
			if(il==ij)continue;
			if( leptonsIsoTight.at(il).charge_*leptonsIsoTight.at(ij).charge_ == -1 and  abs(leptonsIsoTight.at(il).flavour_) == abs(leptonsIsoTight.at(ij).flavour_) ) isSFOS=-1;
			}
			//cout << " SFOS: "<< isSFOS << endl;
		}
		
	if (isSFOS != Cut.SFOS) return false;
  }
 
                                                                                                                                                                      
  if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"SF and OF");
    iBin++;   
  }




  // flavour selection
  if(Cut.flavour != 0){
    int flavour = 0;
    int sameflavour = 0;
    for(size_t leptSize = 0; leptSize < leptonsIsoTight.size(); leptSize++) // loop on tight leptns
      flavour += fabs(leptonsIsoTight.at(leptSize).flavour_) ;
    if(flavour/leptonsIsoTight.size() == 11 or flavour/leptonsIsoTight.size() == 13 ) sameflavour = 1;
    else sameflavour = -1;
    if(sameflavour != Cut.flavour) return false;
  }

  if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"flavour selection");
    iBin++;   
  }



// MET CUT
 
  if( Cut.MET != 0 ){
  if(reader->pfmet < Cut.MET) return false;  
  }

  if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"met selection");
    iBin++;   
  }



//JET CUTS

 // take jets
  vector<jetContainer> RecoJets;
  RecoJets  = dumpJets (RecoJetsAll, leptonsIsoTight, minJetCutPt, minPtLeptonCutCleaning, matchingCone);  

          

	//if( RecoJets.size() != 2 ) test++;
	//cout << " N Jets: " << RecoJets.size() << " test " << test << endl;
	
// exact number of jet cut
// nJet == 0 no cut on excat number of jets
  if(Cut.nJet != 0){
  
    if(RecoJets.size() < Cut.nJet ) return false;
  }

 if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"number of jets cut");
    iBin++;   
  }

// jet eta cut
  
  if( Cut.etaJet != 0 ){
  if(fabs(RecoJets.at(0).jet4V_.Eta()) > Cut.etaJet) return false;
  if(fabs(RecoJets.at(1).jet4V_.Eta()) > Cut.etaJet) return false;
  }

   if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"jet eta");
    iBin++;   
  }
  
  // jet pt cut
 

    if (Cut.ptJet1 != 0 and  RecoJets.at(0).jet4V_.Pt() < Cut.ptJet1) return false;
    if (Cut.ptJet2 != 0 and RecoJets.at(1).jet4V_.Pt() < Cut.ptJet2) return false;
  

   if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"jet pt");
    iBin++;   
  }

  ///////// Lorentz Vector
  TLorentzVector L_dilepton;
  L_dilepton = leptonsIsoTight.at(0).lepton4V_ + leptonsIsoTight.at(1).lepton4V_ ;               
  


  TLorentzVector L_dijet;
  if(RecoJets.size() >= 2){
    L_dijet  = RecoJets.at(0).jet4V_ + RecoJets.at(1).jet4V_;                                                                                                    
  }

  // apply VBF cuts
  if( Cut.Mjj != 0){
  if(L_dijet.M() < Cut.Mjj) return false;
     }

  if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"Mjj");
    iBin++;   
  }

  if( Cut.DetaJJ != 0 ){
  if(fabs(RecoJets.at(0).jet4V_.Eta()-RecoJets.at(1).jet4V_.Eta()) < Cut.DetaJJ) return false;
  }
  
  if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"DetaJJ");
    iBin++;   
  }

  if( Cut.DetaLL != 0 ){
  if(fabs(leptonsIsoTight.at(0).lepton4V_.Eta()-leptonsIsoTight.at(1).lepton4V_.Eta()) > Cut.DetaLL) return false;
  }

  if(vect.size()!=0){
    vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
    vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"DetaLL");
    iBin++;   
  }


  // polarized cut
  if(Cut.polarization != 99){
    int polarizationFlag = 0;
    if(fabs(reader->vbosonLHEspin1) == 0 and fabs(reader->vbosonLHEspin2) == 0) 
      polarizationFlag = 0 ; //LL
    else if((fabs(reader->vbosonLHEspin1) == 1 and fabs(reader->vbosonLHEspin2) ==0) or (fabs(reader->vbosonLHEspin1) == 0 and fabs(reader->vbosonLHEspin2) ==1))
      polarizationFlag = 1 ; //TL
    else
      polarizationFlag = 2 ; //TT

    if(polarizationFlag != Cut.polarization) return false;

    if(vect.size()!=0){
      vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
      vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"Polarization");
      iBin++;   
    }

  }
  else{
    
    if(vect.size()!=0){
      vect[sampleName+"_"+Cut.cutLayerName]->SetBinContent(iBin,vect[sampleName+"_"+Cut.cutLayerName]->GetBinContent(iBin)+1);   
      vect[sampleName+"_"+Cut.cutLayerName]->GetXaxis()->SetBinLabel(iBin,"Polarization");
      iBin++;   
    }
  } 
  

  return true;

}
