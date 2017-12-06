#include "main.ih"

void fun2()
{
	std::string str2("To Be Destroyed");

	try
	{
		throw HorribleEvent{};
	}
	
	catch (HorribleEvent hs)
	{
		throw;
	}
}