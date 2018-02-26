#include "data.ih"

void Data::push_back(std::string const &str)
{
    d_data.push_back(shared_ptr<string>(new string{str}));
}
