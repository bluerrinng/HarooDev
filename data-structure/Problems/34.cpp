/*
34.cpp
폰켓몬 

N 마리의 폰켓몬 중 N/2개를 가져갈 수 있고, 최대한 다양한 종류를 가져가는 것이 목표

*/
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> set_num;
    int halfSize = nums.size()/2;

    for(auto& num : nums)
    {
        set_num.insert(num);
    }

    if(set_num.size() >= halfSize)
    {
        return halfSize;
    }
    else
    {
        return set_num.size();
    }
}