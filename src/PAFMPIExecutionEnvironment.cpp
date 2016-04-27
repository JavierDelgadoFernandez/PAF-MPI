#include "PAFMPIExecutionEnvironment.hpp"

#include "TMessage.h"

#include <iostream>

PAFMPIExecutionEnvironment::PAFMPIExecutionEnvironment()
    : fInputList(0)
{
    fInputList = new TList();
}

PAFMPIExecutionEnvironment::~PAFMPIExecutionEnvironment()
{

}

void PAFMPIExecutionEnvironment::AddFeedback(const char* name)
{

}

void PAFMPIExecutionEnvironment::AddInput(TObject* obj)
{
    fInputList->Add(obj);
}

TDrawFeedback* PAFMPIExecutionEnvironment::CreateDrawFeedback()
{
    return NULL;
}

void PAFMPIExecutionEnvironment::SetProgressUpdated(PAFIProgressUpdated* progressUpdated)
{

}

PAFIProgressUpdated* PAFMPIExecutionEnvironment::GetProgressUpdated()
{
    return NULL;
}

void PAFMPIExecutionEnvironment::Dispose()
{

}

Bool_t PAFMPIExecutionEnvironment::EnablePackage(PAFPackage* package)
{
    return true;
}                                                                                                                                                                                                                                                                                                    

Bool_t PAFMPIExecutionEnvironment::LoadLibrary(PAFLibrary* library)
{
    return true;
}

Bool_t PAFMPIExecutionEnvironment::UploadPackage(PAFPackage* package)                                                                                                                                                                                                                                
{
    return true;
}

void PAFMPIExecutionEnvironment::Initialise()
{

}

void PAFMPIExecutionEnvironment::Process(PAFBaseSelector* selector, Long64_t nentries)
{

}

void PAFMPIExecutionEnvironment::Process(PAFBaseSelector* selector, TDSet* dataFiles, Long64_t firstEvent, Long64_t nEvents)
{
    TMessage t;
    t.WriteObject(fInputList);
    std::cout << "Object" << std::endl;
    std::cout << t.Buffer() << std::endl;
    std::cout << "End" << std::endl;
}
