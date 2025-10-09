#include <iostream>
#include <vector>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};


void dfs(int x, int y, vector<vector<int>> grid, vector<vector<bool>>& visited)
{
    visited[x][y] = true;

    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < grid.size() && ny <= grid[nx].size() && ny >= 0)
        {
            if(!visited[nx][ny] && grid[nx][ny] == 1)
            {
                dfs(nx,ny, grid, visited);
            }
        }
    }
}

void reset(vector<vector<bool>>& visited)
{
    for(int i = 0; i< visited.size();i++)
    {

        for(int j = 0 ; j< visited[i].size();j++)
        {
            visited[i][j] = false;
        }
    }
}

int main()
{
    int testCase;

    //Getting TestCase Input
    cin >> testCase; 

    int column, row;
    int pairNum;


    vector<int> result; 

    //Iterating Over TestCase Input
    for(int i = 0; i < testCase; i++)
    {
        int value = 0;
        cin >> column >> row >> pairNum; 

        vector<vector<int>> grid(column,vector<int>(row,0));
        vector<vector<bool>> visited(column,vector<bool>(row,false));

        for(int i = 0; i < pairNum; i++)
        {
            int num1, num2;
            cin >> num1 >> num2;

            grid[num1][num2] = 1;
        }

        for(int i = 0; i< grid.size();i++)
        {
            for(int j = 0 ; j<grid[i].size();j++)
            {
                if(!visited[i][j] && grid[i][j] == 1)
                {
                    dfs(i,j,grid,visited);
                    value++;
                }
            }
        }

        result.push_back(value);
        reset(visited);
    }

    for(auto v : result)
    {
        cout << v << endl;
    }

    return 0;
}