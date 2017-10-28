#include "processaccounter.ih"

void ProcessAccounter::badProcesses()
{
    resetStream();
    while (readStruct())
        if (exitCode() != 0)
            printProcess();
}
