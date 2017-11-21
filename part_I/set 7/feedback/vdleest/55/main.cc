#include "lock/lock.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "Please provide one or two arguments\n";  
        return 0;
    }

    string path = argv[1];  // define which file to use	
//    cout << path;

    if (argc == 2)
        Lock file(path); 
    else if (argc == 3)
    {
        string lockdir = argv[2];
        Lock file(path, lockdir);
    }

}
