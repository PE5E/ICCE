#ifndef INCLUDED_PROCESSACCOUNTER_
#define INCLUDED_PROCESSACCOUNTER_

#include <fstream>                          // ifstream
#include <string>
#include "/usr/include/linux/acct.h"        // struct 'acct_v3'

using std::string;

class ProcessAccounter
{
    static size_t const d_acsz = sizeof(acct_v3);
    acct_v3 *d_process;
    std::ifstream &d_file;

    public:
        ~ProcessAccounter();
        ProcessAccounter(std::ifstream &is);

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
