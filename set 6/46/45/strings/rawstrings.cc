#include "strings.ih"

string* Strings::rawStrings(size_t nrPointers)
{
    string *newArray = static_cast<string *>(operator new[](nrPointers * sizeof(string)));

    return newArray;
}

