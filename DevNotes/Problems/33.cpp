/*
33.cpp
간단한 유니온-파인드 알고리즘 구현하기


경로 압축과 랭크 기반 합치기를 활용해서 유니온-파인드 알고리즘을 구현

각 상호배타적 집합을 합치고, 루트 노드를 찾은 뒤, 집합의 개수를 구하는 문제
초기에는 모든 노드가 스스로를 루트 노드로 생각, 즉 배열의 index = value

집합을 합치는 유니온 연산을 할 때는 루트 노드 값을 기준으로 큰 쪽을 작은 쪽으로 붙이면 된다. 
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> parents;
vector<int> rankData;

int charToInt(char c)
{
    return c - '0';
}


//루트 노드를 찾는 함수 
int find(int x)
{
    if(parents[x] == x)
    {
        return x;
    }

    parents[x] = find(parents[x]);

    return parents[x];
}

//유니온 함수
void unionSet(int x, int y)
{
    int root1 = find(x);
    int root2 = find(y);

    if(root1 != root2)
    {
        if(rankData[root1] < rankData[root2])
        {
            parents[root1] = root2;
        }
        else if(rankData[root1] > rankData[root2])
        {
            parents[root2] = root1;
        } 
        else
        {
            parents[root2] = root1;
            rankData[root1]++;
        }
    }
}

vector<bool> solution(int k, vector<vector<char>> operations)
{
    parents.resize(k);
    rankData.resize(k,0);

    for(int i = 0; i<k; i++)
    {
        parents[i] = i;
    }

    vector<bool> results;

    for(const auto& op: operations)
    {
        if(op[0] == 'u')
        {
            int x = charToInt(op[1]);
            int y = charToInt(op[2]);
            unionSet(x,y);
        }
        else if(op[1] == 'f')
        {
            int x = charToInt(op[1]);
            int y = charToInt(op[2]);
            results.push_back(find(x) == find(y));
        }
    }

    return results;

}