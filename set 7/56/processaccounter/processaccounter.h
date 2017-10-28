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

        bool readStruct();

        int exitCode()      const;
        char *processName() const;
        void badProcesses();
        void allProcesses();
        void resetStream(); 
    private:
        void printProcess() const;
};
        
#endif
