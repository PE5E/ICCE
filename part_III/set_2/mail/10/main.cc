#include "main.ih"

int main()
{
    Data dataObject;
    copy(istream_iterator<string>(cin), 
        istream_iterator<string>(), 
        back_inserter(dataObject));
    dataObject.printAll();
}
