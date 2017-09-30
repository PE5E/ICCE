// method2.cc
#include "myheader.ih"

using namespace std;


double const ln2 = log (2);

void method2(unsigned long long int const valueToAnalyze, int nrOfTurns)
{
    size_t counter = 0;

    while (nrOfTurns != 0)
    {
        unsigned long long int valueToCompute = valueToAnalyze;

        counter = log (valueToCompute) / ln2;  // ln2 lives in ln2.cc

        --nrOfTurns;
    }

    cout << "Method 2 logarithm.\n";
    cout << "MSbit of " << valueToAnalyze << " is at bit offset "
        << counter << '\n';

    return;
}
