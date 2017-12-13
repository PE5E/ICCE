#include "fork.ih"

void Fork::fork()
{
	if ((d_pid = ::fork()) < 0)
        exit(1);

	if (d_pid == 0)
	{
		childProcess();
		exit(1);
	}

	parentProcess();
}