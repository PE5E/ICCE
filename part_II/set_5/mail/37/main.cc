#include "main.ih"

int main()
{
//Without using a class:

	ifstream inputFile("file");                                // select file
	vector<string> strVector = fileIntoVector(inputFile);
	printSizeAndCapacity(strVector); //size 4, capacity 4

	strVector.push_back("extraString");
	printSizeAndCapacity(strVector); //size 5, capacity 8

	vector<string>(strVector).swap(strVector); //shed excess capacity
	printSizeAndCapacity(strVector); //size 5, capacity 5, it worked!

//Using the class StringVector:

	ifstream inputFile2("file");

	StringVector strVecObj(inputFile2);
	strVecObj.printSizeAndCapacity(); //size 4, capacity 4

	strVecObj.add("extraString");
	strVecObj.printSizeAndCapacity(); //size 5, capacity 8

	StringVector(strVecObj).swap(strVecObj);
	strVecObj.printSizeAndCapacity(); //size 5, capacity 5, it worked!
}
