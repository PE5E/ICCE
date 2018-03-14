#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#include <ostream>

template <template <typename> class Container, typename Data>
class Insertable: public Container<Data>
{
    public:
        Insertable() = default;
        Insertable(Container<Data> container);
        Insertable(Insertable<Container, Data> const &other);
        Insertable(Insertable<Container, Data> &&tmp);
        Insertable(Data &&data);

        void insertIntoStream(std::ostream& out) const;
};

template <template <typename> class Container, typename Data>
inline std::ostream& operator<<(std::ostream& out,
                                Insertable<Container, Data> const &insertable)
{
    insertable.insertIntoStream(out);
    return out;
}
#endif
