#include "strings.ih"

Strings::Strings(char *env[])
{
    for (int index = 0; index != sizeof(*env); index ++)
    {
        add(*(env + index));
    }
}
