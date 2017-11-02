#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int nr[4] = {0,1,2,3};

    char total = 0;

    for (size_t idx = 0; idx != 4; ++idx)
    {
        total = total << 2; 
        total += nr[idx];
    }

    cout << to_string(total);
}
