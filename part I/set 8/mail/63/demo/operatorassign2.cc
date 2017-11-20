#include "demo.ih"

demo &demo::operator=(demo &&tmp)
{
    cout << '\t' << __FILE__ << ": move assignment overload called" << '\n';
    swap(tmp);
    return *this;
}
