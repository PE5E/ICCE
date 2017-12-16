#ifndef INCLUDED_FORK_
#define INCLUDED_FORK_

#include <sys/types.h>
#include <iosfwd>

class Fork
{
	pid_t d_pid;

	public:

		virtual ~Fork();
		void fork();

	protected:
		pid_t pid() const;
		int waitForChild();

	private:
		virtual void parentProcess() = 0;
		virtual void childProcess() = 0;
};

inline pid_t Fork::pid() const
{
	return d_pid;
}

#endif

//Note this class is inspired by the C++ annotations, ch. 24, and Bobcat.