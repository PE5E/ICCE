#include <iostream>
// this file is for testing & should be removed
int main(int argc, char *argv[], char** envp)
{
    std::cout << argc << '\n';
    std::cout << argv[0] << '\n';
    std::cout << *argv << '\n';
    std::cout << **argv << '\n';

    std::cout << envp << '\n';          // returns adress of first element
    std::cout << envp[0] << '\n';       // first element
    std::cout << sizeof(envp) << '\n'; 
}
