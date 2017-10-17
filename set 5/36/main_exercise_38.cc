#include <iostream>
#include <string>
#include "strings.h"                     // 'Filter' class


using namespace std;

int main() // int argc, char *argv[], char* envp[])
{

    string A = "Hello world for the first time\n"; 
    string B = "Hello world for the second time\n";

    Strings strA;   // create first object with first string as data
    strA.add(A);

    Strings strB;   // create second object with second string as data
    strB.add(B);

    cout << "before swapping: \n";
    cout << *strA.data();
    cout << *strB.data();


    strA.stringsSwap(strA, strB);   // call function to swap data.
                                    // since these are the pointer weeks, no data
                                    // is swapped really. Only the addresses in the 
                                    // pointers pointing to the data.

    cout << "after swapping: \n";
    cout << *strA.data();
    cout << *strB.data();







}
