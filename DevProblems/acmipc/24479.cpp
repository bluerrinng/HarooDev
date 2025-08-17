#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int cnt = 1;

void dfs(int start, vector<vector<int>>& neighbors, vector<bool>& visited,vector<int>& result)
{
    visited[start] = true;
    result[start] = cnt++;

    for(auto c : neighbors[start])
    {
        if(!visited[c])
        {
            dfs(c,neighbors,visited,result);
        }
    }

}


void dfs(int start, vector<vector<int>>& neighbors, vector<bool>& visited,vector<int>& result)
{
    visited[start] = true;
    result[start] = cnt++;

    for(auto c : neighbors[start])
    {
        if(!visited[c])
        {
            dfs(c,neighbors,visited,result);
        }
    }

}

int main()
{
    int a,b,c;

    cin >> a >> b >> c;
    
    vector<vector<int>> neighbors(a+1);
    vector<bool> visited(a+1,false);
    vector<int> result(a+1,0);

    for(int i =0 ;i < b; i++)
    {
        int num1, num2;

        cin >> num1 >> num2;

        neighbors[num1].push_back(num2);
        neighbors[num2].push_back(num1);
    }

    

     for (int i = 1; i <= a; i++) {
        sort(neighbors[i].begin(), neighbors[i].end());
    }

    

    for(int i = 1; i<result.size();i++)
    {
        cout << result[i];
        cout << "\n";
    }

    return 0;
}