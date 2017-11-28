#include "main.ih"

int main()
{
    Strings objectA;
    string temp;
    cout << "Enter text for object A\n";
    cin >> temp;
    objectA.add(temp);

    temp = "";
    Strings objectB;
    cout << "Enter text for object B\n";
    cin >> temp;
    objectB.add(temp);

    cout << (objectA != objectB ? "A is niet gelijk aan B\n" : "A is gelijk aan B\n");
}
