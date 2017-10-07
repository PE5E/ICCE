#include <iostream>
#include <string>
#include "item.h"

using namespace std;

int main()
{
    Item article;
    string inputStr;

    cout << "Enter an item \n";
    cin >> inputStr;
    article.setItem(inputStr);
    article.printItem();
//     article.itemNr = "Hallo";   // test private status
}


//  in main.cc komt het programma wat gebruikt maakt van de class
