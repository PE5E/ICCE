#include "processaccounter.ih"

void ProcessAccounter::printProcess() const
{
    std::cout << "\'" << processName() << "\'" << " " 
                      << exitCode()
                      << '\n';
}
