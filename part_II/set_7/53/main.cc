#include "main.ih"

int main()
{
    Storage stor;
    Storage *storP = &stor;
    string input;
    string file = "output.txt";

    thread execute(exec, file, storP);

    while (cin >> input)
        stor.push(input);     // puts user input to queue until ends

    stor.finished(true);        // indicates that no more input will follow 

    execute.join();
}

