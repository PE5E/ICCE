#include "main.ih"

int main(int argc, char **argv)
{
    Matrix mat({{1,2,3,5,5},{6,7,8,9,0},{1,2,3,4,5},{6,7,8,9,0}});
    show(std::cout, mat);

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

