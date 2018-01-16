#include <chrono>
#include <iostream>
#include <ratio>
#include <cstdlib>

int main(int argc, char *argv[])
{
    if (argc != 3)
        return 1;

    // hours to minutes
    std::chrono::minutes mins{std::chrono::hours{atol(argv[1])}};
    std::cout << argv[1] 
              << " hours in seconds: " 
              <<  mins.count() 
              << '\n';
    // seconds to minutes, integral
    std::chrono::seconds secs{atol(argv[2])};
    std::cout << argv[2] 
              << " seconds in integer minutes: "
              << std::chrono::duration_cast<std::chrono::minutes>(secs).count() << '\n';
    // seconds to minutes, floating
    std::chrono::duration<double, std::ratio<60, 1>> fmins= secs;
    std::cout << argv[2] 
              << " seconds in floating minutes: " 
              <<  fmins.count() << '\n';
}
