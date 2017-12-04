#ifndef INCLUDED_BINOPS_
#define INCLUDED_BINOPS_

class Operations;

class Binops: public Addition, public Subtraction
{
    public:
        Binops();

    private:
        friend class Addition;
        friend class Subtraction;

        void Operations::add(Operations const &rhs);
        void Operations::sub(Operations const &rhs);
};
        
#endif
