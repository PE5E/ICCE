#include "main.ih"

bool isPrime(size_t noToCheck, vector<size_t> foundPrimes)
{
	for (size_t denominator: foundPrimes)
	{
		if (noToCheck % denominator == 0)
			return false;
	}

	return true;	
}