#include "processaccounter/processaccounter.h"
#include "main.h"           // 'Opts' struct, parseArgs
#include <fstream>

using std::string;

int main(int argc, char *argv[])
{
    Opts opt = parseArgs(argc, argv);                    // cmdline arguments 

    std::ifstream file(opt.path, std::ios::binary);      // open file stream

    ProcessAccounter object(file); // JB: naming!
    if (!object.fileGood()) return 1;  // JB: Layout!    // check ifstream.good
    opt.aflag ? object.allProcesses() : object.badProcesses();
    // JB: Ternary used as if-statement (return value ignored).
}
