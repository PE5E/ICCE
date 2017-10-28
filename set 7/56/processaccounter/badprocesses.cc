#include "processaccounter.ih"

void ProcessAccounter::badProcesses()
{
    resetStream();
    while (readProcess())
        if (exitCode() != 0)
            printProcess();
}
