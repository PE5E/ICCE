#include "main.ih"

int main()
{
	std::string str("To Be Destroyed");
	
	try
	{
		fun1();
	}

	catch(...)
	{
		std::cerr << "Caught an exception" << '\n';
	}
}