#include "main.h"

void quicksort(int *beg, int *end)
{
    if (end - beg <= 1)
        return;

    int lhs = *beg;
    int *mid = partition(beg + 1, end, 
        [&](int arg)
        {
            return arg < lhs;
        }
    );

    swap(*beg, *(mid - 1));

    auto future = async(launch::async, quicksort, beg, mid);
    quicksort(mid, end);
    future.wait();
}