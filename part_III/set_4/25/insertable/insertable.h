#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#include <iosfwd>

template <template <typename> class Container, typename Data>
class Insertable;

template <template <typename> class Container, typename Data>
std::ostream& operator<<(std::ostream& out,
                            Insertable<Container, Data> const &insertable);

template <template <typename> class Container, typename Data>
class Insertable: public Container<Data>
{
    friend std::ostream& operator<< <>(std::ostream& out,
                                    Insertable<Container, Data> const &insertable);
    public:
        Insertable(Container<Data> container);

        //Constructor Insertable(Data &&data) is available via the Container
        //constructors. For for example vector this however makes an vector of
        //zeroes with size data. If you want a vector with as only element data,
        //uncomment the next line and the include below.
        //Insertable(Data &&data);

        using Container<Data>::Container;
    private:
        std::ostream& insertIntoStream(std::ostream& out) const;
};

template <template <typename> class Container, typename Data>
std::ostream& operator<<(std::ostream& out,
                         Insertable<Container, Data> const &insertable)
{
    return insertable.insertIntoStream(out);
}

#include "insertable1.ff"
//uncomment the following line for the extra constructor
//#include "insertable2.ff"
#include "insertintostream.ff"

#endif
