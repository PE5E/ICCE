#include "strings.ih"                                // 'Strings' class

void Strings::add(std::string str)                   // ntbs will be converted (?)
{
    std::string tmpArray[++d_size];                  // array 1 string bigger
    cout << "doing thing 1.";
    for (size_t index = 0; index != d_size - 1; ++index) // copy. is this good style? note
        tmpArray[index] = *(d_str + index);          // pointer loop not practical here (2 arrays) (?)
    cout << "doing thing 2.";
    *(tmpArray + d_size) = str;                      // add new string
    cout << "doing thing 3.";
    delete[] d_str;                                  // delete old array
    cout << "doing thing 4.";
    d_str = tmpArray;                                // point to new array
}

// -copy the currently stored strings to a new storage area
// -add the next string to the new storage area
// -destroy the information pointed at by d_str
// -update d_str and d_size so that they refer to the new storage area.
