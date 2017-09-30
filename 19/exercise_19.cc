// exercise_19.cc
#include "myheader.ih"

using namespace std;


int main(int argc, char* argv[])
{
    istringstream iSS(argv[1]);
        // need istringstream here. stoi can't handle long long ints

    unsigned long long int valueToAnalyze;
    iSS >> valueToAnalyze;

    size_t method = stoi(argv[2]);
    size_t nrOfTurns = 1;

    if (argc > 3)                    // if provided set nr of turns to calculate
        nrOfTurns = stoi(argv[3]);

    if (method == 1)
        method1(valueToAnalyze, nrOfTurns);
    else if (method == 2)
        method2(valueToAnalyze, nrOfTurns);
    else if (method == 3)
        method3(valueToAnalyze, nrOfTurns);
    else if (method == 4)
        method4(valueToAnalyze, nrOfTurns);
    else if (method == 5)
        method5(valueToAnalyze, nrOfTurns);
    else if (method == 6)
        method6(valueToAnalyze, nrOfTurns);
    else
        cout << "Please provide the second argument as a number 1 - 6.\n";
    
}

/*
The fastest method for finding the MSB depends on the input. 
Method 1 is quick for small nrs. But big nrs can request up to 64 calculations.
Method 3 is relative fast when calculating big nrs. This method takes a maximum
of 6 calculations.
Method 2 seems to have a constant calc speed which is never the fastest.
*/    
