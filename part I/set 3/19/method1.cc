// method1.cc
#include "myheader.ih"

using namespace std;


void method1(unsigned long long int const valueToAnalyze, int nrOfTurns)
{
    size_t counter = 0;

    while (nrOfTurns != 0)
    {
        unsigned long long int valueToCompute = valueToAnalyze;
        counter = 0;
        while (valueToCompute != 0)
        {
            valueToCompute >>= 1;       // right shift bits
            ++counter;
        }

        counter -= 1;                   // calc offset not the nr of bits
        --nrOfTurns;
    }

    cout << "Method 1 right shift bits.\n";
    cout << "MSbit of " << valueToAnalyze << " is at bit offset "
        << counter << '\n';

    return;
}
