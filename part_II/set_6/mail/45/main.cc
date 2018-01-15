#include <algorithm> // unique sort
#include <fstream>   // ifstream
#include <iostream>  // cout
#include <iterator>  // ostream_iterator
#include <vector>    // vector

using namespace std;

int main(int argc, char *argv[])
{ 
    vector<string> data;                    // create and initialize object
    vector<string> data2;                   // create and initialize object

    ifstream inputFile(argv[1], ios::in);   // open first file
    string line;                            // create and initialize object

    while (getline(inputFile, line))        // fill data with contents of file1
        data.push_back(line);

    inputFile.close();                      // close first file
    inputFile.open(argv[2], ios::in);       // open second file

    while (getline(inputFile, line))        // fill data2 with contents of file2
        data2.push_back(line);

    auto it = data.begin();                 // create iterator

                                            // erase the words "extra"
    while (find(data.begin(), data.end(), "extra") != data.end())
        data.erase(find(data.begin(), data.end(), "extra"));

                                            // add data2 content to data
    data.insert(data.end(), data2.begin(), data2.end());

    sort(data.begin(), data.end());         // sort the data set
    it = unique(data.begin(), data.end());  // make unique and return leftover
    data.resize(distance(data.begin(),it)); // delete leftover

    data.shrink_to_fit();                   // resize to actual size
                                            
                                            // copy contents of data to screen
    copy(data.begin(), data.end(), ostream_iterator<string>(cout, "\n"));
}




