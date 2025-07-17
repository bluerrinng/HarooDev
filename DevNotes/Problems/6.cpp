/*
6.cpp
실패율 문제 
실패율 : 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수/ 스테이지에 도달한 플레이어 수

전체 스테이지 개수가 N
게임을 이용하는 사용자가 현재 멈춰 있는 스테이지의 번호가 담긴 배열 stages가 주어질 때 실패율이 높은 스테이지부터 내림차순으로

*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    vector<int> peopleCount(N,0);

    for(int i = 0; i<stages.size(); i++)
    {
        peopleCount[stages[i]-1]++;
    }

    return peopleCount;
    
}

int main()
{
    vector<int> stages = {2,1,2,6,2,4,3,3};
    int N = 5;

    auto result = solution(N, stages);
    
    for (auto it = result.begin(); it!= result.end(); it++)
    {
        cout << (*it) << endl;
    }

    return 0;
}