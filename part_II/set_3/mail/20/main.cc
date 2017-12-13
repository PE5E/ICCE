#include "main.ih"
#include "addition/addition.h"
#include "operations/operations.h"

int main()
{
	string input;
	Operations opObj;
	Addition addObj;
	Subtraction subObj;

	usage();

	while (true)
	{
		cout << "> ";

		cin >> input;

		if (input == "stop")
			return 0;

		if (input == "-")      //We choose this instead of a switch
			opObj - opObj;     //statement, as we would have to use
		else if (input == "-=")//unintuitive commands to easily make a
			subObj -= opObj;   //distinction between them in the switch.
		else if (input == "+") 
			opObj + opObj;
		else if (input == "+=")
			addObj += opObj;
		else
			usage();
	}
}