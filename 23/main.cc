#include "header.ih"

int main()
{
        long long number = 1208549018309;
        printBigDirect(std::cout, number);
        number = 11208549018309;
        printBigDirect(std::cout, number);
        number = 111208549018309;
        printBigDirect(std::cout, number);
        
        long long number2 = 1208549018309;
        printBig(std::cout, number2);
        number2 = 11208549018309;
        printBig(std::cout, number2);
        number2 = 111208549018309;
        printBig(std::cout, number2);
}
