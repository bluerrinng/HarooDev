#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

void dfs(int x, int y, vector<vector<int>>& grid, vector<vector<int>>& visited)
{
    visited[x][y] = true;

    for(int i = 0; i< 4 ;i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[nx].size())
        {
            if(grid[nx][ny] == 0 && !visited[nx][ny])
            {
                dfs(nx,ny,grid,visited);
            }
        }
    }
}

vector<int> solution(vector<vector<int>>& grid,vector<vector<int>>& visited)
{
    int t = grid.size();
    vector<int> answer;
    for(int i = 0; i < grid[0].size();i++)
    {
        dfs(0,i,grid,visited);
    }

    for(int i = 0; i < grid[0].size();i++)
    {
        if(visited[t-1][i])
        {
            answer.push_back(1);
        }
    }

    return answer;
}


int main()
{
    int m,n;

    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n,1));
    vector<vector<int>> visited(m,vector<int>(n,false));

    for (int i = 0; i < m; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++) {
            grid[i][j] = line[j] - '0';
        }
    }

    vector<int> result = solution(grid,visited);


    int t = 0;
    if(!result.empty())
    {
        t = *max_element(result.begin(),result.end());
    }
    

    if(t != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;

}
