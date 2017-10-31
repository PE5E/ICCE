#include "processaccounter/processaccounter.h"
#include "main.h"           // 'Opts' struct, parseArgs
#include <fstream>

using std::string;

int main(int argc, char *argv[])
{
    Opts opt = parseArgs(argc, argv);                    // cmdline default values

    std::ifstream file(opt.path, std::ios::binary);      // open file stream

    ProcessAccounter object(file);
    if (!object.fileGood()) return 1;                    // check ifstream.good
    opt.aflag ? object.allProcesses() : object.badProcesses();
}
