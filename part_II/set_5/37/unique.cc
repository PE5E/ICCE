#include "main.ih"

bool unique(string const &word, vector<string> const &strVector)
{
	for (string element : strVector)
	{
		if (element == word)
			return false;
	}

	return true;
}