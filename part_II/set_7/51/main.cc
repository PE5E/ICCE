#include <chrono>
#include <iomanip>
#include <iostream>

using namespace std;
using namespace chrono;

int main(int argc, char *argv[])
{
    int optionValue = 0;

    if (argc > 1)           // check if arguments are provided
    {
        string option = argv[1];
        string optionUnit = option.substr(option.length() - 1, 1);
        optionValue = stoi(option.substr(0, option.length() - 1));
    
        if (optionUnit == "h")
            optionValue *= 3600;
        else if (optionUnit == "m")
            optionValue *= 60;
        else if (optionUnit == "s")
            optionValue *= 1;
    }
    else
    {
        cout << "Provide an argument \n";
        return 0;
    }
 
    // get the current time
    time_point<system_clock> timePoint{system_clock::now()};

    // convert it to a std::time_t:
    time_t time = system_clock::to_time_t(timePoint);

    // display the time:
    cout << put_time(localtime(&time), "current local time: %c") << '\n';

    // display the gmtime, directly using gmtime's return value:
    cout << put_time(gmtime(&time), "gmtime            : %c %z") << '\n';

    // modifiy 'timePoint':
    timePoint += seconds(optionValue);

    // convert timePoint's value to std::time_t:
    time = system_clock::to_time_t(timePoint);

    // display the time:
    cout << put_time(localtime(&time), "The corrected time: %c") << '\n';

}
