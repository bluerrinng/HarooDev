#include <iostream>
#include <vector> 
#include <queue>

using namespace std;

bool visited[5] = {false};
vector<int> neighbors[5];

queue<int> qe; 

void dfs(int start)
{
    visited[start] = true;
    cout << start << " ";

    for(auto neighbor : neighbors[start])
    {
        if(!visited[neighbor])
        {
            dfs(neighbor);
        }
    }
}

void bfs(int start)
{
    qe.push(start);
    visited[start] = true;

    while(!qe.empty())
    {
        int x = qe.front();
        
        cout <<  x << " " ;
        qe.pop();

        for(auto neighbor: neighbors[x])
        {
            if(!visited[neighbor])
            {
                qe.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

void reset()
{
    for(int i = 0; i< 5;i++)
    {
        visited[i] = false;
    }
}

int main()
{
    neighbors[1].push_back(2);
    neighbors[1].push_back(3);
    neighbors[1].push_back(4);

    neighbors[2].push_back(4);
    neighbors[3].push_back(4);

    cout << "DFS: ";
    dfs(1);

    reset();
    
    cout << "\n";

    cout << "BFS : ";
    bfs(1);
    


    return 0;
}