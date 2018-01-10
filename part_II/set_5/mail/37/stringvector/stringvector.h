#ifndef INCLUDED_STRINGVECTOR_
#define INCLUDED_STRINGVECTOR_

#include <vector>
#include <fstream>

class StringVector
{
	std::vector<std::string> d_strVector;

	public:
		StringVector() = default;
		StringVector(std::ifstream &inputFile);

		void add(std::string const &str);
		void printSizeAndCapacity() const;
		void swap(StringVector &other);
	private:
		void fileIntoVector(std::ifstream &file);
};

inline void StringVector::add(std::string const &str)
{
	d_strVector.push_back(str);
}

#endif