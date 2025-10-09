/*
54.cpp
계수 정렬 
빈도수 만큼 오름차순으로 정렬(알파벳 기준)
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    vector<int> count (26,0);
    //먼저 a-z까지의 index를 가진 배열 생성하고, s를 순회하면서 해당 알파벳이 몇번 나왔는지 확인
    for(char c : s)
    {
        count[c-'a']++;
    }

    string sorted_str = "";
    for(int i = 0; i < 26;i++)
    {
        sorted_str += string(count[i], i+'a');
    }

    return sorted_str;
}