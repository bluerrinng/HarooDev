/*
34.cpp 폰켓몬 문제를 최적화
*/
#include <iostream>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> numset (nums.begin(),nums.end());

    return min(numset.size(),nums.size()/2);
}