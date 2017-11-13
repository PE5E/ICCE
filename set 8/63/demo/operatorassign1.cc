#include "demo.ih"

demo &demo::operator=(demo const &other)
{
    cout << '\t' << __FILE__ << ": called copy assignment overload" << '\n';
    demo tmp(other);
    swap(tmp);
    return *this;
}
