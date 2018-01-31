#include "main.ih"

void exec(string outputfile, Storage *str)
{
    ofstream file(outputfile);
    
    while (!str->finished())
    {
        if (str->giveMeTheData())
        {
            file << str->returnString() << '\n';  
        }

        this_thread::sleep_for(chrono::seconds(1));
    }

    file.close();
}
