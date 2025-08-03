
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
    vector<int> answer(prices.size());
    stack<int> s; 
    int priceNum = prices.size();

    for(int i =0 ; i<priceNum;i++)
    {
        while(!s.empty() && prices[s.top()] > prices[i])
        {
            answer[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty())
    {
        answer[s.top()] = priceNum - s.top() -1;
        s.pop();
    }

    return answer;
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