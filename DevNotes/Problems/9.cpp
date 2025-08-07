/*
9.cpp
10진수를 2진수로 변환하기

10진수 decimal을 입력받아 2진수로 변환해서 문자열 형태로 반환하는 solution() 함수를 구현하세요

예시:

Decimal 10 -> result 1010
Decimal 27 -> result 11011

10 % 2 = 0
5 % 2 = 1
2 % 2 = 0
1 % 2 1 

구현 방향성 : 

*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string solution(int decimal)
{

    stack<int> result;
    string answer;

    while(true)
    {
        int answer = decimal % 2 ;
        decimal /= 2;

        result.push(answer);
        if(decimal == 0)
        {
            break;
        }
    }

    while(!result.empty())
    {
        answer += to_string(result.top());
        result.pop();
    }

    return answer;
}

int main()
{
    int decimal = 27;

    auto result = solution(decimal);

    cout << result;

    return 0;
}