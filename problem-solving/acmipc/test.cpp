#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    string input;

    vector<vector<int>> grid (num,vector<int>(num));

    for(int i = 0; i < num; i++)
    {
        cin >> input;

        for(int j = 0; j < input.size() ; j++)
        {
            grid[i].push_back((input[j])-'0');
        }
    }

    for(auto val : grid[0])
    {
        cout << val << endl;
    }

    return 0;

}