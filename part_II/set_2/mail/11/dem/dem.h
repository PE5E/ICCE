#ifndef INCLUDED_DEM_
#define INCLUDED_DEM_


class Dem
{
    public:
        Dem();
        Dem(Dem const &other);
        Dem(Dem &&tmp);
        ~Dem();
        Dem &operator=(Dem const &other);
        Dem &operator=(Dem &&tmp);
        void swap(Dem &other);

    private:
};
        
#endif
