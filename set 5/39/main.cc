#include "exercise_39.ih"

using namespace std;

int main() 
{
    int square[10][10];        // for the sake of the exercise the array is 
                               // not initialized what normally should be done.
    int (*row)[10] = square;   // pointer to the rows of square

    inv_identity(row);         // fill the matrix


    for (size_t r=0; r != 10 ; ++r)         // display the matrix
    {
        cout << "Rij " << r << ": ";
        for (size_t c=0; c != 10 ; ++c)
            cout << square[r][c];
        cout << '\n';
    } 

}


