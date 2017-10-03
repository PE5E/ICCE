// square.cc
#include "myheader.ih"

using namespace std;

void square(string input, string leftFactor, string rest)
{
    string firstBlock = "";
    size_t length = input.length();
    
    if (length == 0)
    {
        cout << '\n';
        return;
    }

    if (length % 2 == 0)
    {
        firstBlock = input.substr(0,2);  // take first 2 digits to calculate
        input.erase(0, 2);              
    }
    else 
    {
        firstBlock = input.substr(0,1);  // take only the first digit
        input.erase(0, 1);
    }

    firstBlock = rest + firstBlock;
    string& remainder = rest;            // this reference can access rest from
                                         // within the function partial()

    int digit = 0;
    digit = partial(firstBlock, leftFactor, remainder);
    leftFactor = to_string(stoi(leftFactor + to_string(digit)) + digit);

    square(input, leftFactor, rest);    // the function calls itself to
                                        // calculate the rest
    return;
}

