#include "derived/derived.hh"
#include "iostream"
using std::cout;
using std::string;

int main()
{
    Derived derivedobj{string("something"), string("else"), string("entirely")};

    std::cout << derivedobj[0]; // << '\n';
}
