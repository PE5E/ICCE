// method3.cc
#include "myheader.ih"

using namespace std;


void method3(unsigned long long int const valueToAnalyze, int nrOfTurns)
{
    size_t counter = 0;

    while (nrOfTurns != 0)
    {
        unsigned long long int valueToCompute = valueToAnalyze;
        size_t ttLow = 0;
        size_t ttHigh = sizeof (valueToCompute) * 8; // nr of bytes * 8 bits
        size_t ttMid;

        ttMid = (ttLow + ttHigh) / 2;

        while (true)
        {
            valueToCompute = valueToAnalyze;

                // compute if all bits are before ttMid
            size_t shiftedValue = valueToCompute >>= ttMid;  
            if (shiftedValue == 0)
            {
                ttHigh = ttMid;
                ttMid = (ttLow + ttHigh) / 2;
            }

            else if (ttLow == ttMid)
            {
                counter = ttMid;
                break;
            }
            else
            {
                ttLow = ttMid;
                ttMid = (ttLow + ttHigh) / 2;
            }
        }

        --nrOfTurns;
    }

    cout << "Method 3 binary search.\n";
    cout << "MSbit of " << valueToAnalyze << " is at bit offset "
        << counter << '\n';

    return;
}
