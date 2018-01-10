#include "stringvector.ih"

void StringVector::fileIntoVector(ifstream &file)
{
    set<string> strSet;
    string word;

    while (file >> word)
    {
        strSet.insert(word);
    }

    d_strVector = vector<string>(strSet.begin(), strSet.end());
    return;
}
