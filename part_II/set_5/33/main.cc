#include "derived/derived.hh"
#include "iostream"
using std::cout;
using std::string;

int main()
{
    Derived derivedobj{string("something"), string("else"), string("entirely")};
//    cout << *derivedobj.begin() << '\n';
//    cout << *static_cast<std::vector<std::string>&>(derivedobj).begin() << '\n';
    std::cerr << derivedobj[0]; // << '\n';
//    cout.flush();
//    cout << "---" << '\n';
//    cout << derivedobj[0] << '\n';
}
