#include <iostream>
#include <string>

using namespace std;

bool promptGet(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input

    return static_cast<bool>(getline(in, str));
}
        
void process(string &str)
{
    cout << "This is your input: \n" << str << '\n';
}

int main()
{
    string str;

    while (promptGet(cin, str))
        process(str);
}
        

