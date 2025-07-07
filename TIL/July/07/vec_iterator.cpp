#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v = {1,2,3,4,5,6};

int main()
{
    for (auto it = v.begin(); it!= v.end();it++)
    {
        cout << (*it) << endl;
    }

    auto result = find(v.begin(),v.end(), 30);
    if (result != v.end())
    {
        cout << "Target Found!" << endl;
        cout << (*result);
    }
    else
    {
        cout << "Target Missing!"<< endl;
    }

    return 0;

}