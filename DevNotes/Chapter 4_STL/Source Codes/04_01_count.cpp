/*
04_01_count.cpp
count()는 컨테이너 내에서 특정 값이 몇번 나왔는지 셀때 사용된다
3개의 인수를 받음
1. 시작 반복자
2. 끝 반복자
3. 횟수를 찾고자하는 원소 

이 3 인수를 통해서 횟수를 반환한다
시간 복잡도는 O(N)
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1,2,4,5,6,3,2,5,7,1};

    int ret = count(v.begin(),v.end(),5);

    cout << ret << endl;

    return 0;

}
