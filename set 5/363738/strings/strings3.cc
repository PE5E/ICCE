#include "strings.ih"

Strings::Strings(int const argc, char *argv[])
{
    for (int index = 0; index != argc; index++) 
    {                                           
        add(argv[index]);                       
    }
}
// since the number of additions is known
// this could be rewritten to add them all at once
// that would be more efficient (though both env and agrv are usually small)
