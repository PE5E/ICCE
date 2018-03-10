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
        Insertable(Insertable<Container, Data> &&other);
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

#include "insertable1.ff"
#include "insertable2.ff"
#include "insertable3.ff"
#include "insertable4.ff"
#include "insertintostream.ff"

#endif
