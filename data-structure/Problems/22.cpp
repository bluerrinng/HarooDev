#include <iostream>
#include <vector>

using namespace std;

bool solution(vector<string> phoneBook)
{
    sort(phoneBook.begin(),phoneBook.end());

    for(int i = 1; i<phoneBook.size();i++)
    {
        if(phoneBook[i].substr(0,phoneBook[i-1].size()) == phoneBook[i-1])
        {
            return false;
        }
    }
    return true;
}