#include "main.ih"

void exec(string outputfile, Storage *str)
{
    ofstream file(outputfile);

    while (!str->finished())
    {
        if (!str->empty())
        {
            file << str->front() << '\n';  // puts first from queue in file
            str->pop();
        }

        this_thread::sleep_for(chrono::seconds(1));
    }

    file.close();
}
