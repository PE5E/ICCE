#include <cmath>
#include <iostream>
#include <functional>
using namespace std;

void sqrtArg(double &arg)
{
    arg = sqrt(arg);
}

template<typename Fun, typename Arg>
void call(Fun fun, Arg arg)
{
    fun(arg);
    cout << "in call: arg = " << arg << '\n';
}

int main()
{
    double value = 3;
    call(sqrtArg, value);
    cout << "Passed value, returns: " << value << '\n';
    
    call(sqrtArg, ref(value));
    cout << "Passed ref(value), returns: " << value << '\n';
}
