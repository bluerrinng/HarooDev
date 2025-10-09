#include <iostream>
#include <stack>

using namespace std;

int solution(string s)
{
    stack<char> result;

    for(int i = 0; i <s.size();i++)
    {
        if(result.empty() || s[i] != result.top())
        {
             result.push(s[i]);
        }
        else
        {
            result.pop();
        }
    }

    if(!result.empty())
    {
        return 0;
    }
    else
    {
        return 1;
    }

}

int main()
{
    string s = "cdcd";
    cout << solution(s) << endl;

    return 0;
}