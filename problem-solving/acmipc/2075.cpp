#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int solution(vector<vector<int>>& grid, int N)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(auto& c: grid)
    {
        for(auto& t : c)
        {
            pq.push(t);
            if((int)pq.size() > N)
            {
                pq.pop();
            }
        }
    }

    int result {pq.top()};

    return result;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int>> grid (N, vector<int>(N));
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N ; j++)
        {
            cin >> grid[i][j];
        }
    }

    int result = solution(grid, N);

    cout << result << "\n";

    return 0;
}
