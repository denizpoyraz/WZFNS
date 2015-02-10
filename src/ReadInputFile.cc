#include "ReadInputFile.h"

using namespace std;

int ReadInputSampleFile(const string & InputSampleList, map<string,vector<sampleContainer> > & SampleContainer){


  ifstream inputFile (InputSampleList.c_str());
  string buffer;

  if(inputFile.fail()) return -1; 

  vector<string> NameSample;
  vector<string> NameReducedSample;
  vector<int>         ColorSample;
  vector<double>      SampleCrossSection;
  vector<int>         NumEntriesBefore;
  vector<int>         isSignal;

  while(!inputFile.eof()){
  
    getline(inputFile,buffer);

    if(buffer.empty() || !buffer.find("#") || buffer==" " ) continue ;
    stringstream line(buffer);

    string  NameSampleTemp;
    string  NameReducedSampleTemp;
    string  ColorSampleTemp;
    string  SampleCrossSectionTemp;
    string  NumEntresBeforeTemp;
    string  isSignalTemp;

    line >> NameSampleTemp >> NameReducedSampleTemp >> ColorSampleTemp >> SampleCrossSectionTemp >> NumEntresBeforeTemp >> isSignalTemp;

    NameSample.push_back(NameSampleTemp);   
    NameReducedSample.push_back(NameReducedSampleTemp);
    ColorSample.push_back(stoi(ColorSampleTemp)); 
    SampleCrossSection.push_back(stof(SampleCrossSectionTemp)); 
    NumEntriesBefore.push_back(stoi(NumEntresBeforeTemp));  
    isSignal.push_back(stoi(isSignalTemp));
  }

  
  for(size_t iSample = 0; iSample < NameReducedSample.size(); iSample++){
    SampleContainer[NameReducedSample.at(iSample)].push_back(
           sampleContainer(NameSample.at(iSample),ColorSample.at(iSample),SampleCrossSection.at(iSample),NumEntriesBefore.at(iSample),isSignal.at(iSample)));
  }


  NameSample.clear();
  NameReducedSample.clear();
  ColorSample.clear();
  SampleCrossSection.clear();
  NumEntriesBefore.clear();
  isSignal.clear();

  return SampleContainer.size() ;

}


int ReadInputVariableFile( const string & InputVariableList , vector<variableContainer> & varContainer){


  ifstream inputFile (InputVariableList.c_str());
  string buffer;

  if(inputFile.fail()) return -1; 
  while(!inputFile.eof()){
  
    getline(inputFile,buffer);

    if(buffer.empty() || !buffer.find("#") || buffer==" ") continue ;
    stringstream line(buffer);

    string  VariablesTemp;
    string  VariablesNbinTemp;
    string  VariablesMinValueTemp;
    string  VariablesMaxValueTemp;
    string  VariablesTitleTemp;
    
    line >> VariablesTemp >> VariablesNbinTemp >> VariablesMinValueTemp >> VariablesMaxValueTemp >> VariablesTitleTemp ;
    for(size_t ifound = 0 ; ifound < VariablesTitleTemp.size() ; ifound++) {
      if(VariablesTitleTemp.at(ifound)=='_' && VariablesTitleTemp.at(ifound+1)!='{') VariablesTitleTemp.at(ifound)=' '; 
    }
    
    variableContainer dummy (VariablesTemp,
                             stoi(VariablesNbinTemp),
                             stod(VariablesMinValueTemp),
                             stod(VariablesMaxValueTemp),
                             VariablesTitleTemp);

    varContainer.push_back(dummy);                                  
  }

  return varContainer.size() ;

}


int ReadInputVariableFile( const string & InputVariableList , vector<string> & varContainer){


  ifstream inputFile (InputVariableList.c_str());
  string buffer;

  if(inputFile.fail()) return -1; 
  while(!inputFile.eof()){
  
    getline(inputFile,buffer);

    if(buffer.empty() || !buffer.find("#") || buffer==" ") continue ;
    stringstream line(buffer);

    string  VariablesTemp;
    
    line >> VariablesTemp ;

    varContainer.push_back(VariablesTemp);                                  
  }

  return varContainer.size() ;

}

int ReadInputCutFile( const string & InputCutList , vector<cutContainer> & CutContainer){


  ifstream inputFile (InputCutList.c_str());
  string buffer;

  if(inputFile.fail()) return -1; 

  while(!inputFile.eof()){
  
    getline(inputFile,buffer);

    if(buffer.empty() || !buffer.find("#") || buffer==" ") continue ;

    stringstream line(buffer);      

   // string layerName, ptL1, ptL2, ptL3, etaL, etaJet, nJet, SFOS, flavour, nLep, nextra, MET, ptJet1, ptJet2, DetaJJ, Mjj, DetaLL, MLLcut,  MZcut, bTagVeto, jetPUID, polarization;    

   // line >> layerName >> ptL1 >> ptL2 >> ptL3 >> etaL >> etaJet >> nJet >>  SFOS  >> flavour >> nLep >> nextra >> MET >> ptJet1 >> ptJet2 >> DetaJJ >> Mjj >> DetaLL >> MLLcut >>  MZcut >> bTagVeto >> jetPUID >> polarization;   
   
   //WZ
   
     string layerName, nLep, SFOS, nextra, flavour, ptL1, ptL2, ptL3, etaL, MZcut, MLLcut, MET, nJet,  ptJet1, ptJet2, etaJet,  DetaJJ, Mjj, DetaLL, polarization; 
     line >> layerName >>  nLep >> SFOS >> nextra >> flavour >> ptL1 >> ptL2 >> ptL3 >> etaL >> MZcut >> MLLcut >> MET >> nJet >>  ptJet1 >> ptJet2 >> etaJet >>  DetaJJ >>  Mjj >> DetaLL >>  polarization;
     cout << "before stoi" << endl;
     cout << "nLep: " << stoi(nLep) << endl;
     cout << "nextra: " << stoi(nextra) << endl;
     cout << "polarization: " << polarization << endl;
     cout << stoi(polarization) << endl;

    cutContainer dummy(layerName,
	                    stoi(nLep),
                        stod(SFOS),
                        stoi(nextra),
               		    stod(flavour),
                        stod(ptL1),
					    stod(ptL2),
					    stod(ptL3),
					    stod(etaL),
					    stod(MZcut),
   					    stod(MLLcut),
                        stod(MET),
					    stod(nJet),
                        stod(ptJet1),
                        stod(ptJet2),
   					    stod(etaJet),
					    stod(DetaJJ),
                        stod(Mjj),
                        stod(DetaLL),
						//stod(bTagVeto), 
                        //stod(jetPUID),
                        stoi(polarization));

    
    CutContainer.push_back(dummy);

  }

  return CutContainer.size() ;

}

int ReadInputTrainingFile (const string & InputTrainingList, vector<trainingContainer> & trainContainer){


  ifstream inputFile (InputTrainingList.c_str());
  string buffer;

  if(inputFile.fail()) return -1; 

  while(!inputFile.eof()){
  
    getline(inputFile,buffer);

    if(buffer.empty() || !buffer.find("#") || buffer==" ") continue ;

    stringstream line(buffer);      

    string fileName, varNameReduced, puMin, puMax, methodTemp;
    vector<string> methodName;

    line >> fileName >> varNameReduced >> puMin >> puMax >> methodTemp;

    TString line_temp (methodTemp);
    line_temp.ReplaceAll(fileName.c_str(),"");  
    line_temp.ReplaceAll(varNameReduced.c_str(),"");  
    line_temp.ReplaceAll(puMin.c_str(),"");  
    line_temp.ReplaceAll(puMax.c_str(),"");  
    line_temp.ReplaceAll(" ","");  
  
    string segment;
    stringstream vect(line_temp.Data());
    while(getline(vect, segment,':')){
      methodName.push_back(segment);
    }


    trainingContainer dummy(fileName,
			    varNameReduced,
			    make_pair(stoi(puMin),stoi(puMax)),
			    methodName
			    );

    
    trainContainer.push_back(dummy);

  }

  return trainContainer.size() ;


}
