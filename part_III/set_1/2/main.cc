#include <iostream>
using namespace std;

template <typename NewType>
NewType as(auto &&param)
{
    return static_cast<NewType>(
            std::forward<decltype(param)>(param)
            );
}

int main()
{   
    char dub = 'a'; 
    cout << dub << '\n'
         << as<int>(dub) << '\n';
}
