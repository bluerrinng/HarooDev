/* 
문제 2: 배열 제어하기 

정수 배열 lst가 주어지고, 배열의 중복 값을 제거
배열 데이터를 내림차순으로 정렬
해당 배열을 반환하는 solution()을 구하라
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


/*
bool compare(int a, int b)
{
    return a > b;
}


vector<int> solution(vector<int>& lst)
{
    sort(lst.begin(),lst.end(),compare);
    lst.erase(unique(lst.begin(),lst.end()));

    return lst;
}

*/



vector<int> solution(vector<int>& lst)
{
    sort(lst.rbegin(),lst.rend());
    lst.erase(unique(lst.begin(),lst.end()),lst.end());

    return lst;
}

int main()
{
    vector<int> v = {4,2,2,1,3,4};

    solution(v);

    for(auto it = v.begin();it!= v.end();it++)
    {
        cout << (*it) << endl;
    }

    return 0;
}