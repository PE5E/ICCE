#include "showexcepts/showexcepts.hh"
#include <string>

using namespace std;

void voidFunction()
{
	throw 1; // this works fine
	//throw 1.0           		 
}

int main()
{
	void (*fun)() = &voidFunction;
	ShowExcepts showexcepts(0, fun);

	try
	{
		showexcepts.asAthrowList();
		//showexcepts.asNoexcept();
	}
	
	catch (int)
	{
	}
	
	catch (string &)
	{
	}
}
