/*
24.cpp : KaKaoTalk Open Chatting System
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record)
{
    vector<string> answer;
    unordered_map<string, string> uidmap;


    for(const auto& line : record)
    {
        stringstream ss(line);
        string cmd, uid, nickname;
        ss >> cmd >> uid;

        if(cmd != "Leave")
        {
            ss >> nickname;
            uidmap[uid] = nickname;
        }
    }

    for(const auto& line : record)
    {
        stringstream ss(line);
        string cmd, uid, nickname;

        ss >> cmd >> uid >> nickname;

        if(cmd == "Enter")
        {
            answer.push_back(uidmap[uid] + "님이 들어왔습니다.");
        }
        else if(cmd == "Leave")
        {
            answer.push_back(uidmap[uid]+ "님이 나갔습니다.");
        }
    }
    

    return answer;
}