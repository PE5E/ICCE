#include "main.ih"
#include <iostream> // just for testing purposes

int main()
{
	string *strPtr = factory("test", 10);
	string *strPtr2 = factory("tes2wtwaet", 10);

	for(int i=0;i<10;++i)cout<<strPtr[i]<<'\n';
    cout << "---" << '\n';
	for(int i=0;i<10;++i)cout<<strPtr2[i]<<'\n';

    delete[] strPtr;
    delete[] strPtr2;
}
