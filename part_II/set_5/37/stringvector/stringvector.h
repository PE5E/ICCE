#ifndef INCLUDED_STRINGVECTOR_
#define INCLUDED_STRINGVECTOR_

#include <vector>
#include <fstream>

using namespace std;

class StringVector
{
	vector<string> d_strVector;

	public:
		StringVector() = default;
		StringVector(ifstream &inputFile);

		void add(string const &str);
		void printSizeAndCapacity() const;
		void swap(StringVector &other);

	private:
		bool unique(string const &word, vector<string> const &strVector) const;
		void fileIntoVector(ifstream &inputFile);
};

inline void StringVector::add(string const &str)
{
	d_strVector.push_back(str);
}

#endif