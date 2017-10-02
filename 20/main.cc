#include "head.ih"

int succesState = 0;                    // expections NC

int main(int argc, char* argv[])
{
    if (isatty(0)) 
    {
        std::cout << "no file redirection" << '\n'; 
        return 1;
    }
    process(arguments(argc,argv));
    return succesState;
}
