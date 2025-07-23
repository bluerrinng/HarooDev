/*
36.cpp
깊이 우선 탐색 순회(DFS)
*/

#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

unordered_map<char, vector<char>> adjList;
vector<char> result;
unordered_set<char> visited;

void dfs(char node)
{
    visited.insert(node);
    result.push_back(node);

    for(char neighbor: adjList[node])
    {
        if(visited.find(neighbor) == visited.end())
        {
            dfs(neighbor);
        }
    }
}
