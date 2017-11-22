#include "main.ih"
#include <iostream>
#include <cstring>      // memcpy

void pl()
{
    std::cout <<  "--------------------------------------------------------------------------------" << '\n';
}

int main(int argc, char **argv)
{
    Matrix mat{4, 8};
    cin >> mat;
    show(std::cout, mat);
    pl();

    Matrix mat2{4, 8};
    cin >> mat(2, 5);
    show(std::cout, mat);
    pl();

    Matrix mat3{4, 8};
    cin >> mat(2, 5, Mode::BY_COL);
    show(std::cout, mat);
    pl();

    Matrix mat4{4, 8};
    cin >> mat4(Mode::BY_COL);
    show(std::cout, mat4);
    pl();

    Matrix mat5{4, 8};
    cin >> mat5(Mode::BY_ROW, 2, 3);
    show(std::cout, mat5);
    pl();

    Matrix mat6{4, 8};
    cin >> mat6(Mode::BY_ROW, 1, 2, 3, 4);
    show(std::cout, mat6);
    pl();
    std::cout << mat6;
}



