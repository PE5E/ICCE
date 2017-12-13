#include "addition/addition.h"
#include "subtraction/subtraction.h"
#include "operations/operations.h"

int main()
{
    Operations op1;
    Operations op2;
    Operations op3;

    op1 += op2;
    op3 = op1 + op2;

    op3 -= op2;
    op3 = op1 - op2;
}
