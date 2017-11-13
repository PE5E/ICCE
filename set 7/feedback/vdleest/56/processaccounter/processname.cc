#include "processaccounter.ih"

char *ProcessAccounter::processName() const
{
    return d_process->ac_comm;
}
