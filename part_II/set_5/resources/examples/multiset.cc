#include <iostream>
#include <set>

using namespace std;

int main()
{
    string  
        sa[] =                      // C style array of strings
        {
            "alpha",
            "echo",
            "hotel",
            "mike",
            "romeo"
        };

    multiset<string>                                                  // initialize multiset with C array
        object(&sa[0], &sa[5]);

    object.insert("echo");
    object.insert("echo");

    multiset<string>::iterator
        it = object.find("echo");                                     // find returns iterator over hits

    for (; it != object.end(); ++it)
        cout << *it << " ";
    cout << '\n';

    cout << "Multiset::equal_range(\"ech\")\n";
    pair                                                              // pair of multiset iterators
    <
        multiset<string>::iterator,
        multiset<string>::iterator
    >
        itpair = object.equal_range("ech");                           // lower_bound, upper_bound
                                                                      // lower_bound: first key at least equal
                                                                      // upper_bound: first key larger than

    if (itpair.first != object.end())                                 // if lower bound exists
        cout << "lower_bound() points at " << *itpair.first << '\n';
    for (; itpair.first != itpair.second; ++itpair.first)             // loop until upper
        cout << *itpair.first << " ";

    cout << '\n' <<                                                   // number of hits
            object.count("ech") << " occurrences of 'ech'" << '\n';

    cout << "Multiset::equal_range(\"echo\")\n";    // range of elements that have echo key
    itpair = object.equal_range("echo");

    for (; itpair.first != itpair.second; ++itpair.first)
        cout << *itpair.first << " ";

    cout << '\n' <<
            object.count("echo") << " occurrences of 'echo'" << '\n';

    cout << "Multiset::equal_range(\"echoo\")\n";
    itpair = object.equal_range("echoo");

    for (; itpair.first != itpair.second; ++itpair.first)
        cout << *itpair.first << " ";

    cout << '\n' <<
            object.count("echoo") << " occurrences of 'echoo'" << '\n';
}
