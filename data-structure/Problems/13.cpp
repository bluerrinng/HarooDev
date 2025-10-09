/*
12.cpp

주식 문제
*/
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices)
{

    stack<int> temp;
    vector<int> result {(int)prices.size(),0};
    int compareNum = 0; 

    for(int i = 0; i< prices.size();i++)
    {
        temp.push(prices[i]);
    }

    for(int i = temp.size(); i > 0 ;i--)
    {
        if(temp.top() > compareNum)
        {
            compareNum = temp.top();
            continue;
        }
        else
        {
            compareNum = temp.top();
            result[i]++;
            temp.pop();
        }
    }

    return result;
}

int main()
{
    vector<int> prices = {1,2,3,2,3};

    auto result = solution(prices);

    for(auto t : result)
    {
        cout << t << endl;
    }

    return 0;
}