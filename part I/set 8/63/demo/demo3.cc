#include "demo.ih"

demo::demo(demo &&tmp)
{
    cout << '\t' <<  __FILE__ << ": move constuctor called" << '\n';
}
