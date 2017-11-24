#include "main.ih"
#include "maxfour/maxfour.h"

int main()
{
   try
   {
       std::cerr << "Trying outer!" << '\n';
       MaxFour *list = new MaxFour[10];      // constructor will throw
   }
   catch(std::string &problem)
   {
       std::cerr << "Catching outer!" << '\n';
       // list was automagically deleted because 'new' is smart :)
       // so: nothing to do here
   }
}
