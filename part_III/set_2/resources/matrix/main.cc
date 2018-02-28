#include "main.ih"

int main(int argc, char **argv)
{
    Matrix mat(3, 3);

    cout << 
        "Matrix of 3 x 3:\n" <<
        mat << 
        '\n';

    ifstream in("nosep");

    cout << 
        "The 3 x 3 matrix in the file 'nosep':\n" <<
        in.rdbuf() << 
        '\n';

    in.seekg(0);
    in >> mat;
    cout << "Extracting 'nosep':\n" <<
            mat << '\n';

    in.seekg(0);

    in >> mat(Matrix::BY_COLS);
    cout << "Extracting 'nosep' column-wise:\n" <<
            mat << '\n';

    in.close();
    in.open("sep");

    in >> mat(',') >> mat;
    cout << "Extracting 'sep', using comma-separators:\n" <<
            mat << '\n';


    in.close();
    in.open("rect");

    cout << 
        "The 5 x 3 matrix in the file 'rect':\n" <<
        in.rdbuf() << 
        '\n';

    in.seekg(0);

    in >> mat(5, 3, Matrix::BY_ROWS);

    cout << "Extracting 'rect':\n" <<
            mat << '\n';

    in.seekg(0);

    in >> mat(Matrix::BY_COLS);
    in >> mat;
    cout << "Extracting 'rect' column-wise:\n" <<
            mat << '\n';

    in.seekg(0);

    Matrix mat2{ mat };

    in >> mat2;
    cout << "Extracting a copy of the extracted matrix:\n" <<
            mat2 << '\n';


    in.close();
    in.open("ident2");

    in >> mat2(Matrix::BY_ROWS, 1, 2, 0, 2);
    cout << "Changing the 2 x 2 submatrix at [1][0] into an identity "
                                                                "matrix:\n" <<
            mat2 << '\n';

    in.close();
    in.open("numbers2");

    in >> mat2(Matrix::BY_ROWS, 2, 2, 1, 2);
    cout << "Changing the 2 x 2 submatrix at [2][1] into numbers "
                                                            "(by rows)\n" <<
            mat2 << '\n';

    in.seekg(0);

    in >> mat2(Matrix::BY_COLS, 2, 2, 1, 5);        // # ncols auto reset to 2
    cout << "Changing the 2 x 2 submatrix at [2][1] into numbers "
                                                            "(by columns)\n" <<
            mat2(", ") << mat2 << '\n';


    cout << "Element 3, 2 of mat: " << mat[3][2] << "\n"
            "same, using at(): " << mat.at(3).at(2) << '\n';    

    mat.at(3).at(2) = 12;

    cout << "Element 3, 2 of mat after assiging to 12: " << mat[3][2] << "\n"
            "same, using at(): " << mat.at(3).at(2) << '\n';    

    cout << "Exception when exceeding row index:\n";
    try
    {
        mat.at(30).at(2);
    }
    catch (exception const &exc)
    {
        cout << exc.what() << '\n';
    }

    cout << "Exception when exceeding col index:\n";
    try
    {
        mat.at(3).at(20);
    }
    catch (exception const &exc)
    {
        cout << exc.what() << '\n';
    }
}










