#include <iostream>
#include <vector>

using namespace std;

vector<int> score = {0,0};

int main()
{
    int num;
    int team;

    cin >> num;
    for (int i = 0; i<num;i++)
    {
        cin >> team;

        if (team == 1)
        {
            score[0]++;
        }
        else
        {
            score[1]++;
        }
    }

    if(score[0] > score[1])
    {
        cout << "1" << endl;
    }

    else if(score[0] == score[1])
    {
        cout << "0" << endl;
    }

    else
    {
        cout << "2" << endl;
    }

    return 0;
}