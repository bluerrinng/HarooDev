#include <iostream>
#include <vector>

using namespace std;


int dx[8] = {0,1,0,-1,1,1,-1,-1};
int dy[8] = {1,0,-1,0,1,-1,-1,1};

void dfs(int x, int y, vector<vector<int>> grid, vector<vector<bool>>& visited)
{
    visited[x][y] = true;

    for(int i = 0; i< 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx< grid.size() && ny >= 0 && ny <grid[nx].size())
        {
            if(!visited[nx][ny] && grid[nx][ny] == 1)
            {
                dfs(nx,ny,grid, visited);
            }
        }
    }
}

int solution(vector<vector<int>> grid, vector<vector<bool>>& visited)
{

    int val = 0; 
    for(int i = 0; i< grid.size();i++)
    {
        for(int j= 0; j< grid[i].size();j++)
        {
            if(!visited[i][j] && grid[i][j] == 1)
            {
                dfs(i,j,grid,visited);
                val++;
            }
        }
    }

    cout << val << endl;

    return 0;
}

void reset(vector<vector<bool>>& visited)
{
    for(int i = 0; i< visited.size();i++)
    {
        for(int j = 0; j< visited[i].size();j++)
        {
            visited[i][j] = false;
        }
    }
}

int main()
{
    int width;          //This is the column
    int height;         //This is the Row

    while(true)
    {
        cin >> width >> height;

        if(width == 0 && height == 0)
        {
            break;
        }
        else
        {
            vector<vector<bool>> visited(height, vector<bool>(width, false));

            vector<vector<int>> grid(height, vector<int> (width, 0));

            for(int i = 0; i< height; i++)
            {
                for(int j = 0; j < width; j++)
                {
                    int a; 
                    cin >> a;
                    grid[i][j] = a;
                }
            }

            solution(grid,visited);
            reset(visited);
        }
    
    }

}

