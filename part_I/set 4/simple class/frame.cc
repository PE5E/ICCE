#include "item.ih"

void Item::setItem(string str)
{
    itemNr = str;
}

void Item::printItem()
{
    cout << itemNr << '\n';
}

// dit is een simpele werkende test
// Frank zegt: elke functie in eigen file met functienaam als filename
