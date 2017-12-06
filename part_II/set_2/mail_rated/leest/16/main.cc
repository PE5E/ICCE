#include "main.ih"

int main()
{
	std::string str("To Be Destroyed");
	
	try
	{
		fun1();
	}

	catch (HorribleEvent hs)
	{
		std::cerr << "Caught a horrible exception" << '\n';
	}
}