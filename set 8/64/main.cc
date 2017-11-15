#include "matrix/matrix.h"
#include <iostream>

void printMat(Matrix &matr)
{
    for (size_t irow = 0; irow != matr.nRows(); ++irow)
    {
        for (size_t icol = 0; icol != matr.nCols(); ++icol)
        {
            std::cout << matr.row(irow)[icol] << '\t';
        }
        std::cout << '\n';
    }
}

void line()
{
    std::cerr << "-------------------------------------------" << '\n';
}

int main()
{
    Matrix mati(3,4);       
    printMat(mati);
    line();

    Matrix matii({{1,2},{3,4}});
    printMat(matii);
    line();

    Matrix matiii;
    printMat(matiii);
    line();

    Matrix matj;
    matj = matj.identity(5);
    printMat(matj);
    line();

    matii.tr();
    printMat(matii);
}
