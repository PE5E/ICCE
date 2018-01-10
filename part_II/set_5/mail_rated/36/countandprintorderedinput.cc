#include "main.ih"

void countAndPrintOrderedInput()
{
	map<string, int> wordcount;
	
	string word;

	while (cin >> word)
		++wordcount[word];	

	for (auto it = wordcount.begin(); it != wordcount.end(); ++it)
		cout << it->first << ":\t" << it->second << '\n';
}
