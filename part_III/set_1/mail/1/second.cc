#include "main.ih"

void second()
{
    PointerUnion pu = {add};
    cout << "second.cc function address: " << pu.vp << '\n';
}
