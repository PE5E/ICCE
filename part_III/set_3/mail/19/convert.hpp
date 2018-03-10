#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <cstddef>     // size_t
#include <type_traits> // std::conditional_t

#include "typelist/typelist.hpp"
#include "typelist/typelistpushfront.hpp"
#include "ctvalue.hpp"

template <std::size_t value, size_t radix, typename Acc = TypeList<>>
class Convert
{
    static constexpr char getChar(size_t val, size_t rad)
    {
        char ch = val % rad;
        ch += ch < 10 ? '0' : 'a' - 10;
        return ch;
    }
    
    using Chr = CTValue<char, getChar(value, radix)>;
    using AddedChr = PushFront<Acc, Chr>; // add Chr to currently accumulated characters
    
public:
    using CP = typename Convert<value / radix, radix, AddedChr>::CP;
};

// specialization of Convert for when the value is 0
template <size_t radix, typename... Types>
class Convert<0, radix, TypeList<Types...>>
{   
public:
    // if we have no accumulated characters, CP should be a typelist of the '0' character
    // otherwise, it should be the typelist of the accumulated characters
    using CP = std::conditional_t<
        sizeof...(Types) == 0,
        TypeList<CTValue<char, '0'>>,
        TypeList<Types...>>;
};

#endif // CONVERT_HPP