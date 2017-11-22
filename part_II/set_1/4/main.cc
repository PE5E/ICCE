#include "main.ih"

int main(int argc, char **argv)
{
	Matrix mat1{ 4, 4 };
    Matrix mat2{ 4, 4 };
    
    mat1 += mat2.identity(4);

    Matrix mat3{ mat1 + mat2 };

    Matrix mat4 = mat3;

    mat4 = mat1 + mat2 + mat3;
    show(std::cout, mat4);
}

