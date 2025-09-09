#include <iostream>
#include <vector>

using namespace std;

bool found = false;

void dfs(int start, vector<vector<int>>& friends, vector<bool> visited , int depth)
{
    if(depth == 5)
    {
        found = true;
        return ;
    }

    visited[start] = true;

    for(auto& num : friends[start])
    {
        if(!visited[num])
        {
            dfs(num,friends, visited, depth+1);
        }
    }

    visited[start] = false;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int friendNum;
    cin >> friendNum;

    int relationshipNum;
    cin >> relationshipNum;

    vector<vector<int>> friends(5, vector<int>());
    vector<bool> visited(5,false);

    for(int i = 0; i < relationshipNum; i++)
    {
        int a;
        cin >> a;
        int b; 
        cin >> b;

        friends[a].push_back(b);
        friends[b].push_back(a);
    }

    for(int i = 0; i < friendNum ; i++)
    {
        dfs(0,friends, visited, 0);
        if(found)
        {
            break;
        }
    }

    cout << (found ? 1 : 0);

    return 0;
}