/*
2748.cpp
Dynamic Programming의 기초적인 문제 - 피보나치 문제
피보나치는 0번째 피보나치는 0이고, 1번째 피보나치는 1, 2번째 부터는 앞의 두수의 합이다. 
*/

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    vector<int> fib (num+1);

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i <= num; i++)
    {
        fib[i] = fib[i-1] + fib[i-2]; 
    }

    cout << fib[num];

    return 0;

}