#include "showexcepts.ih"

void ShowExcepts::asNoexcept() const
{
	try
	{
		d_fun();
	}
	catch (...)
	{
		std::terminate();
	}
}