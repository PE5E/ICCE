#include <iostream>
#include <string>
#include <list>

using std::list;
using std::cout;
using std::string;

void showlist(list<string> &target)
{
    for 
    (
        list<string>::iterator from = target.begin();
        from != target.end(); 
        ++from
    )
        cout << *from << " ";
    cout << '\n';
}


int main() 
{
    string
        array[] =           // C array
        {
            "charlie",
            "alpha",
            "bravo",
            "alpha"
        };

    list<string>            // same size as array
        target
        (
            array, array + sizeof(array) / sizeof(string) // ugly!
        );

    showlist(target);

    target.sort();
    showlist(target);

    target.unique();
    showlist(target);
}

