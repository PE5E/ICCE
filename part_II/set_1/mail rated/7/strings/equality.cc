#include "strings.ih"

bool Strings::operator==(Strings const &other) const
{
    if (this == &other)
        return true;

	if (d_size != other.d_size)
		return false;

    for (size_t idx = 0; idx != d_size; ++idx)
        if (*this->d_str[idx] != *other.d_str[idx])   // check each element
            return false;

    return true;
}

// Strings class: size_t d_size, size_t d_capacity, std::string **d_str; 
// d_capacity niet checken

