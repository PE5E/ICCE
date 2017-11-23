#include "strings.ih"

bool Strings::operator!=(Strings const &other) const
{
	return !(*this == other);
}