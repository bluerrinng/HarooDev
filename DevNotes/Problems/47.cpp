/*
47.cpp

1부터 n까지 숫자 조합중 k가 되는 조합식을 찾아서 반환하기

*/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> result;
vector<int> selected_num;

void backTracking(int n,int sum, int start)
{
    if (sum == 10)
    {
        result.push_back(selected_num);
    }

    for(int i = start ; i < n; i++)
    {
        if(sum+i <= 0)
        {
            selected_num.push_back(i);
            backTracking(n,sum+i,i+1);
            selected_num.pop_back();
        }
    }

}

vector<vector<int>> solution(int N)
{
    backTracking(N,0,1);

    return result;
}