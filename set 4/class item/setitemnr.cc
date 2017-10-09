#include "item.ih"

void Item::setItemNr(string const &itemNr)
{
    if ((itemNr.find_first_not_of("0123456789") == string::npos) &&
        (itemNr.length() == 4))
        d_itemNr = itemNr;
    else if (itemNr.empty())
        d_itemNr = "to be determined";
    else
        cout << "Item number is 4 digits or leave blank\n";        
}
