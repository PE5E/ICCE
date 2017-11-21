#include "exercise_39.ih"

using namespace std;

void inv_identity(int (*arrayPointer)[10])
{
    for (int (*row)[10] = arrayPointer; row != arrayPointer + 10; ++row)
    {
        for (int *col = static_cast<int*>(*row), 
            *cross = (static_cast<int*>(*row) + (row - arrayPointer)); 
            col != static_cast<int*>(*row) + 10;
            ++col)

                (col == cross) ? *col = 0 : *col = 1;
    }
}

// explanation:
// int *col = static_cast<int*>(*row):
// *col gets the same address of row. Since row points to 10 ints and col points
// to a single int a conversion is necessary.
//
// *cross = (static_cast<int*>(*row) + (row - arrayPointer):
// *cross gets the address of row. Then the index of row (from the first for loop)
// is added
//
// (col == cross) ? *col = 0 : *col = 1:
// if the addresses of col and cross match, that means that both indices from both
// for loops are equal. So we have a point on the main diagonal and there should be 
// a zero, while all the others should be ones
