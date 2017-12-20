#include <iostream>
#include <string>
#include <vector>

using namespace std;


class CSVLines: protected std::vector<std::vector<std::string>>
{
    typedef std::vector<std::string> StrVector;

    public:
        CSVLines();

        void read();

        using std::vector<StrVector>::begin;
        using std::vector<StrVector>::end;
};

CSVLines::CSVLines()
{}
inline void CSVLines::read()
{}


void process(std::vector<std::string> &strVect)
// uses strVect's begin and end members.
{
    cout << "Process\n";
}


int main()
{
    CSVLines csvLines;
    csvLines.read();
    for (auto &next: csvLines)
        process(next);
}
