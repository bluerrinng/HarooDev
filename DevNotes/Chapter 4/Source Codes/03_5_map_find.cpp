#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    map<string,double> mymap =
    {
        {"Emma", 3.2f},
        {"Jackson", 4.3f},
        {"Alex", 2.5f}
    };

    //Using [] to find a certain key if it exist
    double score = mymap["Jackson"];
    cout << score << endl;

    //Using [] to find a certain key's value if it does not exit -> It will create a key with such name;
    double score2 = mymap["Miya"];
    cout << score2 << endl;

    //Using "find" function of "map" to to find a certain value in the map
    //it is an iterator that returns the iterator of the key if not returns the iterator of the next position of the last value
    map<string,double>::iterator result = mymap.find("Alex");
    if(result != mymap.end())
    {
        cout << result->second << endl;
    }

    for (auto val = mymap.begin() ; val != mymap.end(); val++)
    {
        cout << val->first << " " << val->second << endl;
    }

    return 0;
}