#ifndef INCLUDED_OPERATIONS_
#define INCLUDED_OPERATIONS_

#include "../binops/binops.h"

class Operations: public Binops
{
    public:
        Operations();

    private:
        void add(Operations const &rhs);
        void sub(Operations const &rhs);
        friend Binops;
};
        
#endif
