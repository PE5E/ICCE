#include "strings/strings.h"
#include <string>

using namespace std;

extern char **environ;
    
int main()
{
    for (size_t iter = 0; iter != 1000; ++iter)
    {
        Strings env(environ);
    
        for (size_t rept = 0; rept != 100; ++rept)
        {
            for (char *ptr = *environ; *ptr; ++ptr)
                env.add(to_string(*ptr));
        }
    }
}

