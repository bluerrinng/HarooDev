/*
04_sort.cpp
sort는 인자를 2개 받거나, 3개를 받아서 시작 반복자, 끝 반복자의 범위에서 오름차순으로 정렬한다. 
여기서는 먼저 인자를 2개 받을때의 sort()를 확인
오름차순으로 정렬할때는 정방향 반복자
내림차순으로 정렬할때는 역방향 반복자를 사용
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {17,5,3,4,11,8};

    sort(v.rbegin(),v.rend());

    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }

    return 0;
}