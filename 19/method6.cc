// method6.cc
#include "myheader.h"
#include <iostream>

using namespace std;


void method6(unsigned long long int const valueToAnalyze, int nrOfTurns)
{
    size_t counter = 0;
    while (nrOfTurns != 0)
    {
        unsigned long long int valueToCompute = valueToAnalyze;
        size_t ttLow = sizeof (valueToCompute) * 8; // nr of bytes * 8 bits
        size_t ttHigh = 0;
            // ttLow and ttHigh values are swapped for LSB calc

        size_t ttMid;
        ttMid = (ttLow + ttHigh) / 2;

        while (1)
        {
            valueToCompute = valueToAnalyze;

                // compute if last bit is before ttMid
            size_t shiftedValue = valueToCompute <<= ttMid;  
            if (shiftedValue == 0)
            {
                ttLow = ttMid;
                ttMid = (ttLow + ttHigh) / 2;
            }

            else if (ttHigh == ttMid)
            {
                counter = sizeof (valueToAnalyze) * 8 - (ttMid + 1);
                break;
            }
            else
            {
                ttHigh = ttMid;
                ttMid = (ttLow + ttHigh) / 2;
            }
        }

        --nrOfTurns;
    }

    cout << "Method 6 binary search.\n";
    cout << "LSbit of " << valueToAnalyze << " is at bit offset "
        << counter << '\n';

    return;
}
