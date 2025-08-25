#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


unordered_map<string,int> mapCount;

void combination(string word, string initial, int length)
{
    if(initial.size() == length)
    {
        mapCount[initial]++;
    }
    else
    {
        for(int i = 0; i< word.size();i++)
        {
            combination(word.substr(i+1), initial+word[i], length);
        }
    }
}

vector<string> solution(vector<string> orders, vector<int> course)
{
    vector<string> result;

    for(string& order : orders)
    {
        sort(order.begin(),order.end());
    }

    for(int length : course)
    {
        for(string order : orders)
        {
            combination(order, "", length);
        }

        int maxOrder = 0; 
        for(auto it : mapCount)
        {
            maxOrder = max(maxOrder, it.second);
        }
        
        for(auto it : mapCount)
        {
            if(maxOrder >= 2 && it.second == maxOrder)
            {
                result.push_back(it.first);
            }
        }

        mapCount.clear();
    }

    sort(result.begin(),result.end());
    return result;

}