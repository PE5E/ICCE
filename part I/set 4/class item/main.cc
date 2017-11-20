#include "myheader.ih"

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

    inputToItem();

}


//  in main.cc komt het programma wat gebruikt maakt van de class
