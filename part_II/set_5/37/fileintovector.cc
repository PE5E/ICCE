#include "main.ih"

vector<string> fileIntoVector(ifstream &file)
{
	vector<string> strVector;
	string word;

	while (file >> word)
	{
		if (unique(word, strVector))
			strVector.push_back(word);
	}

	return strVector;
}