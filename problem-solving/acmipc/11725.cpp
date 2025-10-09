#include <vector>
#include <iostream>

using namespace std;

void dfs(int start, vector<vector<int>> neighbors, vector<int>& visited, vector<int>& parent)
{
    visited[start] = true;

    int t = start;
    
    for(auto c: neighbors[start])
    {
        if(!visited[c])
        {
            parent[c] = t;
            dfs(c, neighbors,visited,parent);
        }
    }
}



int main()
{
    int nodenum;
    cin >> nodenum;

    vector<vector<int>> neighbors(nodenum+1);
    vector<int> visited(nodenum+1, false);
    vector<int> parent(nodenum+1);

    for(int i = 0 ; i< nodenum-1; i++)
    {
        int a,b;
        cin >> a >> b;

        neighbors[a].push_back(b);
        neighbors[b].push_back(a);
    }

    dfs(1,neighbors,visited,parent);

    for(int i = 2; i < parent.size();i++)
    {
        cout << parent[i];
        cout <<"\n";
    }

    return 0;


}