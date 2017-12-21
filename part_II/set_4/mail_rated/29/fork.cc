#include "fork.ih"

void Fork::fork()
{
    if ((d_pid = ::fork()) < 0)
        throw Exception{} << "Fork::fork(): " << errnodescr;

    if (d_pid == 0)
    {
        childProcess();
        throw Exception(1); // We should not come here,
    }                       // as childProcess should exit

    parentProcess();
}