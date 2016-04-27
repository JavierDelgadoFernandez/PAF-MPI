
#include "TROOT.h"

#include "mpi.h"

int main(int argc, char** argv)
{
    MPI_Init(&argc, &argv);
    
    gROOT->ProcessLine(".x RunBasicSelector.C");
    
    return MPI_Finalize();
}
