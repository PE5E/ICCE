#include "main.ih"

void countAndPrintOrderedInput()
{
	multiset<string> inputSet;
	string inputWord;

	while (cin >> inputWord)
		inputSet.insert(inputWord);

	cout << "All distinct words that were entered are alphabetically:" << "\n";

	auto begin = inputSet.begin(),
	     end   = inputSet.end();

	size_t count;

	for (size_t idx = begin; idx < end; idx += count)
	{
		count = inputSet.count(*begin);
		cout << count << ": " << *begin << '\n';
//		cerr << count << '\n';
//		cerr << begin << '\n';
//    	begin += count;
//		cerr << begin << '\n';
	}
}
