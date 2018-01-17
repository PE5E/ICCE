#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <istream>

using namespace std;

class line: public string
{};

istream &operator>>(istream &is, line &someLine)
{
	getline(is, someLine);
	return is;
}

int main()
{
	vector<string> data;

	copy(istream_iterator<line>(cin),
		 istream_iterator<line>(),
		 back_inserter(data));
}