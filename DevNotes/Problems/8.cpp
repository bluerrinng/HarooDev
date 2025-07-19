/*
8.cpp 괄호맞추기 

*/

#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool result = true;
    stack<char> st;
    for(auto c : s)
    {
       if (c == '(')
       {
            st.push(c);
       }
       else
       {
            if(st.empty())
            {
                result = false;
                break;
            }
            else
            {
                st.pop();
            }
       }


    }

    if(!st.empty())
    {
        result = false;
    }

    return result;

}
