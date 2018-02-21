#include <iostream>
using namespace std;

template <typename newType>
newType as(auto &param)
{
    return static_cast<newType>(param);
}

int main()
{   
    char dub = 'a'; 
    cout << dub << '\n'
         << as<int>(dub) << '\n';
}
