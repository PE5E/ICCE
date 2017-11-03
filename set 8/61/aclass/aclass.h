#ifndef INCLUDED_ACLASS_
#define INCLUDED_ACLASS_


class aclass
{
    public:
        aclass();
        aclass(aclass const &other);
        ~aclass();
        aclass &operator=(aclass const &other);
        void swap(aclass &other);

    private:
};
        
#endif
