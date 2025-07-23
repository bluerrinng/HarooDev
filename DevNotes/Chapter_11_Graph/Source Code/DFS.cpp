#include <vector>
#include <iostream>

using namespace std;

bool visited[5];
vector<int> neighbors[5];
vector<int> result;

void dfs(int initial)
{

    visited[initial] = true;
    result.push_back(initial);
    for(auto c: neighbors[initial])
    {
        if(!visited[c])
        {
            dfs(c);
        }
    }
}

int main()
{
    neighbors[0] = {1,2};
    neighbors[1] = {3};
    neighbors[3] = {4};

    dfs(0);

    for (auto t : result)
    {
        cout << t << endl;
    }

    return 0;
}