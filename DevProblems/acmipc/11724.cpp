#include <iostream>
#include <queue>
#include <vector>


using namespace std;

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
                visited[v] = true;
                q.push(v);
            }
        }
    }

}

int main()
{
    int nodeNum, conNum;
    int result = 0; 
    cin >> nodeNum >> conNum;
    vector<vector<int>> neighbors (nodeNum+1);
    vector<bool> visited (nodeNum+1, false);

    for(int i = 0; i< conNum; i++)
    {
        int a,b;
        cin >> a >> b;

        neighbors[a].push_back(b);
    }

    for(int i = 1; i< neighbors.size();i++)
    {
        for(int j = 0; j<neighbors[i].size();j++)
        {
            if(!visited[neighbors[i][j]])
            {
                bfs(neighbors[i][j], neighbors, visited);
                result++;
            }
        }
    }

    cout << result << endl;

    return 0;
}