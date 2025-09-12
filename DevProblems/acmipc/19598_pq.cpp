#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int,int>> v1;

    int num;
    cin >> num;

    for(int i = 0; i < num ;i++)
    {
        int a,b;
        cin >> a >> b;
        v1.push_back(pair(a,b));
    }

    sort(v1.begin(),v1.end());

    priority_queue<int, vector<int>, greater<int>> pq;

    for(auto& num : v1)
    {
        if(!pq.empty() && num.first >= pq.top())
        {
            pq.pop();
        }
        else
        {
            pq.push(num.second);
        }
    }

    cout << pq.size();
    

}