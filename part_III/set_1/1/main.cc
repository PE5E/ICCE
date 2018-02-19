#include "main.ih"

int main()
{
    second();
    
    PointerUnion pu = {add};
    cout << "main.cc function address: " << pu.vp << '\n';
}
