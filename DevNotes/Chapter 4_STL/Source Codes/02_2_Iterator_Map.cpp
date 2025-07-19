//Forward Iterator를 사용하여 Map의 요소를 순회하고 접근한다
//Find Method를 활용하여 찾고자 하는 요소를 찾는다
//std::map = {key, value}로 저장하고, key를 항상 오름차순으로 정렬

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string,int> mymap = {{"Apple",1}, {"Mango",2},{"Kiwi",3}};

int main()
{
    for(map<string,int>::iterator it = mymap.begin(); it != mymap.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }

    map<string,int>::iterator result = mymap.find("Kiwi");                  //매우 중요한 부분 -> find vs map::find() 
    if(result != mymap.end())
    {
        cout << "Target Value Found!\n";
        cout << (*result).first;
    }
    else
    {
        cout << "Target Value Missing!\n";
    }

    return 0;
}
