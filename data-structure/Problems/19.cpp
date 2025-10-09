#include <iostream>
#include <unordered_set>

using namespace std;

vector<bool> solution(vector<string>& string_list, vector<string>& query_list)
{
    unordered_set<string> mymap(query_list.begin(),query_list.end());

    vector<bool> result;

    for(auto c : string_list)
    {
        result.push_back(mymap.count(c)>0);
    }

    return result;
}