#include "main.ih"
#include <iostream>
#include <cstring>      // memcpy
using std::memcpy;

int main(int argc, char **argv)
{
    Matrix mat1{4, 6};
    Matrix mat2 = mat1.identity(5);
    show(std::cout, mat2);
    std::cout << "-----" << '\n';
    memcpy(mat2[2], mat2[1], 5 * sizeof(double));
    mat2[2][3] = 23.5;
    show(std::cout, mat2);
    const Matrix mat7{3, 3};
    cout << mat7[2];
    
}

