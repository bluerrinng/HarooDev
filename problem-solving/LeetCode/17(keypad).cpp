#include <iostream>
#include <vector>

using namespace std;


string backtracking(string input, vector<vector<string>>& v1)
{
    vector<int> a;
    for(char c : input)
    {
        a.push_back(c - '0');
    }

    for(int num : a)
    {
        
    }
}

vector<string> letterCombinations(string digits)
{
    vector<vector<string>> keys = {
    {"a","b","c"}, // 0
    {"d","e","f"}, // 1
    {"g","h","i"}, // 2
    {"j","k","l"}, // 3
    {"m","n","o"}, // 4
    {"p","q","r","s"}, // 5
    {"t","u","v"}, // 6
    {"w","x","y","z"} // 7
    };


}

