// Forward Iterator를 사용하여 배열이나 컨테이너 안에 있는 원소들을 순회하거나 접근한다 
// 또한 Find 메서드를 활용하여 배열이나 컨테이너 안에 목표로 찾고자 하는 값이 있는지도 확인한다

#include <iostream>
#include <vector>
#include <algorithm>                //to use Find method

using namespace std;

vector<int> v = {1,2,3,4,5};

int main()
{
    for(auto it = v.begin(); it != v.end();it++)
    {
        cout << (*it) << endl;
    }

    auto result = find(v.begin(), v.end(), 30);

    if (result != v.end())
    {
        cout << "Target Value Found ! \n"; 
        cout << (*result);
    }
    else
    {
        cout << "Target Value Missing!\n";
    }

    return 0;
}