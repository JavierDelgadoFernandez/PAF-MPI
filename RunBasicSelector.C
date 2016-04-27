
void RunBasicSelector() 
{
	gSystem->Load("${PAFPATH}/lib/libPAF.so");
	gSystem->Load("libPAFMPI.so");

	PAFProject* myProject = new PAFProject();
	myProject->SetExecutionEnvironment(new PAFMPIExecutionEnvironment());
	myProject->AddDataFile("/home/javier/Downloads/Tree_TTWJets.root");
	myProject->AddSelectorPackage("BasicSelector");
	myProject->Run();
}
