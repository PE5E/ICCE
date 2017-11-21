#include "main.ih"

int main(int argc, char **argv)
{
    Matrix mat{4, 6};
    Matrix mat2{3, 2};
    mat = mat + mat2;
}

