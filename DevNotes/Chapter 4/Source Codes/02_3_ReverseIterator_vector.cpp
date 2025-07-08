#include <iostream>
#include <vector>
#include <algorithm>                    //to use find

using namespace std;

vector<int> v = {10,20,30,40,50};

int main()
{
    for(auto it = v.rbegin(); it!= v.rend(); ++it)
    {
        cout << *it << endl;
    }

    auto result = find(v.rbegin(),v.rend(),30);
    
    if(result != v.rend())
    {
        cout << "Target Found : " << (*result);
    }
    else
    {
        cout << "Target Missing!" << endl;
    }

    return 0;
}