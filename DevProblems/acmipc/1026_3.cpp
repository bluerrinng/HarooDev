#include <iostream>
#include <queue>

using namespace std;

queue<int> st;

void bfs(int start, vector<vector<int>> neighbors, vector<bool>& visited)
{
    visited[start] = true;
    st.push(start);

    while(!st.empty())
    {

        int x = st.front();

        cout << x << endl;
        
        st.pop();


        for(int i = 0; i < neighbors[x].size(); i++)
        {
            if(!visited[neighbors[x][i]])
            {
                visited[neighbors[x][i]] = true;
                st.push(neighbors[x][i]);
            }
        }

    }

}

int main()
{
    int num, totalnum, startnode;

    int firstnum, secondnum;

    cin >> num >> totalnum >> startnode;

    vector<bool> visited (num+1, false);
    vector<vector<int>> neighbors (num+1);

    for(int i =0 ; i<totalnum;i++)
    {
        cin >> firstnum >> secondnum;

        neighbors[firstnum].push_back(secondnum);
    }

    bfs(startnode,neighbors,visited);

    return 0;
}

