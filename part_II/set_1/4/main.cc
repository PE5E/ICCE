#include "main.ih"

int main(int argc, char **argv)
{
	Matrix mat1{ 4, 4 };
    Matrix mat2{ 4, 4 };
    
    mat1 += mat2.identity(4);

    Matrix mat3{ mat1 + mat2 };

    Matrix mat4 = mat3;

    mat4 = std::move(mat1) + mat2 + mat3;
    show(std::cout, mat4);
}

/*
FIXED:
-SF: operator+= maakt eerst een kopie, en gaat zich dan pas afvragen
of hij eigenlijk wel verder kan.
-Pointer notation in index loop.
-DRY: de for-loop herberekent de size van tmp. (Ook IRE.) ???
-Operator+(&&,&) roept operator+= aan, en maakt dus een overbodige kopie.
-Operator+(&,&) maakt zodoende zelfs twee keer een kopie.
Hint: in Strings::operator+= maken we een kopie voor we strings toevoegen.
Waarom eigenlijk?
*/

