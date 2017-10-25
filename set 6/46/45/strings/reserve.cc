#include "strings.ih"


void Strings::reserve(size_t const newCapacity)
{
    string *newArray = nullptr;

    if (newCapacity >= d_capacity)                   
    {   
        cerr << "reserve line 10 \n";
        d_capacity = newCapacity;
        cerr << "reserve line 12 \n";
        newArray = rawStrings(d_capacity);                   // not initialized
        cerr << "reserve line 14 \n";
        for (size_t idx = 0; idx != d_size; ++idx)           // copy old pointers
            newArray[idx] = d_str[idx];
        cerr << "reserve line 17 \n";
    }

    else if (newCapacity < d_size)                           // if new array is too small
    {
        newArray = rawStrings(d_capacity);                   // not initialized

        for (size_t idx = 0; idx != newCapacity; ++idx)      // copy old pointers
            newArray[idx] = d_str[idx];
        for (size_t idx = newCapacity; idx != d_size; ++idx) // delete pointers and 
            d_str[idx].~string();                            // strings outside new array
    }
        
    else                    // if newCapacity is between d_size and d_capacity
    {
        newArray = rawStrings(d_capacity);                   // not initialized

        for (size_t idx = 0; idx != d_size; ++idx)           // copy old pointers
            newArray[idx] = d_str[idx];
    }

    destroy();                       // delete old array of pointers, not the string data

    d_str = newArray;
}

