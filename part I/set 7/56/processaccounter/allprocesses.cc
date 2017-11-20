#include "processaccounter.ih"

void ProcessAccounter::allProcesses()
{
    resetStream();
    while (readProcess())
        printProcess();
}

