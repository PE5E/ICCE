#include "stringvector.ih"

void StringVector::fileIntoVector(ifstream &inputFile)
{
	string word;
	while (inputFile >> word)
	{
		if (unique(word, d_strVector))
			d_strVector.push_back(word);
	}
}