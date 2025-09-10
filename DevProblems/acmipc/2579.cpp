#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int stairnum;
    cin >> stairnum;

    vector<int> stairs (stairnum);
    vector<int> result (stairnum);

    for(int i = 0;  i< stairnum; i++)
    {
        cin >> stairs[i];
    }

    result[0] = stairs[0];

    if( stairnum >=1 )
    {

        result[1] = stairs[0] + stairs[1];
    }

    if(stairnum >= 2)
    {
        result[2] = max(stairs[0]+stairs[2], stairs[1]+stairs[2]);
    }

    for(int i = 3; i < n ;i++)
    {
        result[i] = max(result[i-2] + stairs[i], result[i-3] + stairs[i-1] + stairs[i]);
    }

    cout << result[stairnum];

    

}