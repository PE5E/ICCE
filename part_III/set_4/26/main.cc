#include "data/data.hh"
#include <iostream>
#include <string>

int main()
{  
    std::vector<std::string> ini = {"He", "ll", "o", "wo", "rld"};
    Data data{ini};
    
    std::cout << data.get<int>(3) << '\n';

    std::cout << data.get<long double>(1) << '\n';

    std::cout << data.get<std::string>(2) << '\n';
}
