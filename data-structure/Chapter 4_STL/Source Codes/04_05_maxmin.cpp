/*
04_05_maxmin.cpp

max_element(), min_element() 함수를 통해서 컨테이너 내의 최댓값, 최솟값의 위치를 반환하다
인수 : 시작 반복자, 끝 반복자 
시간 복잡도 : O(N)

*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1,3,5,2,7,9,1,8,6};

    auto max_it = max_element(v.begin(),v.end());
    auto min_it = min_element(v.begin(),v.end());

    cout << (*max_it) << endl;
    cout << (*min_it) << endl;

    return 0;
}