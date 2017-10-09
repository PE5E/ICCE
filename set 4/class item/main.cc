#include <iostream>
#include <string>
#include "item.h"

using namespace std;

int main()
{

// statische item:

    Item first;
    first.setName("LM317");
    first.setCategory("Voltage regulator");
    first.setItemNr("");
    first.setPrice(1.75);

    first.printItem();


    size_t itemInputNr = 0;
    string itemInputName = "";
    string inputStr = "";

    while (true)
    {
        itemInputName = "inputNr" + to_string(itemInputNr);
        Item itemInputName;
        inputStr = "";

        cout << "Name of item: \n";
        cin >> inputStr;
        itemInputName.setName(inputStr);
        
        cout << "Category of item: \n";
        cin >> inputStr;
        itemInputName.setCategory(inputStr);

        cout << "Number of item: \n";
        cin >> inputStr;
        itemInputName.setItemNr(inputStr);

        cout << "Price of item: \n";
        cin >> inputStr;
        itemInputName.setPrice(stod(inputStr));

        cout << "\n -------- \n\n" << "inputNr" + to_string(itemInputNr) << '\n';
        itemInputName.printItem();

        ++itemInputNr;

        cout << "\n -------- \n\n";
    }



}


//  in main.cc komt het programma wat gebruikt maakt van de class
