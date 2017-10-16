#include "strings.ih"

Strings::Strings(const char *env[])
{
    // env is an array of pointers to constant char (NTBS)
    for (int index = 0; index != sizeof(*env); index ++)
        add(env[index]);
}
