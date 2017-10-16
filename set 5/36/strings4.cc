#include "strings.ih"

Strings::Strings(char *env[])
{
    // env is an array of pointers to constant char (NTBS)
    for (int index = 0; index != sizeof(*env); index ++)
    {
        cout << *(env + index) << '\n';
        cout << "calling add from env constructor" << '\n';
        add(*(env + index));
    }
}
