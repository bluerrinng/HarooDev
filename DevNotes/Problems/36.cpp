

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

unordered_map<char, vector<char>> neighbors;
vector<char> result;
unordered_set<char> visited;

void dfs(char node)
{
    visited.insert(node);
    result.push_back(node);

    for(auto ch : neighbors[node])
    {
        if(visited.find(ch) == visited.end())
        {
            dfs(ch);
        }
    }
}

vector<char> solution(vector<pair<char,char>> graph, char start)
{
    for(const auto& v : graph)
    {
        char firstv = v.first;
        char secondv = v.second;

        neighbors[firstv].push_back(secondv);
    }

    dfs(start);
    dfs(start);
    return result;
}