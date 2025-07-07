#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string,int> mymap = {{"Apple",1},{"Mango",2}, {"Kiwi",3}};

int main()
{
    for(auto it = mymap.begin(); it != mymap.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    auto result = mymap.find("Apple");

    if (result != mymap.end())
    {
        cout << "Target Found!\n";
        cout << (*result).first;
    }
    else
    {
        cout << "Target Missing!\n";
    }

    return 0;
}