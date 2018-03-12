#include "binexpr/binexpr.hh" 

#include <vector>
#include <iostream>

using std::cout;
using IntVect = std::vector<int>;

int main()
{
    int myInts[] = {16,12,66,22,33,44,55,22,33,44};
    IntVect one( myInts, myInts + 2 );
    IntVect two( myInts + 2, myInts + 4);
    IntVect three( myInts + 4, myInts + 6);
    IntVect four( myInts + 6, myInts + 8);
    
    four = one + two + three + four;
    for (IntVect::iterator it = four.begin(); it != four.end(); ++it)
	    cout << *it << '\n';
}
