#include "main.ih"

void printOrderedInput()
{
	set<string> inputSet;
	string inputWord;

	while (cin >> inputWord)
		inputSet.insert(inputWord);

	cout << "All distinct words that were entered are alphabetically:" << "\n";

	for (auto begin = inputSet.begin(), end = inputSet.end();
	        begin != end;
	        ++begin)	
		cout << '\t' << *begin << '\n';
}