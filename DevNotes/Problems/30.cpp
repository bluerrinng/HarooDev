/*
30.cpp
*/

#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;

    while(true)
    {
        a  = (a+1)/2;
        b = (a+1)/2;

        ++answer;
        if(a == b)
        {
            break;
        }
    }

    return answer;
}


int main()
{
 
    int N = 8;
    int a = 4;
    int b = 7;

    cout << solution(N,a,b);

    return 0;
}