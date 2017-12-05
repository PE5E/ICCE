#include "main.ih"

void fun2()
{
	std::string str2("To Be Destroyed");

	try
	{
		int someInt = 0;
		throw someInt;
	}
	
	catch(...)
	{
		throw;
	}
}