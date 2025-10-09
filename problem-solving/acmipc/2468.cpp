#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

void dfs(int x,int y, vector<vector<int>>& grid, vector<vector<bool>>& visited, int h)
{
    visited[x][y] = true;
    for(int i = 0; i <4 ;i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < grid.size() && ny >=0 && ny< grid[0].size())
        {
            if(!visited[nx][ny] && grid[nx][ny] > h)
            {
                dfs(nx,ny, grid, visited, h);
            }
        }
    }
}

int findMax(vector<vector<int>> grid)
{
    int max = 0;

    for(int i = 0; i < grid.size();i++)
    {
        max = *max_element(grid[i].begin(),grid[i].end());
    }

    return max;
}

void reset(vector<vector<bool>>& visited)
{
    for(int i =0 ; i < visited.size();i++)
    {
        for(int j = 0; j< visited[0].size();j++)
        {
            visited[i][j] = false;
        }
    }
}

int solution(vector<vector<int>> grid,vector<vector<bool>>& visited)
{
    int max = findMax(grid);
    vector<int> result;
    for(int i = 0; i< max; i++)
    {
        int count = 0;
        for(int j= 0; j< grid.size();j++)
        {
            for(int k = 0; k < grid[0].size();k++)
            {
                if(!visited[j][k] && grid[j][k] > i)
                {
                    dfs(j,k,grid,visited,i);
                    count++;
                }
            }
        }
        result.push_back(count);
        reset(visited);
    }

    int val = *max_element(result.begin(),result.end());

    return val;
}



int main()
{
    int N;
    cin >> N;

    vector<vector<int>> grid(N,vector<int>(N,0));
    vector<vector<bool>> visited(N,vector<bool>(N,false));

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j< N; j++)
        {
            int a;
            cin >> a;
            grid[i][j] = a;
        }
    }

    int result = solution(grid, visited);

    cout << result;

}