/*
01_stack.cpp
stack에 대한 기본 코드를 담고 있으며
앞서 말한 5가지의 ADT를 보여줌
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    //스택 선언
    stack<int> st;

    //스택에 원소 추가 
    st.push(10);
    st.push(20);
    st.push(30);

    //스택이 빌때까지 위에 있던 원소 출력
    while(!st.empty())
    {
        //가장 위에 있는 int 반환
        cout << st.top()<< endl;

        //해당 원소를 뺀다 스택에서
        st.pop();
    }

    return 0;
}