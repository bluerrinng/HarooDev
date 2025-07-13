/*
3.cpp
문제 3: 두 수를 뽑아서 더하기 

정수 배열 numbers가 주어집니다. 
numbers에서 서로 다른 인덱스에 있는 2개의 수를 뽑아 더 해 만들 수 있는 모든 수를 배열에 오름차순으로 담아 반환하는 solution()함수

*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int>& numbers)
{
    set<int> myset;

    for(int i = 0; i< numbers.size(); i++)
    {
        for(int j = i+1 ; j< numbers.size();j++)
        {
            myset.insert(numbers[i]+numbers[j]);
        }
    }

    vector<int> answer(myset.begin(),myset.end());

    return answer;
}

int main()
{
    vector<int> v = {2,1,3,4,1};
    
    vector<int> t = solution(v);

    for(int i : t)
    {
        cout << i << endl;
    }

    return 0;
}