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
              << " seconds."
              << '\n';
    // seconds to minutes, integral
    std::chrono::seconds secs{atol(argv[2])};
    std::cout << argv[2] 
              << " seconds in integer minutes: "
              << std::chrono::duration_cast<std::chrono::minutes>(secs).count() 
              << " minutes. "
              << '\n';
    // seconds to minutes, floating
    constexpr std::chrono::seconds spm{std::chrono::minutes{1}};
    std::chrono::duration<double, std::ratio<spm.count()>> fmins= secs;
    std::cout << argv[2] 
              << " seconds in floating minutes: " 
              <<  fmins.count() 
              << " minutes."
              << '\n';
}
