#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

queue<pair<int,int>> q;

int dfs(int x, int y, vector<vector<int>>& grid, vector<vector<bool>>& visited)
{
    visited[x][y] = true;
    int cnt = 1;

    for(int i = 0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < grid.size() && ny >=0 && ny < grid.size())
        {
            if(!visited[nx][ny] && grid[nx][ny] == 1)
            {
                cnt += dfs(nx,ny, grid, visited);
            }
        }
    }
    return cnt;
}

int bfs(int x, int y, vector<vector<int>> grid, vector<vector<bool>>& visited)
{
    visited[x][y] = true;

    q.push(pair(x,y));
    int cnt = 1;

    

    while(!q.empty())
    {
        int tx = q.front().first;
        int ty = q.front().second;

        q.pop();

        for(int i = 0;  i< 4 ;i++)
        {
            int nx  = tx + dx[i];
            int ny = ty + dy[i];

            if(nx >=0 && nx < grid.size() && ny >= 0 && ny < grid.size())
            {
                if(!visited[nx][ny] && grid[nx][ny] == 1)
                {
                    visited[nx][ny] = true;
                    q.push(pair(nx,ny));
                    cnt++;
                }
            }
        }
    }

    return cnt;
}


int solution(vector<vector<int>>& grid, vector<vector<bool>>& visited)
{
    int count = 0; 
    vector<int> sizes;
    for(int i = 0; i < grid.size();i++)
    {
        for(int j = 0; j< grid.size();j++)
        {
            if(!visited[i][j] && grid[i][j] == 1)
            {
                count++;
                sizes.push_back(dfs(i,j,grid,visited));
            }
        }
    }

    sort(sizes.begin(),sizes.end());
    cout << count << "\n";      // 섬 개수
    for(int s : sizes)
    {
        cout << s << "\n";      // 각 섬 크기
    }


    return count;
}


int main()
{
    int num;
    cin >> num;

    string input;

    vector<vector<int>> grid (num,vector<int>(num));

    vector<vector<bool>> visited (num, vector<bool> (num,false));

    for(int i = 0; i < num; i++)
    {
        cin >> input;

        for(int j = 0; j < input.size() ; j++)
        {
            grid[i][j] = ((input[j])-'0');
        }
    }

    int result = solution(grid,visited);

    return 0;

}