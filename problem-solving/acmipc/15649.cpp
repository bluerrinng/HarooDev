/*
15694.cpp
백트래킹 
자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램

첫번째 숫가자 두번째 숫자보다 작을때 
*/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> result;
vector<int> answer;

void backtrack(int num, int start, int end)
{
    if( num == end)
    {
        result.push_back(answer);
        return;
    }

    for(int i = start; i <= end; i++)
    {
        if(i <= end)
        {

        }
    }


}

