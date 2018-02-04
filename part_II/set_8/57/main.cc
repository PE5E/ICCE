#include "semaphore/semaphore.hh"
#include <iostream>

int main(int argc, char **argv)
try
  {
      Semaphore sema(5);
      sema.notify();
      sema.size(); 
  }
 catch (...)
   {
       std::cerr << "Something bad happened\\n";
   }
