#ifndef __BINEXPRESSION_HEADER
#define __BINEXPRESSION_HEADER

#include <functional>                                               // plus
#include <iostream>

using std::plus;
using std::cout;
using std::cerr;

// declaration of BinExpr (for BasicType)
template<typename LHS, typename RHS, template<typename> class Operation>
struct BinExpr;

// the actual addition operator (note it returns BinExpr objects)
template<typename LHS, typename RHS>
BinExpr<LHS, RHS, plus> operator+(LHS const &lhs, RHS const &rhs)
{
    return BinExpr<LHS, RHS, plus>{ lhs, rhs };
}

// BasicType's definition 
// BasicType serves to determine the type of object given
// BasicType::ObjType will henceforth be that
template<typename Type>
struct BasicType
{
    typedef Type ObjType;
};

// BasicType's specialization (for BinExpr)            
template<typename LHS, typename RHS, template<typename> class Operation>
struct BasicType<BinExpr<LHS, RHS, Operation>>
{
    typedef typename BinExpr<LHS, RHS, Operation>::ObjType ObjType;
};

// BinExpr itself. Operation is a template template parameter 
// which defines the binary operation that is to be used
template<typename LHS, typename RHS, template<typename> class Operation>
class BinExpr 
{
    LHS const &d_lhs;                                        // first argument 
    RHS const &d_rhs;                                        // second argument

    public:
        typedef typename BasicType<RHS>::ObjType ObjType;
        // alias BasicType<IntVector>::ObjType 
        typedef typename ObjType::value_type value_type;

        // constructor
        BinExpr(LHS const &lhs, RHS const &rhs)
            :
                d_lhs(lhs),
                d_rhs(rhs)
        {}

        // index operator
        value_type operator[](size_t ix) const
        {
            static Operation<value_type> operation;
            return operation(d_lhs[ix], d_rhs[ix]);
        }
        
        // size operator
        size_t size() const
        {
            // cerr << "say hi" << '\n';
            // cerr << typeid(d_lhs).name() << '\n';
            return d_lhs.size();
        }
            
        // Conversion operator to get the correct type in the end
        operator ObjType() const
        {                                                        
            ObjType retVal;                 // create object of correct type
            // cerr << __FILE__ << __LINE__ << '\n';
            // cerr << "size=" << size() << '\n';
            retVal.resize(size());         // allocate memory
            // cerr << "seat reserved" << '\n';
            for (size_t idx = 0, end = size(); idx != end; ++idx)
            {
                //cerr << "HEEJAH" << '\n';
                //cerr << *this[idx] << '\n';
                new(&retVal[idx]) value_type((*this)[idx]);      // fun here
            }
            // new allocates memory, *this[idx] does addition
            // when a BinExpr object is encountered, this will recursively
            // call addition in that object, etc.
            return retVal;
        }
};


#endif
