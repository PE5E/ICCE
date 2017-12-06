#include "showexcepts.ih"

ShowExcepts::ShowExcepts(int value, void (*fun)())
:
	d_value(value),
	d_fun(fun)
{
}
