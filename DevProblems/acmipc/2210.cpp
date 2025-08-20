#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

unordered_set<string> result;

void dfs(int x, int y, vector<vector<int>> grid)
{
    int cnt = 0; 
    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        for(int j = 0; j<4; j++)
        {
            dfs(nx,ny,grid);
            cnt++;
        }
    }
     
}

int solution(vector<vector<int>> grid)
{
    for(int i = 0; i<5;i++)
    {
        for(int j =0; j<5; j++)
        {
            dfs(i,j,grid);
        }
    }
}