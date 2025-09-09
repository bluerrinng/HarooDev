#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int giantnum;
    cin >> giantnum;

    int senti_height;
    cin >> senti_height;

    int hitnum;
    cin >> hitnum;

    priority_queue<int> pq;
    int count = 0 ;
    for(int i = 0; i < giantnum ;i ++)
    {
        int giant;
        cin >> giant;
        pq.push(giant);
    }

    while(count != hitnum )
    {
        if(pq.top() < senti_height)
        {
            break;           
        }

        int val  = pq.top();
        pq.pop();
        val /= 2;

        if(val == 0)
        {
            val = 1;
        }
        
        pq.push(val);
        count++;
    }

    if(senti_height <= pq.top())
    {
        cout << "NO\n";
        cout << pq.top();
    }
    else
    {
        cout << "YES\n";
        cout << count;
    }

    return 0;
}