// method4.cc
#include "myheader.ih"

using namespace std;


void method4(unsigned long long int const valueToAnalyze, int nrOfTurns)
{
    size_t counter = 0;

    while (nrOfTurns != 0)
    {
        unsigned long long int valueToCompute = valueToAnalyze;
        counter = 0;

        while ((valueToCompute & 1) != 1)
        {
            valueToCompute >>= 1;    // right shift bits
            ++counter;
        }

        --nrOfTurns;
    }

    cout << "Method 4 right shift bits.\n";
    cout << "LSbit of " << valueToAnalyze << " is at bit offset "
        << counter << '\n';

    return;
}
