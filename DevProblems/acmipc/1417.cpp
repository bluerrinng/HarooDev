/*
1417.cpp
선거조작 문제
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    int dasom; 
    cin >> dasom;

    priority_queue<int> pq;
    for(int i = 0; i < num-1;i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    
    int count = 0 ; 
    while(!pq.empty() && pq.top() >= dasom)
    {
        int val = pq.top();
        pq.pop();
        dasom += 1;
        count += 1;
        val -= 1;
        pq.push(val);
    }

    cout << count;
    return 0;


}