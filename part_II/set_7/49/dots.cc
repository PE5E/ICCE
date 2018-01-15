#include "main.ih"

void dots()
{
	while (true)
	{
		this_thread::sleep_for(chrono::seconds(1));
		if (not busy)
			break;

		cerr << '.';
	}
	cerr << '\n';
}