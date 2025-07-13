/*
04_06_next_permutation.cpp
next_permutation()를 통해서 모든 순열을 출력한다 
내림차순으로 정렬된 순열을 마지막 값으로 인식
오름차순으로 정렬 후 사용 
bool 형식이기에 true, false 반환 
시간 복잡도: O(N*N!)
*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1,3,4,5};

    do
    {
        for(int i : v)
        {
            cout << i;
        }
        cout << endl;
    }while(next_permutation(v.begin(),v.end()));

    return 0;
}
