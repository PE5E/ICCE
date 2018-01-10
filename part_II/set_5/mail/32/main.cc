#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CSVLines
{
    using StrVector = std::vector<std::string>;    // some hipster shit 8)
    std::vector<StrVector> d_data;

    public:
        CSVLines();

        void read();

        auto begin();
        auto end();
};

CSVLines::CSVLines()
{}

inline void CSVLines::read()
{}

inline auto CSVLines::begin() 
{
    return d_data.begin();
}

inline auto CSVLines::end()
{
    return d_data.end();
}

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
