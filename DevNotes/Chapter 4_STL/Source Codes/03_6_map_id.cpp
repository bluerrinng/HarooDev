/*03_6_map_id.cpp 
map의 삽입과 삭제
 - insert()를 활용
 - erase()를 활용
*/

#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    map<string, double> studentScore =
    {
        {"Emma" ,82.5},
        {"Zack", 77.5},
        {"Anna", 55.5}
    };

    studentScore.insert({"Michael",90.5});
    studentScore.insert(make_pair("Ron",54.5));
    

    map<string,double> studentScore2;

    cout << "From here it is the original studentScore" << endl;

    for(auto it = studentScore.begin(); it != studentScore.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        studentScore2.insert(make_pair(it->first,it->second));
    }

    cout << "From here it is copy of Student Score" << endl;

    //Erase can get the value or the iterator of the value
    studentScore2.erase("Emma");
    
    auto val = studentScore2.find("Ron");
    if(val != studentScore2.end())
    {
        studentScore2.erase(val);
    }

    for(auto it2 = studentScore2.begin(); it2!= studentScore2.end();it2++)
    {
        cout << (*it2).first << " " << (*it2).second << endl;
    }

    return 0;
}
