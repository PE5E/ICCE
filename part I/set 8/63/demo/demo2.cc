#include "demo.ih"

demo::demo(demo const &other)
{
    cout << '\t' << __FILE__ << ": copy constructor called" << '\n';
}
