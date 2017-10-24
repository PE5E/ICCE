#include "strings.ih"

void Strings::add(string const &next)
/*  original code
{
    string *tmp = enlarge();            // make room for the next string,
                                        // tmp is the new string *

    tmp[d_size] = next;                 // store next

    destroy();                          // return old memory

    d_str = tmp;                        // update d_str and d_size
    ++d_size;
}
*/


{ 
    cout << "add.cc regel 20";    

    string *strPointer = new string(next); // store new string address in pointer
        cout << "add.cc regel 23";    
    if (d_size >= d_capacity)
    {
        cout << "add.cc regel 26";
        d_capacity <<= 1;       // multiply d_capacity by 2

        cout << "add.cc regel 29";
        reserve();              // reserve memory for strings
    }
        cout << "add.cc regel 32";
    d_arrayStr[d_size] = strPointer;   // store new pointer in array
        cout << "add.cc regel 34";
    ++d_size;
            cout << "add.cc regel 36";
}   
