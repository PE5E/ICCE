#include "main.ih"

bool busy = true;

int main(int argc, char **argv)
{
	thread waiting(dots);

	for (int i = 0; i < 50000000; ++i)
	{
		string a("a");
	}
	
	busy = false;
	waiting.join();
}