#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string accumulate;                      // stores the converted number
    
    size_t radix = stoul(argv[1]);          // get the radix and the value
    size_t value = stoul(argv[2]);          // to display in that radix
    do
    {
        size_t ch = value % radix;          // get the last digit
        value /= radix;                     // cut off the last digit

        ch += ch < 10 ? '0' : 'a' - 10;     // convert ch to a
                                            // char-representation 

        accumulate.insert(0, 1, ch);        // insert the digit before other
                                            // digit 
    }
    while (value);                          // done when value has decayed to 
                                            // 0

    cout << argv[2] << ", displayed using radix " << argv[1] << " is: " << 
            accumulate << '\n';
}
