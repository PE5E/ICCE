#ifndef __BINEXPRESSION_HEADER
#define __BINEXPRESSION_HEADER

#include <functional>                                               // plus
#include <iostream>

using std::plus;

// declaration of BinExpr (for BasicType)
template<typename LHS, typename RHS, template<typename> class Operation>
struct BinExpr;

// the actual addition operator (note it returns BinExpr objects)
template<typename LHS, typename RHS>
BinExpr<LHS, RHS, plus> operator+(LHS const &lhs, RHS const &rhs);

// BasicType's definition 
template<typename Type>
struct BasicType;


// BasicType's specialization (for BinExpr)            
template<typename LHS, typename RHS, template<typename> class Operation>
struct BasicType<BinExpr<LHS, RHS, Operation>>;


// BinExpr itself. Operation is a template template parameter 
// which defines the binary operation that is to be used
template<typename LHS, typename RHS, template<typename> class Operation>
class BinExpr 
{
    LHS const &d_lhs;                                        // first argument 
    RHS const &d_rhs;                                        // second argument

    public:
        typedef typename BasicType<RHS>::ObjType ObjType;
        typedef typename ObjType::value_type value_type;

        // constructor
        BinExpr(LHS const &lhs, RHS const &rhs)
            :
                d_lhs(lhs),
                d_rhs(rhs)
        {}

        value_type operator[](size_t ix) const
        {
            static Operation<value_type> operation;
            return operation(d_lhs[ix], d_rhs[ix]);
        }
        
        size_t size() const
        {
            return d_lhs.size();
        }
            
        // Conversion operator to get the correct type in the end
        operator ObjType() const
        {                                                        
            ObjType retVal;                 
            retVal.resize(size());     
                // when a BinExpr object is encountered, recursively
                // call addition in that object
            for (size_t idx = 0, end = size(); idx != end; ++idx)
                new(&retVal[idx]) value_type((*this)[idx]);
            return retVal;
        }
};

#include "operatorplus.ff"
#include "basictype.ff"
#include "basictypespecial.ff"

#endif
