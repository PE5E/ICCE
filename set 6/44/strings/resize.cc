#include "strings.ih"


void Strings::resize(size_t const newCapacity)
{
    string **newArray = nullptr;

    if (newCapacity >= d_capacity)                   
    {   
        d_capacity = newCapacity;
        newArray = new string*[d_capacity];                  // not initialized

        for (size_t idx = 0; idx != d_size; ++idx)           // copy old pointers
            newArray[idx] = d_arrayStr[idx];
        for (size_t idx = d_size; idx != d_capacity; ++idx)  // initialize the rest
            newArray[idx] = new string;
  
    }

    else if (newCapacity < d_size)                           // if new array is too small
    {
        newArray = new string*[d_capacity];                  // not initialized

        for (size_t idx = 0; idx != newCapacity; ++idx)      // copy old pointers
            newArray[idx] = d_arrayStr[idx];
        for (size_t idx = newCapacity; idx != d_size; ++idx) // delete pointers and 
            delete d_arrayStr[idx];                          // strings outside new array
    }
        
    else                    // if newCapacity is between d_size and d_capacity
    {
        newArray = new string*[d_capacity];                  // not initialized

        for (size_t idx = 0; idx != d_size; ++idx)           // copy old pointers
            newArray[idx] = d_arrayStr[idx];
        for (size_t idx = d_size; idx != d_capacity; ++idx)  // initialize the rest
            newArray[idx] = new string;
    }

    destroy();                       // delete old array of pointers, not the string data

    d_arrayStr = newArray;
}


// the function seems a lot like the reserve function
// the difference is the initialisation of the string objects when enlarging
// this doesn't seem to make much sense but is according the exercise.
