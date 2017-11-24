#include "showexcepts.ih"

void ShowExcepts::asNoexcept() const throw ()
{
	d_fun();
}