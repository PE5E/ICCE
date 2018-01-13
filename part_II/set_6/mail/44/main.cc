#include "vstring/vstring.hh"
#include <iostream>
#include <algorithm>
bool vowels(char c, Vstring::CharMap &cmap);

int main(int argc, char **argv)
try
  {
    Vstring vstring(std::cin);
    Vstring::CharMap vmap;

    std::cout << "Vowels: " << vstring.count(vmap, vowels) << '\n';
    
    std::for_each(vmap.begin(), vmap.end(), 
            [](decltype(*vmap.begin()) &value)
            {
                std::cout << value.first << ": " << value.second << '\n';
            }
            );
  }
 catch (...)
   {
       std::cerr << "Something bad happened\\n";
   }

