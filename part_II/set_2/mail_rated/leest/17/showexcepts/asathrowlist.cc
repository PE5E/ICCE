#include "showexcepts.ih"

void ShowExcepts::asAthrowList() const
try
{
	d_fun();
}

catch (int)
{
	throw;
}

catch (string &)
{
	throw;
}

catch (...)
{
	throw bad_exception();
}
