#include "main.ih"
#include <iostream> // just for testing purposes

int main()
{
	size_t noOfStrings = 10;
	string *strPtr = factory("test", noOfStrings);
	string *strPtr2 = factory("test2", noOfStrings);

	for (size_t i = 0; i < noOfStrings; ++i)
		cout << strPtr[i] << '\n';
    cout << "-----" << '\n';
	for (size_t i = 0; i < noOfStrings; ++i)
		cout << strPtr2[i] << '\n';

    delete[] strPtr;
    delete[] strPtr2;
}
