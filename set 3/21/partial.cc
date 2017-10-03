// partial.cc
#include "myheader.ih"

using namespace std;

int partial(string firstBlock, string leftFactor, string& rest)
{
    string newNr = "";
    int digit = 9;

    while(true)
    {
        newNr = leftFactor + to_string(digit);
        if (stoi(newNr) * digit <= stoi(firstBlock))
            break;
        --digit;
    } 

    rest = to_string(stoi(firstBlock) - stoi(newNr) * digit);
    cout << digit;
    return(digit);
}
