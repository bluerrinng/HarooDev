#include <iostream>

using namespace std;


int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

void dfs(int x, int y, vector<vector<int>> grid)
{
    
}

int main()
{
    int m,n,k;
    cin >> m >> n >> k;

    vector<vector<int>> grid(m,vector<int>(n,0));
    vector<vector<bool>> visited(m,vector<bool>(n,false));

    for(int i = 0; i < k; i++)
    {
        int a,b,c,d;

        cin >> a >> b >> c >> d; 

        for(int j = a; j< c; j++)
        {
            for(int k = b; k < d; k++)
            {
                grid[j][k] == 1;
            }
        }
    }




}