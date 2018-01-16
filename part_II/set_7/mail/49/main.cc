#include "main.ih"

bool busy = true;

int main(int argc, char **argv)
{
	size_t noPrimes = stoull(argv[1]);

	time_t begin = system_clock::to_time_t(system_clock::now());

	thread waiting(dots);

	displayPrimes(noPrimes);
	
	busy = false;
	waiting.join();

	time_t end = system_clock::to_time_t(system_clock::now());

	cout << put_time(localtime(&begin), "Starting time: %c") << '\n';
	cout << put_time(localtime(&end),   "Ending time:   %c") << '\n';
	cout << "Computation of " << noPrimes << " primes took " 
	     << difftime(end, begin) << " seconds";
}