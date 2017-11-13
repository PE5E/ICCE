#include "demo.ih"

demo::~demo()
{
    // move operations must allow the destructor to decide that no
    // destruction should be performed, e.g. by setting a pointer data
    // member to 0, returning immediately if this data member equals 0
    cout << '\t' << __FILE__ << ": destructor called" << '\n';
}
