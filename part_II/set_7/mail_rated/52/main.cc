#include "main.ih"

int main(int argc, char *argv[]) 
{
    if (argc != 3)
        return 1;
    std::string outfile   = argv[1];
    std::string text      = argv[2];

    // pass to thread
    Handler handlerObject;
    std::thread shifter(caller, 
                        std::ref(handlerObject),
                        std::ref(outfile), 
                        std::ref(text));
    shifter.join();
    
    // defined by thread
    std::thread indieShifter(indieCaller, 
                             std::ref(outfile), 
                             std::ref(text));

    indieShifter.join();
}
