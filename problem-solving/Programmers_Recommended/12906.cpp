#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    stack<int> temp;

    for(int i = 0 ; i< arr.size(); i++)
    {
        if(temp.empty() || temp.top() != arr[i])
        {
            temp.push(arr[i]);
        }
    }

    vector<int> result;

    while(!temp.empty())
    {
        result.push_back(temp.top());
        temp.pop();
    }

    vector<int> final (result.rbegin(),result.rend());

    return final;
}