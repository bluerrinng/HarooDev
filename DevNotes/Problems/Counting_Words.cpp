#include <iostream>
#include <string>

using namespace std;


int solution(string s)
{
    int length = s.size();
    int answer = 1;

    for(int i = 0; i<length;i++)
    {
        if(s[i] == ' ')
        {
            answer++;
        }

    }

    if(s[0] == ' ')
    {
        answer -=1;
    }
    else if(s[length-1] == ' ')
    {
        answer = answer -1;
    }

    return answer;
}

int main()
{
    string s = "The last Character is a blank ";
    cout << s.size() << endl;

    cout << solution(s);

    return 0;
}