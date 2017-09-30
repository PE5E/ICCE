#include "header.ih"
// instructions for users

char const use[]=
    R"(
        Exercise 22: an URL stream decoder / encoder
        
        Usage: main [-e/-d] < input.txt
            (or provide stdin in other way)
        Where:
            -e        url-encode input
            -d        decode url-encoded input
        input.txt
            contains either
                an url-encoded string (when using -d)
                a url-decoded string (when using -e)
        )";
    
void usage(std::string const &programName)
{
    std::cout << use << "\n";
}
