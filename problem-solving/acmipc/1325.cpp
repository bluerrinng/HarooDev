#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


void dfs(int start,vector<vector<int>>& neighbors, vector<bool>& visited, int& cnt)
{
    visited[start] = true;
    cnt++;

    for(auto& val : neighbors[start])
    {
        if(!visited[val])
        {
            dfs(val, neighbors, visited, cnt);
        }
    }
}

vector<int> solution(vector<vector<int>>& neighbors, int N)
{
    vector<int> result;

    for(int i = 1; i< N +1 ; i++)
    {
        vector<bool> visited(N+1, false);
        int cnt = 0;

        dfs(i,neighbors,visited,cnt);
        result.push_back(cnt);
    }

    return result;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> neighbors(N+1);

    for(int i =0; i< M ; i++)
    {
        int a,b;

        cin >> a >> b;

        neighbors[b].push_back(a);
    }

    vector<int> result = solution(neighbors,N);
    vector<int> answer;

    int maxVal = *max_element(result.begin(), result.end());

    for(int i = 0; i < result.size();i++)
    {
        if(result[i] == maxVal)
        {
            answer.push_back(i+1);
        }
    }

    for(vector<int>::iterator it = answer.begin();it!= answer.end();it++)
    {
        if(it == answer.end()-1)
        {
            cout<< *it;
        }
        else
        {
            cout << *it << " ";
        }
    }


    return 0;
}