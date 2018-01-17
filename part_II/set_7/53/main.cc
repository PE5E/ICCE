#include "storage/storage.h"
#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>

using namespace std;

void exec(string outputfile, Storage *str)
{
    ofstream file;
    file.open(outputfile);
    
    string fromQueue;
    while (!str->finished())
    {
        if (!str->empty())
        {
            fromQueue = str->front();
            str->pop();
            file << fromQueue; // \n?
        }

        this_thread::sleep_for(chrono::seconds(1));
    }

    file.close();
}

int main()
{
    Storage stor;
    Storage *storP = &stor;
    string input;
    string file = "output.txt";
    size_t count = 0; // debug

    thread execute(exec, file, storP);

    while (cin)
    {
        cerr << count << '\n';  // debug
        cin >> input;           // puts user input to queue until ends
        stor.push(input);
        input = "";
        ++count;    //debug
    }
    stor.finished(true);        // indicates that no more input will follow 
    
    execute.join();
}

