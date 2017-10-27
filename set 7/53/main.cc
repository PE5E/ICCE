#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    if (argc > 3)
    {
        cout << "Require two numerical unsigned inputs" << '\n';
        return 1;
    }
                                    // istr is initialized with contents
    istringstream istr(argv[1]);    // of argv[1]
    size_t no1 = 0;                           
    istr >> no1;                    // extract
    
    cout << "extracted first number: " << no1 << '\n';
                                    // discards istr contents, copies argv[2] 
    istr.str(argv[2]);              // into istr, moves writing position to end
                                    // of stream, but does not unset eof even
                                    // though it is fixed

    istr.clear();                   // we have fixed the eof, so we may clear
                                    // the eof bit

    size_t no2 = 0;                 
    istr >> no2;                    // extract, write to size_t no2
  
    cout << "extracted second number: " << no2 << '\n';
}
