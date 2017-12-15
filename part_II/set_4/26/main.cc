#include "ifdstreambuf/ifdstreambuf.hh"
#include <unistd.h>
#include <iostream>
#include <istream>

using namespace std;

int main()
{
    IFdStreambuf fds(STDIN_FILENO);
    istream      is(&fds);

    cout << is.rdbuf();
}

// as seen in the C++ annotations, Ch. 24