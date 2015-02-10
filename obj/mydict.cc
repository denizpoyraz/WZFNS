// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIobjdImydict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "../interface/ConfigFileLine.h"
#include "../interface/config.h"
#include "../interface/ConfigParser.h"
#include "../interface/counter.h"
#include "../interface/plotter.h"
#include "../interface/ReadInputFile.h"
#include "../interface/readTree.h"
#include "../interface/TMVAPlotClass.h"
#include "../interface/TMVATrainingClass.h"
#include "../interface/treeReader.h"
#include "../interface/utils.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void record_Dictionary();
   static void record_TClassManip(TClass*);
   static void *new_record(void *p = 0);
   static void *newArray_record(Long_t size, void *p);
   static void delete_record(void *p);
   static void deleteArray_record(void *p);
   static void destruct_record(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::record*)
   {
      ::record *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::record),0);
      static ::ROOT::TGenericClassInfo 
         instance("record", "config.h", 13,
                  typeid(::record), DefineBehavior(ptr, ptr),
                  &record_Dictionary, isa_proxy, 4,
                  sizeof(::record) );
      instance.SetNew(&new_record);
      instance.SetNewArray(&newArray_record);
      instance.SetDelete(&delete_record);
      instance.SetDeleteArray(&deleteArray_record);
      instance.SetDestructor(&destruct_record);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::record*)
   {
      return GenerateInitInstanceLocal((::record*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::record*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void record_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::record*)0x0)->GetClass();
      record_TClassManip(theClass);
   }

   static void record_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void ConfigFileLine_Dictionary();
   static void ConfigFileLine_TClassManip(TClass*);
   static void delete_ConfigFileLine(void *p);
   static void deleteArray_ConfigFileLine(void *p);
   static void destruct_ConfigFileLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConfigFileLine*)
   {
      ::ConfigFileLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConfigFileLine),0);
      static ::ROOT::TGenericClassInfo 
         instance("ConfigFileLine", "ConfigFileLine.h", 18,
                  typeid(::ConfigFileLine), DefineBehavior(ptr, ptr),
                  &ConfigFileLine_Dictionary, isa_proxy, 4,
                  sizeof(::ConfigFileLine) );
      instance.SetDelete(&delete_ConfigFileLine);
      instance.SetDeleteArray(&deleteArray_ConfigFileLine);
      instance.SetDestructor(&destruct_ConfigFileLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConfigFileLine*)
   {
      return GenerateInitInstanceLocal((::ConfigFileLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ConfigFileLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void ConfigFileLine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConfigFileLine*)0x0)->GetClass();
      ConfigFileLine_TClassManip(theClass);
   }

   static void ConfigFileLine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void ConfigParser_Dictionary();
   static void ConfigParser_TClassManip(TClass*);
   static void *new_ConfigParser(void *p = 0);
   static void *newArray_ConfigParser(Long_t size, void *p);
   static void delete_ConfigParser(void *p);
   static void deleteArray_ConfigParser(void *p);
   static void destruct_ConfigParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConfigParser*)
   {
      ::ConfigParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConfigParser),0);
      static ::ROOT::TGenericClassInfo 
         instance("ConfigParser", "ConfigParser.h", 23,
                  typeid(::ConfigParser), DefineBehavior(ptr, ptr),
                  &ConfigParser_Dictionary, isa_proxy, 4,
                  sizeof(::ConfigParser) );
      instance.SetNew(&new_ConfigParser);
      instance.SetNewArray(&newArray_ConfigParser);
      instance.SetDelete(&delete_ConfigParser);
      instance.SetDeleteArray(&deleteArray_ConfigParser);
      instance.SetDestructor(&destruct_ConfigParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConfigParser*)
   {
      return GenerateInitInstanceLocal((::ConfigParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ConfigParser*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void ConfigParser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConfigParser*)0x0)->GetClass();
      ConfigParser_TClassManip(theClass);
   }

   static void ConfigParser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void counter_Dictionary();
   static void counter_TClassManip(TClass*);
   static void *new_counter(void *p = 0);
   static void *newArray_counter(Long_t size, void *p);
   static void delete_counter(void *p);
   static void deleteArray_counter(void *p);
   static void destruct_counter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::counter*)
   {
      ::counter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::counter),0);
      static ::ROOT::TGenericClassInfo 
         instance("counter", "counter.h", 10,
                  typeid(::counter), DefineBehavior(ptr, ptr),
                  &counter_Dictionary, isa_proxy, 4,
                  sizeof(::counter) );
      instance.SetNew(&new_counter);
      instance.SetNewArray(&newArray_counter);
      instance.SetDelete(&delete_counter);
      instance.SetDeleteArray(&deleteArray_counter);
      instance.SetDestructor(&destruct_counter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::counter*)
   {
      return GenerateInitInstanceLocal((::counter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::counter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void counter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::counter*)0x0)->GetClass();
      counter_TClassManip(theClass);
   }

   static void counter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void readTree_Dictionary();
   static void readTree_TClassManip(TClass*);
   static void *new_readTree(void *p = 0);
   static void *newArray_readTree(Long_t size, void *p);
   static void delete_readTree(void *p);
   static void deleteArray_readTree(void *p);
   static void destruct_readTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::readTree*)
   {
      ::readTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::readTree),0);
      static ::ROOT::TGenericClassInfo 
         instance("readTree", "readTree.h", 20,
                  typeid(::readTree), DefineBehavior(ptr, ptr),
                  &readTree_Dictionary, isa_proxy, 4,
                  sizeof(::readTree) );
      instance.SetNew(&new_readTree);
      instance.SetNewArray(&newArray_readTree);
      instance.SetDelete(&delete_readTree);
      instance.SetDeleteArray(&deleteArray_readTree);
      instance.SetDestructor(&destruct_readTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::readTree*)
   {
      return GenerateInitInstanceLocal((::readTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::readTree*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void readTree_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::readTree*)0x0)->GetClass();
      readTree_TClassManip(theClass);
   }

   static void readTree_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void layer_Dictionary();
   static void layer_TClassManip(TClass*);
   static void *new_layer(void *p = 0);
   static void *newArray_layer(Long_t size, void *p);
   static void delete_layer(void *p);
   static void deleteArray_layer(void *p);
   static void destruct_layer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::layer*)
   {
      ::layer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::layer),0);
      static ::ROOT::TGenericClassInfo 
         instance("layer", "plotter.h", 47,
                  typeid(::layer), DefineBehavior(ptr, ptr),
                  &layer_Dictionary, isa_proxy, 4,
                  sizeof(::layer) );
      instance.SetNew(&new_layer);
      instance.SetNewArray(&newArray_layer);
      instance.SetDelete(&delete_layer);
      instance.SetDeleteArray(&deleteArray_layer);
      instance.SetDestructor(&destruct_layer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::layer*)
   {
      return GenerateInitInstanceLocal((::layer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::layer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void layer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::layer*)0x0)->GetClass();
      layer_TClassManip(theClass);
   }

   static void layer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void sample_Dictionary();
   static void sample_TClassManip(TClass*);
   static void *new_sample(void *p = 0);
   static void *newArray_sample(Long_t size, void *p);
   static void delete_sample(void *p);
   static void deleteArray_sample(void *p);
   static void destruct_sample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::sample*)
   {
      ::sample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::sample),0);
      static ::ROOT::TGenericClassInfo 
         instance("sample", "plotter.h", 61,
                  typeid(::sample), DefineBehavior(ptr, ptr),
                  &sample_Dictionary, isa_proxy, 4,
                  sizeof(::sample) );
      instance.SetNew(&new_sample);
      instance.SetNewArray(&newArray_sample);
      instance.SetDelete(&delete_sample);
      instance.SetDeleteArray(&deleteArray_sample);
      instance.SetDestructor(&destruct_sample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::sample*)
   {
      return GenerateInitInstanceLocal((::sample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::sample*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void sample_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::sample*)0x0)->GetClass();
      sample_TClassManip(theClass);
   }

   static void sample_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void plotter_Dictionary();
   static void plotter_TClassManip(TClass*);
   static void delete_plotter(void *p);
   static void deleteArray_plotter(void *p);
   static void destruct_plotter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::plotter*)
   {
      ::plotter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::plotter),0);
      static ::ROOT::TGenericClassInfo 
         instance("plotter", "plotter.h", 95,
                  typeid(::plotter), DefineBehavior(ptr, ptr),
                  &plotter_Dictionary, isa_proxy, 4,
                  sizeof(::plotter) );
      instance.SetDelete(&delete_plotter);
      instance.SetDeleteArray(&deleteArray_plotter);
      instance.SetDestructor(&destruct_plotter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::plotter*)
   {
      return GenerateInitInstanceLocal((::plotter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::plotter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void plotter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::plotter*)0x0)->GetClass();
      plotter_TClassManip(theClass);
   }

   static void plotter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void treeReader_Dictionary();
   static void treeReader_TClassManip(TClass*);
   static void delete_treeReader(void *p);
   static void deleteArray_treeReader(void *p);
   static void destruct_treeReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::treeReader*)
   {
      ::treeReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::treeReader),0);
      static ::ROOT::TGenericClassInfo 
         instance("treeReader", "treeReader.h", 20,
                  typeid(::treeReader), DefineBehavior(ptr, ptr),
                  &treeReader_Dictionary, isa_proxy, 4,
                  sizeof(::treeReader) );
      instance.SetDelete(&delete_treeReader);
      instance.SetDeleteArray(&deleteArray_treeReader);
      instance.SetDestructor(&destruct_treeReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::treeReader*)
   {
      return GenerateInitInstanceLocal((::treeReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::treeReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void treeReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::treeReader*)0x0)->GetClass();
      treeReader_TClassManip(theClass);
   }

   static void treeReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void leptonContainer_Dictionary();
   static void leptonContainer_TClassManip(TClass*);
   static void *new_leptonContainer(void *p = 0);
   static void *newArray_leptonContainer(Long_t size, void *p);
   static void delete_leptonContainer(void *p);
   static void deleteArray_leptonContainer(void *p);
   static void destruct_leptonContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::leptonContainer*)
   {
      ::leptonContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::leptonContainer),0);
      static ::ROOT::TGenericClassInfo 
         instance("leptonContainer", "utils.h", 16,
                  typeid(::leptonContainer), DefineBehavior(ptr, ptr),
                  &leptonContainer_Dictionary, isa_proxy, 4,
                  sizeof(::leptonContainer) );
      instance.SetNew(&new_leptonContainer);
      instance.SetNewArray(&newArray_leptonContainer);
      instance.SetDelete(&delete_leptonContainer);
      instance.SetDeleteArray(&deleteArray_leptonContainer);
      instance.SetDestructor(&destruct_leptonContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::leptonContainer*)
   {
      return GenerateInitInstanceLocal((::leptonContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::leptonContainer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void leptonContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::leptonContainer*)0x0)->GetClass();
      leptonContainer_TClassManip(theClass);
   }

   static void leptonContainer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void jetContainer_Dictionary();
   static void jetContainer_TClassManip(TClass*);
   static void *new_jetContainer(void *p = 0);
   static void *newArray_jetContainer(Long_t size, void *p);
   static void delete_jetContainer(void *p);
   static void deleteArray_jetContainer(void *p);
   static void destruct_jetContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::jetContainer*)
   {
      ::jetContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::jetContainer),0);
      static ::ROOT::TGenericClassInfo 
         instance("jetContainer", "utils.h", 57,
                  typeid(::jetContainer), DefineBehavior(ptr, ptr),
                  &jetContainer_Dictionary, isa_proxy, 4,
                  sizeof(::jetContainer) );
      instance.SetNew(&new_jetContainer);
      instance.SetNewArray(&newArray_jetContainer);
      instance.SetDelete(&delete_jetContainer);
      instance.SetDeleteArray(&deleteArray_jetContainer);
      instance.SetDestructor(&destruct_jetContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::jetContainer*)
   {
      return GenerateInitInstanceLocal((::jetContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::jetContainer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void jetContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::jetContainer*)0x0)->GetClass();
      jetContainer_TClassManip(theClass);
   }

   static void jetContainer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void cutContainer_Dictionary();
   static void cutContainer_TClassManip(TClass*);
   static void *new_cutContainer(void *p = 0);
   static void *newArray_cutContainer(Long_t size, void *p);
   static void delete_cutContainer(void *p);
   static void deleteArray_cutContainer(void *p);
   static void destruct_cutContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cutContainer*)
   {
      ::cutContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cutContainer),0);
      static ::ROOT::TGenericClassInfo 
         instance("cutContainer", "ReadInputFile.h", 39,
                  typeid(::cutContainer), DefineBehavior(ptr, ptr),
                  &cutContainer_Dictionary, isa_proxy, 4,
                  sizeof(::cutContainer) );
      instance.SetNew(&new_cutContainer);
      instance.SetNewArray(&newArray_cutContainer);
      instance.SetDelete(&delete_cutContainer);
      instance.SetDeleteArray(&deleteArray_cutContainer);
      instance.SetDestructor(&destruct_cutContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cutContainer*)
   {
      return GenerateInitInstanceLocal((::cutContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cutContainer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void cutContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cutContainer*)0x0)->GetClass();
      cutContainer_TClassManip(theClass);
   }

   static void cutContainer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void variableContainer_Dictionary();
   static void variableContainer_TClassManip(TClass*);
   static void *new_variableContainer(void *p = 0);
   static void *newArray_variableContainer(Long_t size, void *p);
   static void delete_variableContainer(void *p);
   static void deleteArray_variableContainer(void *p);
   static void destruct_variableContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::variableContainer*)
   {
      ::variableContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::variableContainer),0);
      static ::ROOT::TGenericClassInfo 
         instance("variableContainer", "ReadInputFile.h", 114,
                  typeid(::variableContainer), DefineBehavior(ptr, ptr),
                  &variableContainer_Dictionary, isa_proxy, 4,
                  sizeof(::variableContainer) );
      instance.SetNew(&new_variableContainer);
      instance.SetNewArray(&newArray_variableContainer);
      instance.SetDelete(&delete_variableContainer);
      instance.SetDeleteArray(&deleteArray_variableContainer);
      instance.SetDestructor(&destruct_variableContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::variableContainer*)
   {
      return GenerateInitInstanceLocal((::variableContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::variableContainer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void variableContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::variableContainer*)0x0)->GetClass();
      variableContainer_TClassManip(theClass);
   }

   static void variableContainer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void histoContainer_Dictionary();
   static void histoContainer_TClassManip(TClass*);
   static void *new_histoContainer(void *p = 0);
   static void *newArray_histoContainer(Long_t size, void *p);
   static void delete_histoContainer(void *p);
   static void deleteArray_histoContainer(void *p);
   static void destruct_histoContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::histoContainer*)
   {
      ::histoContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::histoContainer),0);
      static ::ROOT::TGenericClassInfo 
         instance("histoContainer", "ReadInputFile.h", 159,
                  typeid(::histoContainer), DefineBehavior(ptr, ptr),
                  &histoContainer_Dictionary, isa_proxy, 4,
                  sizeof(::histoContainer) );
      instance.SetNew(&new_histoContainer);
      instance.SetNewArray(&newArray_histoContainer);
      instance.SetDelete(&delete_histoContainer);
      instance.SetDeleteArray(&deleteArray_histoContainer);
      instance.SetDestructor(&destruct_histoContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::histoContainer*)
   {
      return GenerateInitInstanceLocal((::histoContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::histoContainer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void histoContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::histoContainer*)0x0)->GetClass();
      histoContainer_TClassManip(theClass);
   }

   static void histoContainer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void sampleContainer_Dictionary();
   static void sampleContainer_TClassManip(TClass*);
   static void *new_sampleContainer(void *p = 0);
   static void *newArray_sampleContainer(Long_t size, void *p);
   static void delete_sampleContainer(void *p);
   static void deleteArray_sampleContainer(void *p);
   static void destruct_sampleContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::sampleContainer*)
   {
      ::sampleContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::sampleContainer),0);
      static ::ROOT::TGenericClassInfo 
         instance("sampleContainer", "ReadInputFile.h", 19,
                  typeid(::sampleContainer), DefineBehavior(ptr, ptr),
                  &sampleContainer_Dictionary, isa_proxy, 4,
                  sizeof(::sampleContainer) );
      instance.SetNew(&new_sampleContainer);
      instance.SetNewArray(&newArray_sampleContainer);
      instance.SetDelete(&delete_sampleContainer);
      instance.SetDeleteArray(&deleteArray_sampleContainer);
      instance.SetDestructor(&destruct_sampleContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::sampleContainer*)
   {
      return GenerateInitInstanceLocal((::sampleContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::sampleContainer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void sampleContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::sampleContainer*)0x0)->GetClass();
      sampleContainer_TClassManip(theClass);
   }

   static void sampleContainer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void TMVATrainingClass_Dictionary();
   static void TMVATrainingClass_TClassManip(TClass*);
   static void *new_TMVATrainingClass(void *p = 0);
   static void *newArray_TMVATrainingClass(Long_t size, void *p);
   static void delete_TMVATrainingClass(void *p);
   static void deleteArray_TMVATrainingClass(void *p);
   static void destruct_TMVATrainingClass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVATrainingClass*)
   {
      ::TMVATrainingClass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVATrainingClass),0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVATrainingClass", "TMVATrainingClass.h", 37,
                  typeid(::TMVATrainingClass), DefineBehavior(ptr, ptr),
                  &TMVATrainingClass_Dictionary, isa_proxy, 4,
                  sizeof(::TMVATrainingClass) );
      instance.SetNew(&new_TMVATrainingClass);
      instance.SetNewArray(&newArray_TMVATrainingClass);
      instance.SetDelete(&delete_TMVATrainingClass);
      instance.SetDeleteArray(&deleteArray_TMVATrainingClass);
      instance.SetDestructor(&destruct_TMVATrainingClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVATrainingClass*)
   {
      return GenerateInitInstanceLocal((::TMVATrainingClass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TMVATrainingClass*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void TMVATrainingClass_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVATrainingClass*)0x0)->GetClass();
      TMVATrainingClass_TClassManip(theClass);
   }

   static void TMVATrainingClass_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void significanceBox_Dictionary();
   static void significanceBox_TClassManip(TClass*);
   static void *new_significanceBox(void *p = 0);
   static void *newArray_significanceBox(Long_t size, void *p);
   static void delete_significanceBox(void *p);
   static void deleteArray_significanceBox(void *p);
   static void destruct_significanceBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::significanceBox*)
   {
      ::significanceBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::significanceBox),0);
      static ::ROOT::TGenericClassInfo 
         instance("significanceBox", "TMVAPlotClass.h", 51,
                  typeid(::significanceBox), DefineBehavior(ptr, ptr),
                  &significanceBox_Dictionary, isa_proxy, 4,
                  sizeof(::significanceBox) );
      instance.SetNew(&new_significanceBox);
      instance.SetNewArray(&newArray_significanceBox);
      instance.SetDelete(&delete_significanceBox);
      instance.SetDeleteArray(&deleteArray_significanceBox);
      instance.SetDestructor(&destruct_significanceBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::significanceBox*)
   {
      return GenerateInitInstanceLocal((::significanceBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::significanceBox*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void significanceBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::significanceBox*)0x0)->GetClass();
      significanceBox_TClassManip(theClass);
   }

   static void significanceBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void TMVAPlotClass_Dictionary();
   static void TMVAPlotClass_TClassManip(TClass*);
   static void *new_TMVAPlotClass(void *p = 0);
   static void *newArray_TMVAPlotClass(Long_t size, void *p);
   static void delete_TMVAPlotClass(void *p);
   static void deleteArray_TMVAPlotClass(void *p);
   static void destruct_TMVAPlotClass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVAPlotClass*)
   {
      ::TMVAPlotClass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVAPlotClass),0);
      static ::ROOT::TGenericClassInfo 
         instance("TMVAPlotClass", "TMVAPlotClass.h", 103,
                  typeid(::TMVAPlotClass), DefineBehavior(ptr, ptr),
                  &TMVAPlotClass_Dictionary, isa_proxy, 4,
                  sizeof(::TMVAPlotClass) );
      instance.SetNew(&new_TMVAPlotClass);
      instance.SetNewArray(&newArray_TMVAPlotClass);
      instance.SetDelete(&delete_TMVAPlotClass);
      instance.SetDeleteArray(&deleteArray_TMVAPlotClass);
      instance.SetDestructor(&destruct_TMVAPlotClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVAPlotClass*)
   {
      return GenerateInitInstanceLocal((::TMVAPlotClass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TMVAPlotClass*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void TMVAPlotClass_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TMVAPlotClass*)0x0)->GetClass();
      TMVAPlotClass_TClassManip(theClass);
   }

   static void TMVAPlotClass_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_record(void *p) {
      return  p ? new(p) ::record : new ::record;
   }
   static void *newArray_record(Long_t nElements, void *p) {
      return p ? new(p) ::record[nElements] : new ::record[nElements];
   }
   // Wrapper around operator delete
   static void delete_record(void *p) {
      delete ((::record*)p);
   }
   static void deleteArray_record(void *p) {
      delete [] ((::record*)p);
   }
   static void destruct_record(void *p) {
      typedef ::record current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::record

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ConfigFileLine(void *p) {
      delete ((::ConfigFileLine*)p);
   }
   static void deleteArray_ConfigFileLine(void *p) {
      delete [] ((::ConfigFileLine*)p);
   }
   static void destruct_ConfigFileLine(void *p) {
      typedef ::ConfigFileLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConfigFileLine

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConfigParser(void *p) {
      return  p ? new(p) ::ConfigParser : new ::ConfigParser;
   }
   static void *newArray_ConfigParser(Long_t nElements, void *p) {
      return p ? new(p) ::ConfigParser[nElements] : new ::ConfigParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConfigParser(void *p) {
      delete ((::ConfigParser*)p);
   }
   static void deleteArray_ConfigParser(void *p) {
      delete [] ((::ConfigParser*)p);
   }
   static void destruct_ConfigParser(void *p) {
      typedef ::ConfigParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConfigParser

namespace ROOT {
   // Wrappers around operator new
   static void *new_counter(void *p) {
      return  p ? new(p) ::counter : new ::counter;
   }
   static void *newArray_counter(Long_t nElements, void *p) {
      return p ? new(p) ::counter[nElements] : new ::counter[nElements];
   }
   // Wrapper around operator delete
   static void delete_counter(void *p) {
      delete ((::counter*)p);
   }
   static void deleteArray_counter(void *p) {
      delete [] ((::counter*)p);
   }
   static void destruct_counter(void *p) {
      typedef ::counter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::counter

namespace ROOT {
   // Wrappers around operator new
   static void *new_readTree(void *p) {
      return  p ? new(p) ::readTree : new ::readTree;
   }
   static void *newArray_readTree(Long_t nElements, void *p) {
      return p ? new(p) ::readTree[nElements] : new ::readTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_readTree(void *p) {
      delete ((::readTree*)p);
   }
   static void deleteArray_readTree(void *p) {
      delete [] ((::readTree*)p);
   }
   static void destruct_readTree(void *p) {
      typedef ::readTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::readTree

namespace ROOT {
   // Wrappers around operator new
   static void *new_layer(void *p) {
      return  p ? new(p) ::layer : new ::layer;
   }
   static void *newArray_layer(Long_t nElements, void *p) {
      return p ? new(p) ::layer[nElements] : new ::layer[nElements];
   }
   // Wrapper around operator delete
   static void delete_layer(void *p) {
      delete ((::layer*)p);
   }
   static void deleteArray_layer(void *p) {
      delete [] ((::layer*)p);
   }
   static void destruct_layer(void *p) {
      typedef ::layer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::layer

namespace ROOT {
   // Wrappers around operator new
   static void *new_sample(void *p) {
      return  p ? new(p) ::sample : new ::sample;
   }
   static void *newArray_sample(Long_t nElements, void *p) {
      return p ? new(p) ::sample[nElements] : new ::sample[nElements];
   }
   // Wrapper around operator delete
   static void delete_sample(void *p) {
      delete ((::sample*)p);
   }
   static void deleteArray_sample(void *p) {
      delete [] ((::sample*)p);
   }
   static void destruct_sample(void *p) {
      typedef ::sample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::sample

namespace ROOT {
   // Wrapper around operator delete
   static void delete_plotter(void *p) {
      delete ((::plotter*)p);
   }
   static void deleteArray_plotter(void *p) {
      delete [] ((::plotter*)p);
   }
   static void destruct_plotter(void *p) {
      typedef ::plotter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::plotter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_treeReader(void *p) {
      delete ((::treeReader*)p);
   }
   static void deleteArray_treeReader(void *p) {
      delete [] ((::treeReader*)p);
   }
   static void destruct_treeReader(void *p) {
      typedef ::treeReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::treeReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_leptonContainer(void *p) {
      return  p ? new(p) ::leptonContainer : new ::leptonContainer;
   }
   static void *newArray_leptonContainer(Long_t nElements, void *p) {
      return p ? new(p) ::leptonContainer[nElements] : new ::leptonContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_leptonContainer(void *p) {
      delete ((::leptonContainer*)p);
   }
   static void deleteArray_leptonContainer(void *p) {
      delete [] ((::leptonContainer*)p);
   }
   static void destruct_leptonContainer(void *p) {
      typedef ::leptonContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::leptonContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_jetContainer(void *p) {
      return  p ? new(p) ::jetContainer : new ::jetContainer;
   }
   static void *newArray_jetContainer(Long_t nElements, void *p) {
      return p ? new(p) ::jetContainer[nElements] : new ::jetContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_jetContainer(void *p) {
      delete ((::jetContainer*)p);
   }
   static void deleteArray_jetContainer(void *p) {
      delete [] ((::jetContainer*)p);
   }
   static void destruct_jetContainer(void *p) {
      typedef ::jetContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::jetContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_cutContainer(void *p) {
      return  p ? new(p) ::cutContainer : new ::cutContainer;
   }
   static void *newArray_cutContainer(Long_t nElements, void *p) {
      return p ? new(p) ::cutContainer[nElements] : new ::cutContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_cutContainer(void *p) {
      delete ((::cutContainer*)p);
   }
   static void deleteArray_cutContainer(void *p) {
      delete [] ((::cutContainer*)p);
   }
   static void destruct_cutContainer(void *p) {
      typedef ::cutContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cutContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_variableContainer(void *p) {
      return  p ? new(p) ::variableContainer : new ::variableContainer;
   }
   static void *newArray_variableContainer(Long_t nElements, void *p) {
      return p ? new(p) ::variableContainer[nElements] : new ::variableContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_variableContainer(void *p) {
      delete ((::variableContainer*)p);
   }
   static void deleteArray_variableContainer(void *p) {
      delete [] ((::variableContainer*)p);
   }
   static void destruct_variableContainer(void *p) {
      typedef ::variableContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::variableContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_histoContainer(void *p) {
      return  p ? new(p) ::histoContainer : new ::histoContainer;
   }
   static void *newArray_histoContainer(Long_t nElements, void *p) {
      return p ? new(p) ::histoContainer[nElements] : new ::histoContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_histoContainer(void *p) {
      delete ((::histoContainer*)p);
   }
   static void deleteArray_histoContainer(void *p) {
      delete [] ((::histoContainer*)p);
   }
   static void destruct_histoContainer(void *p) {
      typedef ::histoContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::histoContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_sampleContainer(void *p) {
      return  p ? new(p) ::sampleContainer : new ::sampleContainer;
   }
   static void *newArray_sampleContainer(Long_t nElements, void *p) {
      return p ? new(p) ::sampleContainer[nElements] : new ::sampleContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_sampleContainer(void *p) {
      delete ((::sampleContainer*)p);
   }
   static void deleteArray_sampleContainer(void *p) {
      delete [] ((::sampleContainer*)p);
   }
   static void destruct_sampleContainer(void *p) {
      typedef ::sampleContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::sampleContainer

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVATrainingClass(void *p) {
      return  p ? new(p) ::TMVATrainingClass : new ::TMVATrainingClass;
   }
   static void *newArray_TMVATrainingClass(Long_t nElements, void *p) {
      return p ? new(p) ::TMVATrainingClass[nElements] : new ::TMVATrainingClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVATrainingClass(void *p) {
      delete ((::TMVATrainingClass*)p);
   }
   static void deleteArray_TMVATrainingClass(void *p) {
      delete [] ((::TMVATrainingClass*)p);
   }
   static void destruct_TMVATrainingClass(void *p) {
      typedef ::TMVATrainingClass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVATrainingClass

namespace ROOT {
   // Wrappers around operator new
   static void *new_significanceBox(void *p) {
      return  p ? new(p) ::significanceBox : new ::significanceBox;
   }
   static void *newArray_significanceBox(Long_t nElements, void *p) {
      return p ? new(p) ::significanceBox[nElements] : new ::significanceBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_significanceBox(void *p) {
      delete ((::significanceBox*)p);
   }
   static void deleteArray_significanceBox(void *p) {
      delete [] ((::significanceBox*)p);
   }
   static void destruct_significanceBox(void *p) {
      typedef ::significanceBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::significanceBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAPlotClass(void *p) {
      return  p ? new(p) ::TMVAPlotClass : new ::TMVAPlotClass;
   }
   static void *newArray_TMVAPlotClass(Long_t nElements, void *p) {
      return p ? new(p) ::TMVAPlotClass[nElements] : new ::TMVAPlotClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAPlotClass(void *p) {
      delete ((::TMVAPlotClass*)p);
   }
   static void deleteArray_TMVAPlotClass(void *p) {
      delete [] ((::TMVAPlotClass*)p);
   }
   static void destruct_TMVAPlotClass(void *p) {
      typedef ::TMVAPlotClass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TMVAPlotClass

namespace ROOT {
   static void vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 210,
                  typeid(vector<string>), DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static void vectorlEsignificanceBoxmUgR_Dictionary();
   static void vectorlEsignificanceBoxmUgR_TClassManip(TClass*);
   static void *new_vectorlEsignificanceBoxmUgR(void *p = 0);
   static void *newArray_vectorlEsignificanceBoxmUgR(Long_t size, void *p);
   static void delete_vectorlEsignificanceBoxmUgR(void *p);
   static void deleteArray_vectorlEsignificanceBoxmUgR(void *p);
   static void destruct_vectorlEsignificanceBoxmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<significanceBox*>*)
   {
      vector<significanceBox*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<significanceBox*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<significanceBox*>", -2, "vector", 210,
                  typeid(vector<significanceBox*>), DefineBehavior(ptr, ptr),
                  &vectorlEsignificanceBoxmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<significanceBox*>) );
      instance.SetNew(&new_vectorlEsignificanceBoxmUgR);
      instance.SetNewArray(&newArray_vectorlEsignificanceBoxmUgR);
      instance.SetDelete(&delete_vectorlEsignificanceBoxmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEsignificanceBoxmUgR);
      instance.SetDestructor(&destruct_vectorlEsignificanceBoxmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<significanceBox*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<significanceBox*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlEsignificanceBoxmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<significanceBox*>*)0x0)->GetClass();
      vectorlEsignificanceBoxmUgR_TClassManip(theClass);
   }

   static void vectorlEsignificanceBoxmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEsignificanceBoxmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<significanceBox*> : new vector<significanceBox*>;
   }
   static void *newArray_vectorlEsignificanceBoxmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<significanceBox*>[nElements] : new vector<significanceBox*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEsignificanceBoxmUgR(void *p) {
      delete ((vector<significanceBox*>*)p);
   }
   static void deleteArray_vectorlEsignificanceBoxmUgR(void *p) {
      delete [] ((vector<significanceBox*>*)p);
   }
   static void destruct_vectorlEsignificanceBoxmUgR(void *p) {
      typedef vector<significanceBox*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<significanceBox*>

namespace ROOT {
   static void vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 210,
                  typeid(vector<float>), DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static void vectorlETTreemUgR_Dictionary();
   static void vectorlETTreemUgR_TClassManip(TClass*);
   static void *new_vectorlETTreemUgR(void *p = 0);
   static void *newArray_vectorlETTreemUgR(Long_t size, void *p);
   static void delete_vectorlETTreemUgR(void *p);
   static void deleteArray_vectorlETTreemUgR(void *p);
   static void destruct_vectorlETTreemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TTree*>*)
   {
      vector<TTree*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TTree*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<TTree*>", -2, "vector", 210,
                  typeid(vector<TTree*>), DefineBehavior(ptr, ptr),
                  &vectorlETTreemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TTree*>) );
      instance.SetNew(&new_vectorlETTreemUgR);
      instance.SetNewArray(&newArray_vectorlETTreemUgR);
      instance.SetDelete(&delete_vectorlETTreemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETTreemUgR);
      instance.SetDestructor(&destruct_vectorlETTreemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TTree*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TTree*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlETTreemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TTree*>*)0x0)->GetClass();
      vectorlETTreemUgR_TClassManip(theClass);
   }

   static void vectorlETTreemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETTreemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TTree*> : new vector<TTree*>;
   }
   static void *newArray_vectorlETTreemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TTree*>[nElements] : new vector<TTree*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETTreemUgR(void *p) {
      delete ((vector<TTree*>*)p);
   }
   static void deleteArray_vectorlETTreemUgR(void *p) {
      delete [] ((vector<TTree*>*)p);
   }
   static void destruct_vectorlETTreemUgR(void *p) {
      typedef vector<TTree*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TTree*>

namespace ROOT {
   static void vectorlETNtuplemUgR_Dictionary();
   static void vectorlETNtuplemUgR_TClassManip(TClass*);
   static void *new_vectorlETNtuplemUgR(void *p = 0);
   static void *newArray_vectorlETNtuplemUgR(Long_t size, void *p);
   static void delete_vectorlETNtuplemUgR(void *p);
   static void deleteArray_vectorlETNtuplemUgR(void *p);
   static void destruct_vectorlETNtuplemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TNtuple*>*)
   {
      vector<TNtuple*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TNtuple*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<TNtuple*>", -2, "vector", 210,
                  typeid(vector<TNtuple*>), DefineBehavior(ptr, ptr),
                  &vectorlETNtuplemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TNtuple*>) );
      instance.SetNew(&new_vectorlETNtuplemUgR);
      instance.SetNewArray(&newArray_vectorlETNtuplemUgR);
      instance.SetDelete(&delete_vectorlETNtuplemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETNtuplemUgR);
      instance.SetDestructor(&destruct_vectorlETNtuplemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TNtuple*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TNtuple*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlETNtuplemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TNtuple*>*)0x0)->GetClass();
      vectorlETNtuplemUgR_TClassManip(theClass);
   }

   static void vectorlETNtuplemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETNtuplemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TNtuple*> : new vector<TNtuple*>;
   }
   static void *newArray_vectorlETNtuplemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TNtuple*>[nElements] : new vector<TNtuple*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETNtuplemUgR(void *p) {
      delete ((vector<TNtuple*>*)p);
   }
   static void deleteArray_vectorlETNtuplemUgR(void *p) {
      delete [] ((vector<TNtuple*>*)p);
   }
   static void destruct_vectorlETNtuplemUgR(void *p) {
      typedef vector<TNtuple*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TNtuple*>

namespace ROOT {
   static void vectorlETMVAcLcLFactorymUgR_Dictionary();
   static void vectorlETMVAcLcLFactorymUgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLFactorymUgR(void *p = 0);
   static void *newArray_vectorlETMVAcLcLFactorymUgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLFactorymUgR(void *p);
   static void deleteArray_vectorlETMVAcLcLFactorymUgR(void *p);
   static void destruct_vectorlETMVAcLcLFactorymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::Factory*>*)
   {
      vector<TMVA::Factory*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::Factory*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::Factory*>", -2, "vector", 210,
                  typeid(vector<TMVA::Factory*>), DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLFactorymUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::Factory*>) );
      instance.SetNew(&new_vectorlETMVAcLcLFactorymUgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLFactorymUgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLFactorymUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLFactorymUgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLFactorymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::Factory*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TMVA::Factory*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlETMVAcLcLFactorymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMVA::Factory*>*)0x0)->GetClass();
      vectorlETMVAcLcLFactorymUgR_TClassManip(theClass);
   }

   static void vectorlETMVAcLcLFactorymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLFactorymUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TMVA::Factory*> : new vector<TMVA::Factory*>;
   }
   static void *newArray_vectorlETMVAcLcLFactorymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TMVA::Factory*>[nElements] : new vector<TMVA::Factory*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLFactorymUgR(void *p) {
      delete ((vector<TMVA::Factory*>*)p);
   }
   static void deleteArray_vectorlETMVAcLcLFactorymUgR(void *p) {
      delete [] ((vector<TMVA::Factory*>*)p);
   }
   static void destruct_vectorlETMVAcLcLFactorymUgR(void *p) {
      typedef vector<TMVA::Factory*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::Factory*>

namespace ROOT {
   static void vectorlETLorentzVectorgR_Dictionary();
   static void vectorlETLorentzVectorgR_TClassManip(TClass*);
   static void *new_vectorlETLorentzVectorgR(void *p = 0);
   static void *newArray_vectorlETLorentzVectorgR(Long_t size, void *p);
   static void delete_vectorlETLorentzVectorgR(void *p);
   static void deleteArray_vectorlETLorentzVectorgR(void *p);
   static void destruct_vectorlETLorentzVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLorentzVector>*)
   {
      vector<TLorentzVector> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLorentzVector>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLorentzVector>", -2, "vector", 210,
                  typeid(vector<TLorentzVector>), DefineBehavior(ptr, ptr),
                  &vectorlETLorentzVectorgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TLorentzVector>) );
      instance.SetNew(&new_vectorlETLorentzVectorgR);
      instance.SetNewArray(&newArray_vectorlETLorentzVectorgR);
      instance.SetDelete(&delete_vectorlETLorentzVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLorentzVectorgR);
      instance.SetDestructor(&destruct_vectorlETLorentzVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLorentzVector> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlETLorentzVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0)->GetClass();
      vectorlETLorentzVectorgR_TClassManip(theClass);
   }

   static void vectorlETLorentzVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLorentzVectorgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TLorentzVector> : new vector<TLorentzVector>;
   }
   static void *newArray_vectorlETLorentzVectorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TLorentzVector>[nElements] : new vector<TLorentzVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLorentzVectorgR(void *p) {
      delete ((vector<TLorentzVector>*)p);
   }
   static void deleteArray_vectorlETLorentzVectorgR(void *p) {
      delete [] ((vector<TLorentzVector>*)p);
   }
   static void destruct_vectorlETLorentzVectorgR(void *p) {
      typedef vector<TLorentzVector> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TLorentzVector>

namespace ROOT {
   static void vectorlETLatexmUgR_Dictionary();
   static void vectorlETLatexmUgR_TClassManip(TClass*);
   static void *new_vectorlETLatexmUgR(void *p = 0);
   static void *newArray_vectorlETLatexmUgR(Long_t size, void *p);
   static void delete_vectorlETLatexmUgR(void *p);
   static void deleteArray_vectorlETLatexmUgR(void *p);
   static void destruct_vectorlETLatexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLatex*>*)
   {
      vector<TLatex*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLatex*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLatex*>", -2, "vector", 210,
                  typeid(vector<TLatex*>), DefineBehavior(ptr, ptr),
                  &vectorlETLatexmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TLatex*>) );
      instance.SetNew(&new_vectorlETLatexmUgR);
      instance.SetNewArray(&newArray_vectorlETLatexmUgR);
      instance.SetDelete(&delete_vectorlETLatexmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLatexmUgR);
      instance.SetDestructor(&destruct_vectorlETLatexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLatex*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TLatex*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlETLatexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TLatex*>*)0x0)->GetClass();
      vectorlETLatexmUgR_TClassManip(theClass);
   }

   static void vectorlETLatexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLatexmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TLatex*> : new vector<TLatex*>;
   }
   static void *newArray_vectorlETLatexmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TLatex*>[nElements] : new vector<TLatex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLatexmUgR(void *p) {
      delete ((vector<TLatex*>*)p);
   }
   static void deleteArray_vectorlETLatexmUgR(void *p) {
      delete [] ((vector<TLatex*>*)p);
   }
   static void destruct_vectorlETLatexmUgR(void *p) {
      typedef vector<TLatex*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TLatex*>

namespace ROOT {
   static void vectorlETFilemUgR_Dictionary();
   static void vectorlETFilemUgR_TClassManip(TClass*);
   static void *new_vectorlETFilemUgR(void *p = 0);
   static void *newArray_vectorlETFilemUgR(Long_t size, void *p);
   static void delete_vectorlETFilemUgR(void *p);
   static void deleteArray_vectorlETFilemUgR(void *p);
   static void destruct_vectorlETFilemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TFile*>*)
   {
      vector<TFile*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TFile*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<TFile*>", -2, "vector", 210,
                  typeid(vector<TFile*>), DefineBehavior(ptr, ptr),
                  &vectorlETFilemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TFile*>) );
      instance.SetNew(&new_vectorlETFilemUgR);
      instance.SetNewArray(&newArray_vectorlETFilemUgR);
      instance.SetDelete(&delete_vectorlETFilemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETFilemUgR);
      instance.SetDestructor(&destruct_vectorlETFilemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TFile*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TFile*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlETFilemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TFile*>*)0x0)->GetClass();
      vectorlETFilemUgR_TClassManip(theClass);
   }

   static void vectorlETFilemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETFilemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TFile*> : new vector<TFile*>;
   }
   static void *newArray_vectorlETFilemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TFile*>[nElements] : new vector<TFile*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETFilemUgR(void *p) {
      delete ((vector<TFile*>*)p);
   }
   static void deleteArray_vectorlETFilemUgR(void *p) {
      delete [] ((vector<TFile*>*)p);
   }
   static void destruct_vectorlETFilemUgR(void *p) {
      typedef vector<TFile*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TFile*>

namespace ROOT {
   static void maplEstringcOvectorlEstringgRmUgR_Dictionary();
   static void maplEstringcOvectorlEstringgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEstringgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEstringgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEstringgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEstringgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEstringgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<string>*>*)
   {
      map<string,vector<string>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<string>*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<string>*>", -2, "map", 96,
                  typeid(map<string,vector<string>*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEstringgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<string>*>) );
      instance.SetNew(&new_maplEstringcOvectorlEstringgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEstringgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEstringgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEstringgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEstringgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<string>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<string>*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOvectorlEstringgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<string>*>*)0x0)->GetClass();
      maplEstringcOvectorlEstringgRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOvectorlEstringgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEstringgRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<string>*> : new map<string,vector<string>*>;
   }
   static void *newArray_maplEstringcOvectorlEstringgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<string>*>[nElements] : new map<string,vector<string>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEstringgRmUgR(void *p) {
      delete ((map<string,vector<string>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEstringgRmUgR(void *p) {
      delete [] ((map<string,vector<string>*>*)p);
   }
   static void destruct_maplEstringcOvectorlEstringgRmUgR(void *p) {
      typedef map<string,vector<string>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<string>*>

namespace ROOT {
   static void maplEstringcOvectorlEintgRmUgR_Dictionary();
   static void maplEstringcOvectorlEintgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEintgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEintgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEintgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEintgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEintgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<int>*>*)
   {
      map<string,vector<int>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<int>*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<int>*>", -2, "map", 96,
                  typeid(map<string,vector<int>*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEintgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<int>*>) );
      instance.SetNew(&new_maplEstringcOvectorlEintgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEintgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEintgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEintgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEintgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<int>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<int>*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOvectorlEintgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<int>*>*)0x0)->GetClass();
      maplEstringcOvectorlEintgRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOvectorlEintgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEintgRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<int>*> : new map<string,vector<int>*>;
   }
   static void *newArray_maplEstringcOvectorlEintgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<int>*>[nElements] : new map<string,vector<int>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEintgRmUgR(void *p) {
      delete ((map<string,vector<int>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEintgRmUgR(void *p) {
      delete [] ((map<string,vector<int>*>*)p);
   }
   static void destruct_maplEstringcOvectorlEintgRmUgR(void *p) {
      typedef map<string,vector<int>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<int>*>

namespace ROOT {
   static void maplEstringcOvectorlEfloatgRmUgR_Dictionary();
   static void maplEstringcOvectorlEfloatgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEfloatgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEfloatgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEfloatgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEfloatgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEfloatgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<float>*>*)
   {
      map<string,vector<float>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<float>*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<float>*>", -2, "map", 96,
                  typeid(map<string,vector<float>*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEfloatgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<float>*>) );
      instance.SetNew(&new_maplEstringcOvectorlEfloatgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEfloatgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEfloatgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEfloatgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEfloatgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<float>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<float>*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOvectorlEfloatgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<float>*>*)0x0)->GetClass();
      maplEstringcOvectorlEfloatgRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOvectorlEfloatgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEfloatgRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<float>*> : new map<string,vector<float>*>;
   }
   static void *newArray_maplEstringcOvectorlEfloatgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<float>*>[nElements] : new map<string,vector<float>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEfloatgRmUgR(void *p) {
      delete ((map<string,vector<float>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEfloatgRmUgR(void *p) {
      delete [] ((map<string,vector<float>*>*)p);
   }
   static void destruct_maplEstringcOvectorlEfloatgRmUgR(void *p) {
      typedef map<string,vector<float>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<float>*>

namespace ROOT {
   static void maplEstringcOvectorlEdoublegRmUgR_Dictionary();
   static void maplEstringcOvectorlEdoublegRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEdoublegRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEdoublegRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEdoublegRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEdoublegRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEdoublegRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<double>*>*)
   {
      map<string,vector<double>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<double>*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<double>*>", -2, "map", 96,
                  typeid(map<string,vector<double>*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEdoublegRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<double>*>) );
      instance.SetNew(&new_maplEstringcOvectorlEdoublegRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEdoublegRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEdoublegRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEdoublegRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEdoublegRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<double>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<double>*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOvectorlEdoublegRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<double>*>*)0x0)->GetClass();
      maplEstringcOvectorlEdoublegRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOvectorlEdoublegRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEdoublegRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<double>*> : new map<string,vector<double>*>;
   }
   static void *newArray_maplEstringcOvectorlEdoublegRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<double>*>[nElements] : new map<string,vector<double>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEdoublegRmUgR(void *p) {
      delete ((map<string,vector<double>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEdoublegRmUgR(void *p) {
      delete [] ((map<string,vector<double>*>*)p);
   }
   static void destruct_maplEstringcOvectorlEdoublegRmUgR(void *p) {
      typedef map<string,vector<double>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<double>*>

namespace ROOT {
   static void maplEstringcOvectorlEboolgRmUgR_Dictionary();
   static void maplEstringcOvectorlEboolgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEboolgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEboolgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEboolgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEboolgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEboolgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<bool>*>*)
   {
      map<string,vector<bool>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<bool>*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<bool>*>", -2, "map", 96,
                  typeid(map<string,vector<bool>*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEboolgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<bool>*>) );
      instance.SetNew(&new_maplEstringcOvectorlEboolgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEboolgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEboolgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEboolgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEboolgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<bool>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<bool>*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOvectorlEboolgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<bool>*>*)0x0)->GetClass();
      maplEstringcOvectorlEboolgRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOvectorlEboolgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEboolgRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<bool>*> : new map<string,vector<bool>*>;
   }
   static void *newArray_maplEstringcOvectorlEboolgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<bool>*>[nElements] : new map<string,vector<bool>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEboolgRmUgR(void *p) {
      delete ((map<string,vector<bool>*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEboolgRmUgR(void *p) {
      delete [] ((map<string,vector<bool>*>*)p);
   }
   static void destruct_maplEstringcOvectorlEboolgRmUgR(void *p) {
      typedef map<string,vector<bool>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<bool>*>

namespace ROOT {
   static void maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR_Dictionary();
   static void maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>*)
   {
      map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>", -2, "map", 96,
                  typeid(map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>) );
      instance.SetNew(&new_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>*)0x0)->GetClass();
      maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*> : new map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>;
   }
   static void *newArray_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>[nElements] : new map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(void *p) {
      delete ((map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(void *p) {
      delete [] ((map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>*)p);
   }
   static void destruct_maplEstringcOvectorlEROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRsPgRmUgR(void *p) {
      typedef map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > >*>

namespace ROOT {
   static void maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR_Dictionary();
   static void maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(void *p);
   static void deleteArray_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(void *p);
   static void destruct_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>*)
   {
      map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>", -2, "map", 96,
                  typeid(map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>) );
      instance.SetNew(&new_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>*)0x0)->GetClass();
      maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*> : new map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>;
   }
   static void *newArray_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>[nElements] : new map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(void *p) {
      delete ((map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>*)p);
   }
   static void deleteArray_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(void *p) {
      delete [] ((map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>*)p);
   }
   static void destruct_maplEstringcOvectorlEROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRsPgRmUgR(void *p) {
      typedef map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag> >*>

namespace ROOT {
   static void maplEstringcOstringgR_Dictionary();
   static void maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringgR(void *p = 0);
   static void *newArray_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_maplEstringcOstringgR(void *p);
   static void deleteArray_maplEstringcOstringgR(void *p);
   static void destruct_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string>*)
   {
      map<string,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string>", -2, "map", 96,
                  typeid(map<string,string>), DefineBehavior(ptr, ptr),
                  &maplEstringcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,string>) );
      instance.SetNew(&new_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_maplEstringcOstringgR);
      instance.SetDelete(&delete_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,string>*)0x0)->GetClass();
      maplEstringcOstringgR_TClassManip(theClass);
   }

   static void maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,string> : new map<string,string>;
   }
   static void *newArray_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,string>[nElements] : new map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringgR(void *p) {
      delete ((map<string,string>*)p);
   }
   static void deleteArray_maplEstringcOstringgR(void *p) {
      delete [] ((map<string,string>*)p);
   }
   static void destruct_maplEstringcOstringgR(void *p) {
      typedef map<string,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,string>

namespace ROOT {
   static void maplEstringcOstringmUgR_Dictionary();
   static void maplEstringcOstringmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringmUgR(void *p = 0);
   static void *newArray_maplEstringcOstringmUgR(Long_t size, void *p);
   static void delete_maplEstringcOstringmUgR(void *p);
   static void deleteArray_maplEstringcOstringmUgR(void *p);
   static void destruct_maplEstringcOstringmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string*>*)
   {
      map<string,string*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string*>", -2, "map", 96,
                  typeid(map<string,string*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOstringmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,string*>) );
      instance.SetNew(&new_maplEstringcOstringmUgR);
      instance.SetNewArray(&newArray_maplEstringcOstringmUgR);
      instance.SetDelete(&delete_maplEstringcOstringmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringmUgR);
      instance.SetDestructor(&destruct_maplEstringcOstringmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,string*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOstringmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,string*>*)0x0)->GetClass();
      maplEstringcOstringmUgR_TClassManip(theClass);
   }

   static void maplEstringcOstringmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,string*> : new map<string,string*>;
   }
   static void *newArray_maplEstringcOstringmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,string*>[nElements] : new map<string,string*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringmUgR(void *p) {
      delete ((map<string,string*>*)p);
   }
   static void deleteArray_maplEstringcOstringmUgR(void *p) {
      delete [] ((map<string,string*>*)p);
   }
   static void destruct_maplEstringcOstringmUgR(void *p) {
      typedef map<string,string*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,string*>

namespace ROOT {
   static void maplEstringcOintmUgR_Dictionary();
   static void maplEstringcOintmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOintmUgR(void *p = 0);
   static void *newArray_maplEstringcOintmUgR(Long_t size, void *p);
   static void delete_maplEstringcOintmUgR(void *p);
   static void deleteArray_maplEstringcOintmUgR(void *p);
   static void destruct_maplEstringcOintmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int*>*)
   {
      map<string,int*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int*>", -2, "map", 96,
                  typeid(map<string,int*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOintmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int*>) );
      instance.SetNew(&new_maplEstringcOintmUgR);
      instance.SetNewArray(&newArray_maplEstringcOintmUgR);
      instance.SetDelete(&delete_maplEstringcOintmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintmUgR);
      instance.SetDestructor(&destruct_maplEstringcOintmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,int*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOintmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,int*>*)0x0)->GetClass();
      maplEstringcOintmUgR_TClassManip(theClass);
   }

   static void maplEstringcOintmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,int*> : new map<string,int*>;
   }
   static void *newArray_maplEstringcOintmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,int*>[nElements] : new map<string,int*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintmUgR(void *p) {
      delete ((map<string,int*>*)p);
   }
   static void deleteArray_maplEstringcOintmUgR(void *p) {
      delete [] ((map<string,int*>*)p);
   }
   static void destruct_maplEstringcOintmUgR(void *p) {
      typedef map<string,int*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,int*>

namespace ROOT {
   static void maplEstringcOfloatgR_Dictionary();
   static void maplEstringcOfloatgR_TClassManip(TClass*);
   static void *new_maplEstringcOfloatgR(void *p = 0);
   static void *newArray_maplEstringcOfloatgR(Long_t size, void *p);
   static void delete_maplEstringcOfloatgR(void *p);
   static void deleteArray_maplEstringcOfloatgR(void *p);
   static void destruct_maplEstringcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,float>*)
   {
      map<string,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,float>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,float>", -2, "map", 96,
                  typeid(map<string,float>), DefineBehavior(ptr, ptr),
                  &maplEstringcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,float>) );
      instance.SetNew(&new_maplEstringcOfloatgR);
      instance.SetNewArray(&newArray_maplEstringcOfloatgR);
      instance.SetDelete(&delete_maplEstringcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOfloatgR);
      instance.SetDestructor(&destruct_maplEstringcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,float>*)0x0)->GetClass();
      maplEstringcOfloatgR_TClassManip(theClass);
   }

   static void maplEstringcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,float> : new map<string,float>;
   }
   static void *newArray_maplEstringcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,float>[nElements] : new map<string,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOfloatgR(void *p) {
      delete ((map<string,float>*)p);
   }
   static void deleteArray_maplEstringcOfloatgR(void *p) {
      delete [] ((map<string,float>*)p);
   }
   static void destruct_maplEstringcOfloatgR(void *p) {
      typedef map<string,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,float>

namespace ROOT {
   static void maplEstringcOfloatmUgR_Dictionary();
   static void maplEstringcOfloatmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOfloatmUgR(void *p = 0);
   static void *newArray_maplEstringcOfloatmUgR(Long_t size, void *p);
   static void delete_maplEstringcOfloatmUgR(void *p);
   static void deleteArray_maplEstringcOfloatmUgR(void *p);
   static void destruct_maplEstringcOfloatmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,float*>*)
   {
      map<string,float*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,float*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,float*>", -2, "map", 96,
                  typeid(map<string,float*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOfloatmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,float*>) );
      instance.SetNew(&new_maplEstringcOfloatmUgR);
      instance.SetNewArray(&newArray_maplEstringcOfloatmUgR);
      instance.SetDelete(&delete_maplEstringcOfloatmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOfloatmUgR);
      instance.SetDestructor(&destruct_maplEstringcOfloatmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,float*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,float*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOfloatmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,float*>*)0x0)->GetClass();
      maplEstringcOfloatmUgR_TClassManip(theClass);
   }

   static void maplEstringcOfloatmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOfloatmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,float*> : new map<string,float*>;
   }
   static void *newArray_maplEstringcOfloatmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,float*>[nElements] : new map<string,float*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOfloatmUgR(void *p) {
      delete ((map<string,float*>*)p);
   }
   static void deleteArray_maplEstringcOfloatmUgR(void *p) {
      delete [] ((map<string,float*>*)p);
   }
   static void destruct_maplEstringcOfloatmUgR(void *p) {
      typedef map<string,float*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,float*>

namespace ROOT {
   static void maplEstringcOdoublemUgR_Dictionary();
   static void maplEstringcOdoublemUgR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublemUgR(void *p = 0);
   static void *newArray_maplEstringcOdoublemUgR(Long_t size, void *p);
   static void delete_maplEstringcOdoublemUgR(void *p);
   static void deleteArray_maplEstringcOdoublemUgR(void *p);
   static void destruct_maplEstringcOdoublemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double*>*)
   {
      map<string,double*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double*>", -2, "map", 96,
                  typeid(map<string,double*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double*>) );
      instance.SetNew(&new_maplEstringcOdoublemUgR);
      instance.SetNewArray(&newArray_maplEstringcOdoublemUgR);
      instance.SetDelete(&delete_maplEstringcOdoublemUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublemUgR);
      instance.SetDestructor(&destruct_maplEstringcOdoublemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,double*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOdoublemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double*>*)0x0)->GetClass();
      maplEstringcOdoublemUgR_TClassManip(theClass);
   }

   static void maplEstringcOdoublemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,double*> : new map<string,double*>;
   }
   static void *newArray_maplEstringcOdoublemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,double*>[nElements] : new map<string,double*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublemUgR(void *p) {
      delete ((map<string,double*>*)p);
   }
   static void deleteArray_maplEstringcOdoublemUgR(void *p) {
      delete [] ((map<string,double*>*)p);
   }
   static void destruct_maplEstringcOdoublemUgR(void *p) {
      typedef map<string,double*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double*>

namespace ROOT {
   static void maplEstringcOboolmUgR_Dictionary();
   static void maplEstringcOboolmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOboolmUgR(void *p = 0);
   static void *newArray_maplEstringcOboolmUgR(Long_t size, void *p);
   static void delete_maplEstringcOboolmUgR(void *p);
   static void deleteArray_maplEstringcOboolmUgR(void *p);
   static void destruct_maplEstringcOboolmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,bool*>*)
   {
      map<string,bool*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,bool*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,bool*>", -2, "map", 96,
                  typeid(map<string,bool*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOboolmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,bool*>) );
      instance.SetNew(&new_maplEstringcOboolmUgR);
      instance.SetNewArray(&newArray_maplEstringcOboolmUgR);
      instance.SetDelete(&delete_maplEstringcOboolmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOboolmUgR);
      instance.SetDestructor(&destruct_maplEstringcOboolmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,bool*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,bool*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOboolmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,bool*>*)0x0)->GetClass();
      maplEstringcOboolmUgR_TClassManip(theClass);
   }

   static void maplEstringcOboolmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOboolmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,bool*> : new map<string,bool*>;
   }
   static void *newArray_maplEstringcOboolmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,bool*>[nElements] : new map<string,bool*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOboolmUgR(void *p) {
      delete ((map<string,bool*>*)p);
   }
   static void deleteArray_maplEstringcOboolmUgR(void *p) {
      delete [] ((map<string,bool*>*)p);
   }
   static void destruct_maplEstringcOboolmUgR(void *p) {
      typedef map<string,bool*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,bool*>

namespace ROOT {
   static void maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR_Dictionary();
   static void maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(void *p = 0);
   static void *newArray_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(void *p);
   static void deleteArray_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(void *p);
   static void destruct_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>*)
   {
      map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>", -2, "map", 96,
                  typeid(map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>) );
      instance.SetNew(&new_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR);
      instance.SetDelete(&delete_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>*)0x0)->GetClass();
      maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*> : new map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>;
   }
   static void *newArray_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>[nElements] : new map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(void *p) {
      delete ((map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>*)p);
   }
   static void deleteArray_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(void *p) {
      delete [] ((map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>*)p);
   }
   static void destruct_maplEstringcOROOTcLcLMathcLcLLorentzVectorlEROOTcLcLMathcLcLPxPyPzE4DlEdoublegRsPgRmUgR(void *p) {
      typedef map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> >*>

namespace ROOT {
   static void maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR_Dictionary();
   static void maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(void *p = 0);
   static void *newArray_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(Long_t size, void *p);
   static void delete_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(void *p);
   static void deleteArray_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(void *p);
   static void destruct_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>*)
   {
      map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>", -2, "map", 96,
                  typeid(map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>) );
      instance.SetNew(&new_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR);
      instance.SetNewArray(&newArray_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR);
      instance.SetDelete(&delete_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR);
      instance.SetDestructor(&destruct_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>*)0x0)->GetClass();
      maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR_TClassManip(theClass);
   }

   static void maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*> : new map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>;
   }
   static void *newArray_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>[nElements] : new map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(void *p) {
      delete ((map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>*)p);
   }
   static void deleteArray_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(void *p) {
      delete [] ((map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>*)p);
   }
   static void destruct_maplEstringcOROOTcLcLMathcLcLDisplacementVector3DlEROOTcLcLMathcLcLCartesian3DlEdoublegRcOROOTcLcLMathcLcLDefaultCoordinateSystemTaggRmUgR(void *p) {
      typedef map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<double>,ROOT::Math::DefaultCoordinateSystemTag>*>

namespace {
  void TriggerDictionaryInitialization_mydict_Impl() {
    static const char* headers[] = {
"../interface/ConfigFileLine.h",
"../interface/config.h",
"../interface/ConfigParser.h",
"../interface/counter.h",
"../interface/plotter.h",
"../interface/ReadInputFile.h",
"../interface/readTree.h",
"../interface/TMVAPlotClass.h",
"../interface/TMVATrainingClass.h",
"../interface/treeReader.h",
"../interface/utils.h",
0
    };
    static const char* allHeaders[] = {
"../interface/ConfigFileLine.h",
"../interface/ConfigParser.h",
"../interface/ReadInputFile.h",
"../interface/TMVAPlotClass.h",
"../interface/TMVATrainingClass.h",
"../interface/config.h",
"../interface/counter.h",
"../interface/plotter.h",
"../interface/readTree.h",
"../interface/treeReader.h",
"../interface/utils.h",
"./../interface/LinkDef.h",
// Content file skipped for reproducibility
// Umbrella file skipped for reproducibility
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/Interpreter/RuntimeException.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/Interpreter/RuntimeUniverse.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/Interpreter/ValuePrinter.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/Interpreter/ValuePrinterInfo.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/emmintrin.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/float.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/immintrin.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/mm_malloc.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/mmintrin.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/stdarg.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/stddef.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/stdint.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/x86intrin.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/etc/cling/lib/clang/3.5/include/xmmintrin.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Buttons.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/DllImport.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/ESTLType.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Foption.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/GuiTypes.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/BitReproducible.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/Cartesian3D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/CoordinateSystemTags.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/Cylindrical3D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/CylindricalEta3D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/DisplacementVector3D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/GenVectorIO.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/GenVector_exception.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/LorentzVector.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/Polar3D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/Polar3Dfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/PositionVector3Dfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/PtEtaPhiE4D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/PtEtaPhiM4D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/PxPyPzE4D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/PxPyPzM4D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/eta.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/GenVector/etaMax.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/Math.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/Vector3D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/Vector3Dfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/Vector4D.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Math/Vector4Dfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/RConfig.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/RConfigure.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/RVersion.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Riosfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Rtypeinfo.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/Rtypes.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TArray.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TArrayC.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TArrayD.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TArrayF.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TArrayI.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TArrayS.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAttAxis.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAttCanvas.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAttFill.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAttImage.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAttLine.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAttMarker.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAttPad.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAttText.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TAxis.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TBits.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TBox.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TBranch.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TBranchElement.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TBuffer.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TCanvas.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TCanvasImp.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TChain.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TClass.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TClassRef.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TClingRuntime.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TCollection.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TColor.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TCut.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TDataType.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TDatime.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TDictionary.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TDirectory.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TDirectoryFile.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TError.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TFile.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TFitResultPtr.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TFormula.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TGaxis.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TGenericClassInfo.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TH1.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TH1F.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TH2.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TH2F.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/THStack.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/THashTable.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TImage.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TInetAddress.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TIterator.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TKey.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TLatex.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TLeaf.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TLegend.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TLine.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TList.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TLorentzVector.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/ClassInfo.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/Config.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/Configurable.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/DataInputHandler.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/DataSet.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/DataSetInfo.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/DataSetManager.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/Event.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/Factory.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/MsgLogger.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/Option.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/Reader.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/Tools.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/Types.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/VariableInfo.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMVA/VariableTransformBase.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMap.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMath.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMathBase.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrix.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixDBasefwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixDSymfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixDfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixF.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixFBasefwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixFUtils.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixFUtilsfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixFfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixT.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixTBase.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TMatrixTUtils.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TNamed.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TNtuple.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TObjArray.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TObjString.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TObject.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TPad.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TPaletteAxis.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TPave.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TPaveText.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TQObject.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TROOT.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TRandom.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TRandom3.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TRef.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TRotation.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TSchemaHelper.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TSeqCollection.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TStorage.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TString.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TStyle.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TSysEvtHandler.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TSystem.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TText.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TTime.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TTimer.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TTree.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TUUID.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TUrl.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TVector2.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TVector3.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TVectorDfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TVectorFfwd.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TVersionCheck.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TVirtualPad.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TVirtualTreePlayer.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TVirtualX.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/TXMLEngine.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/snprintf.h",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include/strlcpy.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/algorithm",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/array",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/backward/auto_ptr.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/backward/binders.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/algorithmfwd.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/alloc_traits.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/allocator.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/atomic_lockfree_defines.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/basic_ios.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/basic_ios.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/basic_string.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/basic_string.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/char_traits.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/codecvt.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/concept_check.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/cpp_type_traits.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/cxxabi_forced.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/exception_defines.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/exception_ptr.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/fstream.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/functexcept.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/functional_hash.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/hash_bytes.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/hashtable.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/hashtable_policy.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/ios_base.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/istream.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/list.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/locale_classes.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/locale_classes.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/locale_facets.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/locale_facets.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/locale_facets_nonio.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/locale_facets_nonio.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/localefwd.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/memoryfwd.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/move.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/nested_exception.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/opt_random.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/ostream.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/ostream_insert.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/postypes.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/ptr_traits.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/random.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/random.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/range_access.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/shared_ptr.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/shared_ptr_base.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/sstream.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_algo.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_algobase.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_bvector.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_construct.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_function.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_heap.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_iterator.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_iterator_base_funcs.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_iterator_base_types.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_list.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_map.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_multimap.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_multiset.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_numeric.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_pair.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_raw_storage_iter.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_relops.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_set.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_tempbuf.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_tree.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_uninitialized.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stl_vector.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stream_iterator.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/streambuf.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/streambuf_iterator.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/stringfwd.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/unique_ptr.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/unordered_map.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/uses_allocator.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/bits/vector.tcc",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cassert",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cctype",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cerrno",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/clocale",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cmath",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cstdint",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cstdio",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cstdlib",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ctime",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cwchar",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/cwctype",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/debug/debug.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/exception",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ext/alloc_traits.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ext/atomicity.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ext/concurrence.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ext/new_allocator.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ext/numeric_traits.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ext/string_conversions.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ext/type_traits.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/fstream",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/functional",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/initializer_list",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/iomanip",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ios",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/iosfwd",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/iostream",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/istream",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/iterator",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/limits",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/list",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/locale",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/map",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/memory",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/new",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/numeric",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/ostream",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/random",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/set",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/sstream",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/stdexcept",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/streambuf",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/string",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/tuple",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/type_traits",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/typeinfo",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/unordered_map",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/utility",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/vector",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/atomic_word.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/basic_file.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++allocator.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++config.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++io.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/c++locale.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/cpu_defines.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/ctype_base.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/ctype_inline.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/gthr-default.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/gthr.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/messages_members.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/os_defines.h",
"/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.8.1/../../../../include/c++/4.8.1/x86_64-unknown-linux-gnu/bits/time_members.h",
"/usr/include/_G_config.h",
"/usr/include/alloca.h",
"/usr/include/asm-generic/errno-base.h",
"/usr/include/asm-generic/errno.h",
"/usr/include/asm/errno.h",
"/usr/include/assert.h",
"/usr/include/bits/byteswap.h",
"/usr/include/bits/confname.h",
"/usr/include/bits/endian.h",
"/usr/include/bits/environments.h",
"/usr/include/bits/errno.h",
"/usr/include/bits/fcntl.h",
"/usr/include/bits/huge_val.h",
"/usr/include/bits/huge_valf.h",
"/usr/include/bits/huge_vall.h",
"/usr/include/bits/inf.h",
"/usr/include/bits/locale.h",
"/usr/include/bits/mathcalls.h",
"/usr/include/bits/mathdef.h",
"/usr/include/bits/nan.h",
"/usr/include/bits/posix_opt.h",
"/usr/include/bits/pthreadtypes.h",
"/usr/include/bits/sched.h",
"/usr/include/bits/select.h",
"/usr/include/bits/setjmp.h",
"/usr/include/bits/sigset.h",
"/usr/include/bits/stat.h",
"/usr/include/bits/stdio_lim.h",
"/usr/include/bits/sys_errlist.h",
"/usr/include/bits/time.h",
"/usr/include/bits/types.h",
"/usr/include/bits/typesizes.h",
"/usr/include/bits/uio.h",
"/usr/include/bits/waitflags.h",
"/usr/include/bits/waitstatus.h",
"/usr/include/bits/wchar.h",
"/usr/include/bits/wordsize.h",
"/usr/include/ctype.h",
"/usr/include/endian.h",
"/usr/include/errno.h",
"/usr/include/fcntl.h",
"/usr/include/features.h",
"/usr/include/getopt.h",
"/usr/include/gnu/stubs-64.h",
"/usr/include/gnu/stubs.h",
"/usr/include/libintl.h",
"/usr/include/libio.h",
"/usr/include/linux/errno.h",
"/usr/include/locale.h",
"/usr/include/math.h",
"/usr/include/pthread.h",
"/usr/include/sched.h",
"/usr/include/stdint.h",
"/usr/include/stdio.h",
"/usr/include/stdlib.h",
"/usr/include/string.h",
"/usr/include/sys/cdefs.h",
"/usr/include/sys/select.h",
"/usr/include/sys/sysmacros.h",
"/usr/include/sys/types.h",
"/usr/include/time.h",
"/usr/include/unistd.h",
"/usr/include/wchar.h",
"/usr/include/wctype.h",
"/usr/include/xlocale.h",
"mydict.cc.h",
0
    };
    static const char* includePaths[] = {
"../interface/",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include",
"/afs/cern.ch/sw/lcg/app/releases/ROOT/5.99.06/x86_64-slc6-gcc48-opt/root/include",
"/afs/cern.ch/work/d/depoyraz/VBS/TP/ANALYSIS/TestFNS/src/",
0
    };
    static const char* payloadCode = 
"\n"
"#ifndef G__VECTOR_HAS_CLASS_ITERATOR\n"
"  #define G__VECTOR_HAS_CLASS_ITERATOR\n"
"#endif\n"
"\n"
;
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("mydict",
        headers, allHeaders, includePaths, payloadCode,
        TriggerDictionaryInitialization_mydict_Impl, {});
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_mydict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_mydict() {
  TriggerDictionaryInitialization_mydict_Impl();
}
