#ifndef TYPELISTPUSHFRONT_HPP
#define TYPELISTPUSHFRONT_HPP

#include "../ctvalue.hpp"
#include "typelist.hpp"

template<typename List, typename NewElement>
class PushFrontT;

template<typename... Elements, typename NewElement>
struct PushFrontT<TypeList<Elements...>, NewElement>
{
    using Type = TypeList<NewElement, Elements...>;
};

template<typename List, typename NewElement>
using PushFront = typename PushFrontT<List, NewElement>::Type;

#endif // TYPELISTPUSHFRONT_HPP

