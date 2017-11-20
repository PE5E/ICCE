#include "processaccounter.ih"

int ProcessAccounter::exitCode() const
{
    return d_process->ac_exitcode;
}
