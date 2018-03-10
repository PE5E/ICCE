#ifndef CTVALUE_HPP
#define CTVALUE_HPP

template<typename T, T Value>
struct CTValue {
    static constexpr T value = Value;
};

#endif // CTVALUE_HPP