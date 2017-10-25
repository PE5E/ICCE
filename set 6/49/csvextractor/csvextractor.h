#include <string>

class CSVextractor
{
    public:
        CSVextractor(std::istream &in);
        bool parse(std::string ***bigPtr);
        size_t nFields();
    private:
};
    
inline bool CSVextractor::parse(std::string ***bigPtr)
{
    return true;
}

inline size_t CSVextractor::nFields()
{
    return 5;
}

inline CSVextractor::CSVextractor(std::istream &in)
{
// nothing at all
}
