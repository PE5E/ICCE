#include "main.ih"

int main(int argc, char **argv)
{
    cout << "mat1: 3 x 3 matrix filled with zeros\n";
    Matrix mat1(3, 3);
    show(cout, mat1) << '\n';

    cout << "mat2: 3 x 3 matrix filled with zeros\n";
    Matrix mat2(3, 3);
    show(cout, mat2) << '\n';

    cout << "mat3: 4 x 4 matrix filled with zeros\n";
    Matrix mat3(4, 4);
    show(cout, mat3) << '\n';

    cout << "mat4: 3 x 3 matrix filled with ones\n";
    Matrix mat4({{1, 1, 1}, {1, 1, 1}, {1, 1, 1}});
    show(cout, mat4) << '\n';


    cout << "Is mat1 ongelijk aan mat2?\n";
    cout << (mat1 != mat2 ? "Ja\n\n" : "Nee\n\n");

    cout << "Is mat1 ongelijk aan mat3?\n";
    cout << (mat1 != mat3 ? "Ja\n\n" : "Nee\n\n");

    cout << "Is mat1 ongelijk aan mat4?\n";
    cout << (mat1 != mat4 ? "Ja\n\n" : "Nee\n\n");
}

