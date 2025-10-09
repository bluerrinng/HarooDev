/*
10.cpp
괄호 회전하기

다음의 규칙을 지키는 문자열을 올바른 괄호 문자열 :
"()" "[]" "{}"

대괄호, 중괄호, 그리고 소괄호로 이루어진 문자열 s가 매개변수로 주어진다. 이 s를 왼쪽으로 x(0<x<(s의 길이)) 칸만큼 회전시켰을 때 s가 올바른 괄호 문자열이
되게 하는 x 의 개수를 반환하는 solution()

예시)

입출력          result
"[](){}"          3
"}()[{"           2
"[)()]"           0
"}}}"             0


*/

#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<char, char> bracketPair = {
    {')', '('},
    {']', '['},
    {'}', '{'}
};


bool isValid(string&s , int start)
{
    stack<char> stk;
    unsigned int sz = s.size();

    for(int i = 0; i<sz; i++)
    {
        char ch = s[(start+i)%sz];

        if(bracketPair.count(ch))
        {
            if(stk.empty() || stk.top() != bracketPair[ch])
            {
                return false;
            }
            stk.pop();
        } else
        {
            stk.push(ch);
        }
    }

    return stk.empty();
}

int solution(string s)
{
    int answer = 0;
    int n = s.size();

    for(int i = 0; i < n ; i++)
    {
        answer += isValid(s,i);
    }

    return answer;
}
