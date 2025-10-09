#include <iostream>
#include <vector>
#include <queue>

using namespace std;

queue<int> q;

void dfs(int start, vector<bool>& visited, vector<vector<int>> neighbors)
{
    visited[start] = true;
    cout << start << endl;
    for(int i =0 ; i< neighbors[start].size(); i++)
    {
        if(!visited[neighbors[start][i]])
        {
            dfs(neighbors[start][i],visited,neighbors);
        }
    }

}

void bfs(int start, vector<bool>& visited, vector<vector<int>> neighbors)
{
    q.push(start);
    visited[start] = true;

    while(!q.empty())

    {
        int x = q.front();

        cout << x << endl;

        q.pop();
        for(int i = 0; i<neighbors[x].size();i++)
        {
            if(!visited[neighbors[x][i]])
            {
                visited[neighbors[x][i]] = true;
                q.push(neighbors[x][i]);
                
            }
        }
    }
}

void reset(vector<bool>& visited)
{
    for(auto it = visited.begin(); it!= visited.end();it++)
    {
        *it = false;
    }
}

int main()
{
    int node,inputNum,startNode;

    int input1, input2;
    
    cin >> node >> inputNum >> startNode;
    
    vector<vector<int>> neighbors (node+1);

    vector<bool> visited (node+1, false);


    for(int i = 0; i< inputNum; i++)
    {
        cin >> input1 >> input2;

        neighbors[input1].push_back(input2);
    }

    dfs(startNode, visited, neighbors);

    reset(visited);

    cout << "\n";
    cout << "BFS " << endl;

    bfs(startNode, visited, neighbors);

    return 0;
}