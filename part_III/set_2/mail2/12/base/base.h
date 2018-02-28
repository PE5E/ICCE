#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <ostream>

template <typename Derived>
class Base;

template <typename Derived>
std::ostream &operator<<(std::ostream &out, Base<Derived> const &base);

template <typename Derived>
class Base
{
    friend std::ostream &operator<< <>(std::ostream &out,
                                      Base<Derived> const &base);

    public:
        std::ostream &insertInto(std::ostream &out) const
        {
            return static_cast<const Derived *>(this)->insertInto(out);
        }
};

template <typename Derived>
std::ostream &operator<<(std::ostream &out, Base<Derived> const &base)
{
    return base.insertInto(out);
}

#endif
