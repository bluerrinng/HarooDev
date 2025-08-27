#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int findMax(vector<vector<int>> grid)
{
    int max = 0;

    for(int i = 0; i < grid.size();i++)
    {
        
    }
}

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> grid(N,vector<int>(N,0));

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j< N; j++)
        {
            int a;
            cin >> a;
            grid[i][j] = a;
        }
    }


}