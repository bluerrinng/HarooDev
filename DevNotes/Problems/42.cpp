#include <string>
#include <vector>

using namespace std;

vector<bool> visited;

void dfs(vector<vector<int>> computers, int node)
{
    visited[node] = true;

    for(int i = 0; i<computers.size();i++)
    {
        if(computers[node][i] == 1 && !visited[i])
        {
            dfs(computers,i);
        }
    }
}

int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;
    visited = vector<bool>(computers.size(),false);
    
    for(int i = 0; i <computers.size();i++)
    {
        if(!visited[i])
        {
            dfs(computers,i);
            answer++;
        }
    }

    return answer;
}