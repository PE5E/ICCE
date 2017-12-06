#include "main.ih"

string *factory(string const &str, size_t count)
{
	static string *strTest = new string;
    *strTest = str; //We use static to make it
                    //available to the struct.
	
	struct Xstr: public string
	{
		Xstr()
		:
			string(*strTest)
		{}
	};
    
	return new Xstr[count];
}
