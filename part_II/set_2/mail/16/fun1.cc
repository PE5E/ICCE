#include "main.ih"

void fun1()
{
	std::string str1("To Be Destroyed");

	try
	{
		fun2();
	}
	
	catch(...)
	{
		throw;
	}
}