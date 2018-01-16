#include "main.ih"

void displayPrimes(size_t noPrimes)
{
	vector<size_t> foundPrimes = {2};
	size_t next = 3;

	while (foundPrimes.size() < noPrimes)
	{
		if (isPrime(next, foundPrimes))
			foundPrimes.push_back(next);

		++next;
	}

	for (size_t prime: foundPrimes)
		std::cout << prime << " ";
}