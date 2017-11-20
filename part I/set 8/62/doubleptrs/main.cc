#include "main.ih"
extern char **environ;

int main(int argc, char **argv)
{
    Strings env(environ);
   
    for (size_t rept = 0; rept != 10; ++rept)
    {
        for (char **ptr = environ; *ptr; ++ptr)
            env.add(*ptr);
    }
    
    Strings test;
    env.swap(test); 
}
