#include "main.ih"

vector<string> fileIntoVector(ifstream &file)
{
        set<string> strSet;
	string word;

	while (file >> word)
	{
            strSet.insert(word);
        }

        return vector<string>(strSet.begin(), strSet.end());
}
