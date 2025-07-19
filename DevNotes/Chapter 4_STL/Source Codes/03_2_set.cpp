#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s1 = {3,4,5,6,2,4};
    int targets[2] = {3,7};

    for(int target : targets)
    {
        set<int>::iterator result = s1.find(target);                    //s의 멤버 함수 -> Olog(N)
        
        if(result != s1.end())
        {
            cout << "Target Found! : " << (*result) << endl;
        }
        else
        {
            cout << "Target Missing!" << endl;
        }
    }

    return 0;
}