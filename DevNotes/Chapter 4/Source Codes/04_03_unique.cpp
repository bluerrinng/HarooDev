/*
04_03_unique.cpp

algorithm 헤더에 존재하는 unique() 함수를 사용하여 중복되는 값을 정리할 수 있다 
시간 복잡도: O(N)
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {2,3,5,6,5,4,2,1,4};

    sort(v.begin(),v.end());

    //unique() function
    auto newEnd = unique(v.begin(),v.end());

    for(auto it = v.begin(); it!= newEnd; ++it)
    {
        cout << (*it) << endl;
    }

    return 0;
}