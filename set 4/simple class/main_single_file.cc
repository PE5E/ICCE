#include <iostream>
#include <string>

using namespace std;

class Item
{
    string itemNr;

    public:
        void setItem(string);
        void printItem(void);
};

void Item::setItem(string str)
{
    itemNr = str;
}

void Item::printItem()
{
    cout << itemNr << '\n';
}

int main()
{
    Item article;
    article.setItem("Nr. 1234");
    article.printItem();


}

