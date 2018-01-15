#include "main.ih"

void dots()
{
	while (true)
	{
		this_thread::sleep_for(seconds(1));
		if (not busy)
			break;

		cerr << "\u2022"; // Unicode bullet character
	}
	cerr << '\n';
}