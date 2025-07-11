#include <unordered_map>
#include <iostream>

using namespace std;

int main()
{
    unordered_map<string, double> mymap;

    //unordered_map's insert time complexity is O(1)
    mymap.insert({"Hayes", 4.0f});
    mymap.insert(make_pair("Marc",5.0f));
    mymap.insert(make_pair("Jack", 3.4f));

    //using forward iterator to print the elements of the unordered map
    for (auto it = mymap.begin(); it != mymap.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }

    //using unordered map's "find" function to locate the iterator of certain key
    auto element1 = mymap.find("Hayes");
    if(element1 != mymap.end())
    {
        mymap.erase(element1);
    }

    mymap.erase("Jack");

    cout << "After Erasing : " << endl;

    for (auto it = mymap.begin(); it != mymap.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }



    return 0;
}