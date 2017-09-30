#include "header.ih"

// Exercise 22: an URL stream decoder / encoder
//         
//         Usage: main [-e/-d] < input.txt
//             (or provide stdin in other way)
//         Where:
//             -e        url-encode input
//             -d        decode url-encoded input
//         input.txt
//             contains either
//                 an url-encoded string (when using -d)
//                 a url-decoded string (when using -e)

int main(int argc, char* argv[])
{
    std::string arg = (argc == 2 ? argv[1] : "");    // read if possible
    
    switch (getOpt(arg))
    {
        case EOption::ENCODE:
            encode(std::cin, std::cout);
            break;
        case EOption::DECODE:
            decode(std::cin, std::cout);
            break;
        default:
            usage(argv[0]);
            int FAIL = 1;
            return FAIL;
    }
}
