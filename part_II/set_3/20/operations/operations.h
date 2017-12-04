#ifndef INCLUDED_OPERATIONS_
#define INCLUDED_OPERATIONS_

class Operations: public Binops
{
    public:
        Operations();

    private:
        friend class Binops;
        void add(Operations const &rhs);
        void sub(Operations const &rhs);

};
        
#endif
