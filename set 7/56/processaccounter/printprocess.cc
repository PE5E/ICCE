#include "processaccounter.ih"
#include <csignal>              // SIGTERM, SIGKILL

void ProcessAccounter::printProcess() const
{
    std::cout << "\'" << processName() << "\'" << " ";
    switch(exitCode())
    {
        case SIGTERM:
            std::cout << "SIGTERM";
            break;
        case SIGKILL:
            std::cout << "SIGKILL";
            break;
        default:
            std::cout << exitCode();
    } 
    std::cout << '\n';
}
