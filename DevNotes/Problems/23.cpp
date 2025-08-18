#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<string,int> result;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0; 

    for(int i = 0; i< want.size();i++)
    {
        result[want[i]] = number[i];
    }

    for(int i = 0; i< discount.size() -9;i++)
    {
        unordered_map<string,int> sum;

        for(int j = i; j<10;j++)
        {
            sum[discount[j]]++;
        }

         if(result == sum)
        {
        answer++;
        }
    }

    return answer;

}