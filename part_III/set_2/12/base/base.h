#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <ostream>

template <class Derived>
class Base;

template <typename Derived>
std::ostream &operator<<(std::ostream &out, Base<Derived> const &base);

template <class Derived>
class Base
{
    friend std::ostream &operator<< <>(std::ostream &out,
                                      Base<Derived> const &base);
};

template <class Derived>
std::ostream &operator<<(std::ostream &out, Base<Derived> const &base)
{
    return base.insertInto(out);
}

#endif
