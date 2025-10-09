/*
38.cpp
다익스트라 알고리즘

*/
#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;


const int INF = numeric_limits<int>::max();
const int MAX_NODES = 100;
int graph[MAX_NODES][MAX_NODES];
bool visited[MAX_NODES];

vector<int> solution(int start, int numNodes, vector<tuple<int,int,int>> edges)
{
    for(int i = 0; i<MAX_NODES;i++)
    {
        //fill_n은 3가지 인수를 받는다 : (시작 위치, 개수, 채우고자 하는 값)
        //따라서 graph[i]를 넣을 경우 해당 행 전체를 가르키는거다 (포인터)

        fill_n(graph[i],MAX_NODES, INF);
        visited[i] = false;
    }

    for(const auto& [from,to,weight] : edges)
    {
        graph[from][to] = weight;
    }

    vector<int> distances(numNodes, INF);

    distances[start] = 0;

    for(int i = 0; i < numNodes - 1 ; i++)
    {
        int minDistance = INF;
        int closestNode = -1;

        for(int j = 0; j < numNodes ; j++)
        {
            if(!visited[j] && distances[j] < minDistance)
            {
                minDistance = distances[j];
                closestNode = j;
            }
        }

        visited[closestNode] = true;

        for(int j = 0; j < numNodes ; j++)
        {
            int newDistance = distances[closestNode] + graph[closestNode][j];
            if(!visited[j] && graph[closestNode][j] != INF && newDistance < distances[j])
            {
                distances[j] = newDistance;
            }
        }
        
    }

    return distances;

}
