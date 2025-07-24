#include <iostream>
#include <vector>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

void dfs(int x,int y, vector<vector<int>>& grid, vector<vector<bool>>& visited)
{
    int n = grid.size();
    int m = grid[0].size();

    visited[x][y] = true;

    for(int i = 0; i<4;i++)
    {
        int nx = x+ dx[i];
        int ny = y+ dy[i];

        if(nx >= 0 && nx<n && ny>=0 && ny<m)
    {
        if(grid[nx][ny] == 1 && !visited[nx][ny])
        {
            dfs(nx,ny,grid,visited);
        }
    }
    }

}

int solution(vector<vector<int>> grid)
{
    int answer = 0 ;
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> visited(n, vector<bool>(m,false));

    for(int i = 0; i<n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            if(grid[i][j] == 1 && !visited[i][j])
            {
                dfs(i,j,grid,visited);
                answer++;
            }
        }
    }

    return answer;
}

int main() {
    vector<vector<int>> grid = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 0, 1}
    };

    cout << solution(grid) << endl; 
    return 0;
}