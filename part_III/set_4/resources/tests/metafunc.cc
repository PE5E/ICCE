#include <map>
#include <iostream>
#include <iostream>
#include <type_traits>
using namespace std;

template <typename Type>
struct TypeHolder
{
    using type = Type;
};

template <typename Key, typename Value, int selector>
struct Storage
{
    static inline auto getType()
    {
        if constexpr (selector == 1)
        {
            return TypeHolder<map<Key, Value>>{};
            cerr << "BLA !" << '\n';
        }
        else if constexpr (selector == 2)
        {
            return TypeHolder<map<Key, Value *>>{};
            cerr << "BLA !" << '\n';
        }
        else if constexpr (selector == 3)
        {
            return TypeHolder<map<Key *, Value>>{};
            cerr << "BLA !" << '\n';
        }
        else
        {
            return TypeHolder<map<Key *, Value *>>{};
            cerr << "BLA !" << '\n';
        }
    }
    
    using MapType = typename decltype(getType())::type;
    static_assert(is_same_v<MapType, int>, "ofc it's not int");
};

int main()
{
    Storage<int, int, 2> thing;
    Storage<int, int, 2> thing2;
    thing = thing2;
}
