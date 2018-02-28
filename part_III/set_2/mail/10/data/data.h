#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <vector>
#include <string>
#include <memory>

class Data
{
    typedef std::vector<std::shared_ptr<std::string>> DataVector;

    DataVector d_data;

    public:
        typedef std::string value_type;
        typedef value_type const &const_reference;

        void push_back(std::string const &str);

        //function to show content of the vector
        void printAll();
};

#endif
