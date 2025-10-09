#include <iostream>
#include <vector> 
#include <queue>

using namespace std;


void dfs(int start, vector<vector<int>> neighbors, vector<bool>& visited)
{
    visited[start] = true;

    for(auto v : neighbors[start])
    {
        if(!visited[v])
        {
            dfs(v, neighbors, visited);

        }
    }
}


queue<int> q;

void bfs(int start, vector<vector<int>> neighbors, vector<bool>& visited)
{
    visited[start] = true;

    q.push(start);

    while(!q.empty())
    {
        int x = q.front();
        q.pop();

        for(auto v : neighbors[x])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main()
{
    int computerNum, inputNum;
    int num1, num2;
    int count = 0; 

    cin >> computerNum >> inputNum;

    vector<vector<int>> neighbors(computerNum+1);
    vector<bool> visited(computerNum+1, false);

    for(int i = 0; i < inputNum; i++)
    {
        cin >> num1 >> num2;

        neighbors[num1].push_back(num2);
        neighbors[num2].push_back(num1);
    }

    bfs(1,neighbors,visited);

    for(int i = 2; i< visited.size();i++)
    {
        if(visited[i])
        {
            count++;
        }
    }

    cout << count << endl;
   return 0;
}