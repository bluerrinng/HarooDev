/*
57.cpp

정수 n을 받아 각 자릿수를 내림차순으로 정렬하세요

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool compare(char& a, char& b)
{
    return a > b;
}

long long solution(long long n)
{

    vector<char> result;
    string s = to_string(n);

    for(int i = 0 ; i< s.size();i++)
    {
        result.push_back((s[i]));
    }


    sort(result.begin(),result.end(),compare);

    string test = "";

    for(int i = 0; i < result.size(); i++)
    {
        test += result[i];
    }

    long long answer = std::stoll(test);

    return answer;

}

int main()
{
    long long n = 118372;

    long long answer = solution(n);

    cout << answer << endl;

    return 0;
}