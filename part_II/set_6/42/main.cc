#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <istream>

using namespace std;

// Creating an anonymous namespace so that we do not define in the 
// std namespace.
namespace 
{
	class line
	{
		string d_str;

		public:
			operator string() const;

			friend istream &operator>>(istream &is, line &l);

	};

	inline line::operator string() const
	{
		return d_str;
	}

	istream &operator>>(istream &is, line &l)
	{
		getline(is, l.d_str);
		return is;
	}
}

int main()
{
	vector<string> data;

	copy(istream_iterator<line>(cin),
		 istream_iterator<line>(),
		 back_inserter(data));
}