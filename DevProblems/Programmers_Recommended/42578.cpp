#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
    int answer = 0; 
    int val = 1;
    unordered_map<string, int> clothesCount;
    for(int i = 0; i< clothes.size();i++)
    {
        clothesCount[clothes[i][1]]++;
    }

    if(clothesCount.size() == 1)
    {
        for(pair<string,int> elem: clothesCount)
        {
            return elem.second;
        }
    }
    else
    {
        for(pair<string,int> elem: clothesCount)
        {
            int num1 = elem.second + 1;
            val *= num1;
        }
        answer += val -1 ;
    }

    return answer;
       
}
