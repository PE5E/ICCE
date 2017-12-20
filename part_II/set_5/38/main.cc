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




        cout << it->first << ":" << it->second << '\n';
//        cout << "---Iterator-- " << &it << '\n';
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

   cout << "There are " << nUniqueKeys << " in the container\n";
}

/*

  std::unordered_multimap<std::string,std::string> myumm = {
     {"orange","FL"},
     {"strawberry","LA"},
     {"strawberry","OK"},
     {"pumpkin","NH"} };

  for (auto& x: {"orange","lemon","strawberry"}) {
    std::cout << x << ": " << myumm.count(x) << " entries.\n";
  }

*/

/*
plan:
ga naar eerste element met iterator
zoek hoeveel van deze keys er zijn
als dit aantal = 1 dan tel 1 bij nUniqueKeys op
ga naar volgende element
check of dit anders is dan eerdere element
    als anders dan zoek hoeveel van deze keys er zijn
    als gelijk dan ga weer naar volgende element en herhaal check

return nr elements
*/

