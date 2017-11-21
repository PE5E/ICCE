#include "demo/demo.h"
#include <iostream>
#include <utility>

void pl()           // not related to poland
{
    std::cout << "----------------------------------------" << '\n';
}


demo fun()          // for copy elision demonstration
{
    std::cout << "fun() called" << '\n';
    demo ret;
    std::cout << "end of fun()" << '\n';
    return ret;
}

int main()
{
    demo thing1;        // up here for clean output later

    // copy elision 
    pl();
    std::cout << __FILE__ << __LINE__ << ": COPY ELISION EXAMPLE" << '\n';

    demo thing2(fun());             // copy elision: only 1 constructor call

    
    // move constructor
    pl();
    std::cout << __FILE__ << __LINE__ << ": MOVE CONSTRUCTOR EXAMPLE"
              << '\n';
    
    demo thing3(std::move(thing2));

    // copy assignment
    pl();
    std::cout << __FILE__ << __LINE__ << ": COPY ASSIGNMENT EXAMPLE"
              << '\n';
    thing1 = thing3;


    // move assignment
    pl();
    std::cout << __FILE__ << __LINE__ << ": MOVE ASSIGNMENT EXAMPLE"
              << '\n';
    demo thing5 = fun();            

    pl();
    std::cout << __FILE__ << __LINE__ << ": END OF PROGRAM" << '\n';
}
