#include "main.ih"

void countAndPrintOrderedInput()
{
	multiset<string> inputSet;
	string inputWord;

	while (cin >> inputWord)
		inputSet.insert(inputWord);

	cout << "All distinct words that were entered are alphabetically:" << "\n";

	size_t count = 0;

	for (auto begin = inputSet.begin(), end = inputSet.end();
	        begin != end;
	        begin = begin + count)
	{
		count = inputSet.count(*begin);
		cout << count << ": " << *begin << '\n';
	}
}