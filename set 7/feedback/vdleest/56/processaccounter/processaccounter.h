#ifndef INCLUDED_PROCESSACCOUNTER_
#define INCLUDED_PROCESSACCOUNTER_

#include <fstream>                          // ifstream
#include <string>  // JB: SF
#include "/usr/include/linux/acct.h"        // struct 'acct_v3'

using std::string; // JB: Never force using declaration on the user!
                   // JB: and SF, too.

class ProcessAccounter
{
    static size_t const d_acsz = sizeof(acct_v3); // JB: use an enum! Use 's_' prefix for static data.
    acct_v3 *d_process;
    std::ifstream &d_file;

    public:
        ~ProcessAccounter();
        ProcessAccounter(std::ifstream &is); // JB: BS: Use of fstream where stream would do wastes generality.

        void badProcesses();            // processes with nonzero exit code
        void allProcesses();            // all processes and their exit code
        bool fileGood()     const;
    private:
        bool readProcess();             // read a process from file
        void resetStream();             // restart at beginning
        int exitCode()      const;
        char *processName() const;
        void printProcess() const;

};
        
#endif
