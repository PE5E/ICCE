#include "data.ih"

void Data::printAll()
{
    for (auto item: d_data)
        cout << *item << '\n';
}
