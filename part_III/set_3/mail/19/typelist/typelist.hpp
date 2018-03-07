#ifndef TYPELIST_HPP
#define TYPELIST_HPP

#include <ostream>

#include "../ctvalue.hpp"

template<typename... Elements>
class TypeList
{
};

template <typename T, T Value, typename... Tail>
std::ostream &operator <<(std::ostream &os, TypeList<CTValue<T, Value>, Tail...> const &)
{
    if constexpr (sizeof...(Tail) == 0)
        return os << Value;
    else
        return os << Value << TypeList<Tail...>{};
}

#endif // TYPELIST_HPP