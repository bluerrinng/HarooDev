/*
2667
*/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> visited;
vector<int> temp;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

void dfs(int x, int y,vector<vector<int>> grid)
{
    visited[x][y] = true;

    for(int i = 0; i< 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(grid[nx][ny] == 1 && !visited[nx][ny])
        {
            dfs(nx,ny,grid);
        }
    }    
}

vector<int> solution(int t,vector<vector<int>> grid,vector<vector<bool>>& visited)
{
    temp = {t,0};
    for(int i = 0;i<t;i++)
    {
        for(int j = 0;j<t;j++)
        {
            if(grid[i][j] == 1 && !visited[i][j])
            {
                dfs(i,j,grid);
                temp[i]++;
            }
        }
    }
    sort(temp.begin(),temp.end());
    return temp;
}

int main()
{
    int num, count;
    cin >> num;

    vector<vector<int>> grid;

    visited = vector<vector<bool>>(num, vector<bool>(num,false));

    for(int i = 0 ; i< num ; i++)
    {
        for(int j = 0; j < num ; j++)
        {
            int input;
            cin >> input;
            grid[i][j] = input;
        }
    }


    solution(num,grid,visited);

    for(int i = 0; i< temp.size();i++)
    {
        if(temp[i] != 0)
        {
            count++;
        }
    }

}