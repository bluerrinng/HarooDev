/*
26.cpp

신고 결과 받기

*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{

    vector<int> result; 

    unordered_map<string,int> report_count;
    unordered_map<string, vector<pair<string,int>>> paircount;

    unordered_set<string> ureport (report.begin(),report.end());

    for(auto& line : ureport)
    {
        stringstream ss(line);
        string name1, name2;
        ss >> name1 >> name2;

        report_count[name2]++;
    }

    for(auto& line : ureport)
    {
        stringstream ss(line);
        string name1, name2;
        ss >> name1 >> name2;

        paircount[name1].push_back({name2,report_count[name2]});
    }


    for(int i = 0; i < id_list.size();i++)
    {
        int count = 0; 
        string name = id_list[i];

        for(auto& val : paircount[name])
        {
            if(val.second >= k)
            {
                count++;
            }
        }
        result.push_back(count);
        
    }

    return result;

}

int main() {
    vector<string> id_list1 = {"muzi", "frodo", "apeach", "neo"};
    vector<string> report1 = {
        "muzi frodo", "apeach frodo",
        "frodo neo",  "muzi neo",
        "apeach muzi"
    };
    int k1 = 2;

    vector<int> result = solution(id_list1,report1, k1);

    for(auto& c : result)
    {
        cout << c << endl;
    }

    return 0;
}