#include "processaccounter.ih"

ProcessAccounter::ProcessAccounter(std::ifstream &is)
    :
        d_file(is)
{
    d_process =  new acct_v3;
}
