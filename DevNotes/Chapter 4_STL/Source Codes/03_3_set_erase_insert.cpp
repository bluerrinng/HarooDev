#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s1 = {3,4,5,6,9};

    s1.insert(7);

    s1.erase(4);

    //set에서는 find(값)을 통해서 원소의 위치를 바로 확인할 수 있다. 
}
