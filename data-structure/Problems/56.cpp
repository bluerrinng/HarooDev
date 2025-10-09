/*
56.cpp
문자열 내 마음대로 정렬하기 
*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gn;

bool compare(string&a, string& b)
{
    return (a[gn] < b[gn]);
}

vector<string> solution(vector<string> strings, int t)
{
    gn =  t;
    sort(strings.begin(),strings.end(),compare);
    return strings;
}

int main()
{
    vector<string> strings = {"sun", "bed", "car"};
    vector<string> result = solution(strings, 1);

    for(auto& c : result)
    {
        cout << c << endl;
    }

    return 0;
    
}