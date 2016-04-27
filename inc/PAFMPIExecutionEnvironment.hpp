#pragma once

#include "PAFIExecutionEnvironment.h"

#include "TList.h"

class PAFMPIExecutionEnvironment : public PAFIExecutionEnvironment
{
    public:
        PAFMPIExecutionEnvironment();
        virtual ~PAFMPIExecutionEnvironment();

        virtual void AddFeedback(const char* name);
        
        virtual void AddInput(TObject* obj);
        virtual TDrawFeedback* CreateDrawFeedback();

        virtual Bool_t EnablePackage(PAFPackage* package);
        
        virtual void SetProgressUpdated(PAFIProgressUpdated* progressUpdated);
        virtual PAFIProgressUpdated* GetProgressUpdated();
        
        virtual Bool_t LoadLibrary(PAFLibrary* library);
        virtual Bool_t UploadPackage(PAFPackage* package);
        
        virtual void Initialise();
        
        virtual void Process(PAFBaseSelector* selector, TDSet* dataFiles, Long64_t firstEvent, Long64_t nEvents);
        virtual void Process(PAFBaseSelector* selector, Long64_t nentries);
        
        virtual void Dispose();
        
    protected: 
        TList* fInputList;
};
