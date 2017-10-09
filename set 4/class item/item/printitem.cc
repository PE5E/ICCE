#include "item.ih"
using namespace std;

void Item::printItem()
{
    cout << "Name: " << d_name << '\n' <<
            "Category : " << d_category << '\n' <<
            "Item number: " << d_itemNr << '\n' <<
            "Price : " << d_price << "\n\n";

}

