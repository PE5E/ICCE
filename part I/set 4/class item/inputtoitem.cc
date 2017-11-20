#include "myheader.ih"

using namespace std;

void inputToItem()
{
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
    
    return;
}
