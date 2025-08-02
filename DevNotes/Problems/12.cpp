
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
    vector<int> result(prices.size(),0);
    for(int i = 0; i< prices.size();i++)
    {
        for(int j = i+1; j < prices.size();j++)
        {
            if(prices[i] <= prices[j])
            {
                result[i]++;
            }
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