#include "main.ih"

int main(int argc, char **argv)
{
    cout << "3 x 3 matrix filled with zeros\n";
    Matrix mat(3, 3);
    show(cout, mat) << '\n';

    cout << "4 x 4 identity matrix\n";
    show(cout, Matrix::identity(4)) << '\n';

    cout << "Changing the 3 x 3 matrix into a 3 x 4 matrix filled with 1..12"
                                                                        "\n";
    mat = Matrix{
                    { 1,  2,  3}, 
                    { 4,  5,  6}, 
                    { 7,  8,  9}, 
                    {10, 11, 12}, 
                };

    show(cout, mat) << '\n';

    cout << "Transposing the above matrix:\n";
    show(cout, mat.transpose()) << '\n';
}

