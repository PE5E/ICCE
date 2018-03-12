#include "binexpr/binexpr.hh" 
#include <vector>
#include <iostream>
using std::cout;
using IntVect = std::vector<int>;
int main()
{
    int myInts[] = {16,12,66,22,33,44,55,22,33,44};
    IntVect one( myInts, myInts + 2 );
    for (IntVect::iterator iter = one.begin(); iter != one.end(); ++iter)
        cout << *iter << '\n';
    IntVect two( myInts + 2, myInts + 4);
    IntVect three( myInts + 4, myInts + 6);
    IntVect four( myInts + 6, myInts + 8);
//     IntVect five;

    cout << "---" << '\n';
    // cout << one.size() << '\n';
    // cerr << typeid(one).name() << '\n';
    
    four = one + two + three + four;
    cout << "---" << '\n';
    for (IntVect::iterator iter = four.begin(); iter != four.end(); ++iter)
        cout << *iter << '\n';
    // should use operator + template
//     five = one + two;
//     cout << four[1] << '\n';
}
