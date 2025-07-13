#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lst)
{
    vector<int> result;
    
    sort(lst.rbegin(),lst.rend());
    auto newend = unique(lst.begin(),lst.end());

    for(auto it = lst.begin(); it != newend; ++it)
    {
        result.push_back(*it);
    }

    for(auto it = result.begin();it != result.end(); ++it)
    {
        if(it != result.end())
        {
            cout << (*it) <<",";
        }
    }

    return result;
}

int main()
{
    vector<int> v = {4,2,2,1,3,4};

    solution(v);
}