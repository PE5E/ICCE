#include "item.h"
#include "item.ih"

using namespace std;

string const &Item::name() const
{
    return d_name;
}

string const &Item::category() const
{
    return d_category;
}

string const &Item::itemNr() const
{
    return d_itemNr;
}

double &Item::price() const
{
    return d_price;
}
