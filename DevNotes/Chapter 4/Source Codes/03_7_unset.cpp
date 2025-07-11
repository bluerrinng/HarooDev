/*03_7_unordered_set.cpp
unordered_set은 기존의 set처럼 사용이 가능하다, 차이점이라면 기존의 set은 이진 탐색 구조를 띄고 자동으로 정렬을 유지한다. 
이로 인해 성능 저하가 나올 수 있다. 
unordered_set은 해시 구조를 띄어서 정렬을 하지 않고 더 빠르게 탐색 및 삽입/삭제가 가능하다 -> O(1)
*/

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> myset;

    int num;

    /*
    while(1)
    {
        cin >> num;
        
        
        if(cin.eof()) break;
        else
        {
            myset.insert(num);
        }
            
    }
    */

    myset.insert(4);
    myset.insert(5);
    myset.insert(6);
    myset.insert(7);

    for (auto it = myset.begin();it!= myset.end();it++)
    {
        cout << *it << endl;
    }

    return 0;
}