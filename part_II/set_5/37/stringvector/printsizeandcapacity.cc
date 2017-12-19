#include "stringvector.ih"

void StringVector::printSizeAndCapacity() const
{
	cout << "size:     " << d_strVector.size()     << '\n'
	     << "capacity: " << d_strVector.capacity() << '\n';
}