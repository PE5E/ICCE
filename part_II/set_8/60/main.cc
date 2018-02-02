#include "main.h"

int main()
{
    int ia[20]= {20, 5, 1, 64, 700, 8, 100, 7, 81, 1, 124, 1, 45, 
		6, 15, 2, 34, 1, 18, 20};
    quicksort(ia, ia + 20);
	
    for (size_t idx = 0; idx != 20; ++idx)
        cout << ia[idx] << ' ';

    cout << '\n';
}
