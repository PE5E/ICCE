#include <iostream>
#include <string>
#include <list>
using std::string;
using std::list;
using std::cout;

int main()
{
    list<string> object;
    object.push_front(string("hoi"));
    object.push_back(string("wereld"));
        
    list<string> argument(object);                  // copy

    object.splice(++object.begin(), argument);      // this undoes the copy

    cout << object.size() << '\n';
    cout << argument.size() << '\n';
    cout << "---" << '\n';

    for (list<string>::iterator iter = object.begin(); 
                                iter != object.end(); 
                              ++iter)
    {   
        cout << *iter << '\n';
    }
}
