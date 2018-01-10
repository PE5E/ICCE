#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

size_t myCodeHere(unordered_multimap<string, string> &container)
{
    string tmpStr;
    size_t nrUniKeys = 0;
    auto it = container.begin();

    while (it != container.end())
    {
        tmpStr = it->first;
        if (container.count(tmpStr) == 1)
            ++nrUniKeys;

        ++it;
    }

    return nrUniKeys;
}

int main(int argc, char **argv)
{
    unordered_multimap<string, string> container = 
    {
        {"A", "alpha"},
        {"B", "bravo"},
        {"C", "charlie"},
        {"D", "delta"},
        {"E", "echo"},
        {"F", "foxtrot"},
        {"A", "alpine"},
        {"A", "achievement"},
        {"B", "bears"},
        {"C", "charity"}
    };
    // fill the container with data (no need to implement this)
    // but helpfull in testing

   size_t nUniqueKeys = myCodeHere(container);  // ... YOUR CODE HERE ...

   cout << "There are " << nUniqueKeys << " unique keys in the container\n";
}

