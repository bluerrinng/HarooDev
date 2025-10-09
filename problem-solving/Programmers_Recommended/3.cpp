/*
3.cpp
n^2 배열 자르기
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right)
{
    vector<vector<int>> grid(n+1);
    vector<int> result (n*n,0);

    vector<int> final;


    for(int i = 1; i<n+1;i++)
    {
        for(int j = 1; j<n+1;j++)
        {
            grid[i].push_back(max(i,j));
        }
    }

    int idx = 0;

    for(int i = 1; i<=n ;i++)
    {
        for(int j = 0; j<n;j++)
        {
            result[idx++] = grid[i][j];
        }
    }

    for(int i = left ; i<= right; i++)
    {
        final.push_back(result[i]);
    }

    return final;
}


int main()
{
    int n = 3;
    int left =2;
    int right = 5;

    vector<int> result = solution(n,left,right);

    for(const auto& num : result)
    {
        cout << num << endl;
    }

    return 0;
}