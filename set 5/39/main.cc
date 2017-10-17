#include <iostream>
#include <string>

using namespace std;

void inv_identity()

int main() 
{
    int square[10][10];     // for the sake of the exercise the array is 
                            // not initialized what normally should be done.
    int *row[10];
    for (size_t index = 0; index != 10; ++index)
            row[index] = square[index];

    inv_identity(row); 
}



/*
code uit pointers1.odp blad 32

process(double *data[], size_t order)
{
	for (size_t row = 0; row != order; ++row)
	{
		for (size_t col = 0; col != order; ++col)
			data[row][col] = 0;

		data[row][row] = 1;
	}
}

zie ook blad 34 voor opbouw pointer array

*/
