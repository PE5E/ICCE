#include "stringvector.ih"

void StringVector::swap(StringVector &other)
{
	char buffer[sizeof(StringVector)];
	memcpy(buffer, this,   sizeof(StringVector));
	memcpy(this, &other,   sizeof(StringVector));
	memcpy(&other, buffer, sizeof(StringVector));
}