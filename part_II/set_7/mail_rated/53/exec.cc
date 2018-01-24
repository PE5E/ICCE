#include "main.ih"

void exec(string outputfile, Storage *str)
{
    ofstream file(outputfile);
    
    while (!str->finished())
    {
        if (str->front())
        {
            file << str->returnString() << '\n';  
            str->pop();
        }

        this_thread::sleep_for(chrono::seconds(1));
    }

    file.close();
}
