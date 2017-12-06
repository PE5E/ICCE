#include <iostream>
#include "addition/addition.h"
#include "operations/operations.h"

using namespace std;

int main(int argc, char **argv)
{
    Addition add1;
    Operations op1;
    add1 += op1;
    Addition thing1;
    Addition thing2;
    thing1 + thing2;
    cerr << "---" << '\n';
    Subtraction thing3;
    Subtraction thing4;
    thing3 - thing4;
}
