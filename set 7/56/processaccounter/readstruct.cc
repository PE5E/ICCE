#include "processaccounter.ih"

bool ProcessAccounter::readStruct()
{                                               // read bytes, interpret as
                                                // struct 'acct_v3'
    d_file.read(reinterpret_cast<char *>(d_process), d_acsz);
    return d_file.good();
}
