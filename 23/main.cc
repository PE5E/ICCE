#include "header.ih"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: this program expects a single integer." << '\n';
        return 1;
    }
    
    long long num = std::stoll(argv[1]);
    
    std::cout << "direct method:" << '\n';
    printBigDirect(std::cout, num);
    
    std::cout << "recursive method:" << '\n';
    printBig(std::cout, num);
    std::cout << '\n';
}
