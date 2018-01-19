#include "main.ih"

int main(int argc, char *argv[]) 
{
    if (argc != 3)
        return 1;
    std::string outfile   = argv[1];
    std::string text      = argv[2];

    // pass to thread
    Handler handlerObject;
    std::thread shifter(caller, handlerObject, outfile, text);
    shifter.join();
    
    // defined by thread
    std::thread indieShifter(indieCaller, outfile, text);
    indieShifter.join();
}
