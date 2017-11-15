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
    Matrix mati(3,4);                   // zeros constructor
    printMat(mati);
    line();

//    Matrix transp = mati.transpose();

    Matrix matii({{1,2},{3,4}});        // list-specified
    printMat(matii);
    line();

    Matrix matiii;                      // default constr
    printMat(matiii);
    line();

    Matrix matj;                        // identity matrix
    matj = matj.identity(5);
    printMat(matj);
    line();

    matii.tr();                         // transpose
    printMat(matii);
    line();

    Matrix matcop(matii);               // copy constr
    printMat(matcop);
    line();

    Matrix matcopi = matcop;            // overload assign op
    printMat(matcopi);
    line();
                                        // overload assign &&
    Matrix matcopii = std::move(matcop); 
    printMat(matcopii);
    line();

    Matrix hoi = matcopii.transpose();
    printMat(hoi);

}
