#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

template <class Type>
class Matrix
{
    friend std::istream &operator>>(std::istream &in,  Matrix<Type> &mat);
    friend std::ostream &operator<<(std::ostream &out, Matrix<Type> const &mat);

    public:
        typedef std::initializer_list<std::initializer_list<Type>> IniList;

        Matrix<Type>() = default;
        Matrix<Type>(size_t nRows, size_t nCols);         // 1
        Matrix<Type>(Matrix const &other);                // 2
        Matrix<Type>(Matrix &&tmp);                       // 3
        Matrix<Type>(IniList inilist);                    // 4

        ~Matrix<Type>();

        Matrix<Type> &operator=(Matrix<Type> const &rhs);
        Matrix<Type> &operator=(Matrix<Type> &&tmp);

        template <class Type2>
        Matrix<Type> &operator+=(Matrix<Type2> const &rhs) &;
        template <class Type2>
        Matrix<Type>  operator+=(Matrix<Type2> const &rhs) &&;

    private:
        template <class Type1, class Type2>
        friend Matrix<Type1> operator+(Matrix<Type1> const &lhs, 
                                        Matrix<Type2> const &rhs); // 1
        template <class Type1, class Type2>
        friend Matrix<Type1> operator+(Matrix<Type1> &&lhs, 
                                        Matrix<Type2> const &rhs); // 2

        template <class Type2>
        friend bool operator==(Matrix<Type> const &lhs, 
                                Matrix<Type2> const &rhs);
        template <class Type2>
        friend bool operator!=(Matrix<Type> const &lhs, 
                                Matrix<Type2> const &rhs);
};        

#include "matrix1.j"            // constructor 1
#include "matrix2.j"            // constructor 2
#include "matrix3.j"            // constructor 3
#include "matrix4.j"            // constructor 4
#include "destructor.j"         // destructor

#include "operatorassign1.j"    // overloaded assignment operators
#include "operatorassign2.j"  

#include "operatoraddis1.j"     // overloaded add assignment operators
#include "operatoraddis2.j" 

#include "operatoradd1.j"       // overloaded addition operators
#include "operatoradd2.j" 


#include "insertinto.j"         // insertion operator
#include "extractfrom.j"        // extraction operator

#include "operatorequal.j"      // equality operator
#include "operatorinequal.j"    // inequality operator

// index operator niet in source files
// index operator const niet in source files


#endif




