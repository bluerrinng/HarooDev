#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    map<string, double> studentGrade =
    {
        {"Emma", 4.5},
        {"Anna", 3.75},
        {"Jackson", 2.4}
    };

    /*
    for(auto val = studentGrade.begin(); val != studentGrade.end(); val++)
    {
        cout << (*val).first << endl;
    }
        */

    for(auto val : studentGrade)
    {
        cout << val.first << endl;
    }
    
    //둘이 같은 것 같다.

    for(pair<string,double> result : studentGrade)
    {
        cout << result.first << endl;
    }

    return 0;
}