#include "stringvector.ih"

bool StringVector::unique(string const &word, vector<string> const &strVector) const
{
	for (string element : strVector)
	{
		if (element == word)
			return false;
	}

	return true;
}
