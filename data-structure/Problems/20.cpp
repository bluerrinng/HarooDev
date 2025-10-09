/*
20.cpp

완주하지 못한 선수
선수들의 이름이 담긴 배열 두 개가 주어진다. 
하나는 완주한 선수들의 명단, 하나는 참여자 명단
딱 한사람이 완주를 못했다고 했을때, 그 사람이 누군지 판별하는 solution
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string ppl; 
    unordered_map<string, int> result;
    for(int i = 0; i<participant.size();i++)
    {
        result[participant[i]]++;
    }
    for(int i = 0; i<completion.size();i++)
    {
        result[completion[i]]--;
    }

    for(int i = 0; i<participant.size();i++)
    {
        if(result[participant[i]] != 0)
        {
            ppl = participant[i];
        }
    }

    return ppl;
}

int main()
{
    vector<string> completion = {"ana", "James", "ana", "James", "Charles"};
    vector<string> participant ={"Charles", "James", "Rick", "ana", "James", "ana"};

    cout << solution(participant,completion);

    return 0;
}
