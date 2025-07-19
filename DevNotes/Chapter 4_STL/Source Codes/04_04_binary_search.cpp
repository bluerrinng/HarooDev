/*
04_04_binary_search.cpp

- 이진 탐색을 하기 위해서는 정렬되어 있어야 한다
- 시간 복잡도 : O(logN)
- 인수 : 시작 반복자, 끝 반복자, 찾을 값 
- 찾는 값이 있으면 true, 없으면 false
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {2,4,5,7,1,3,5,9};

    sort(v.begin(),v.end());
    cout << binary_search(v.begin(),v.end(),3) << endl;
    cout << binary_search(v.begin(),v.end(),12) << endl;
    
    return 0;
}