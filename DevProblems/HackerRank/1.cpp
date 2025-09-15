#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*
 * Complete the 'commonChild' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int commonChild(string s1, string s2) {
    vector<char> v1;
    vector<char> v2;
    
    int count = 0; 
    
    for(auto& c : s1)
    {
        v1.push_back(c);
    }
    
    for(auto& c: s2)
    {
        v2.push_back(c);
    }
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    

    for(auto&c : v1)
    {
        cout << c << endl;
    }
    for(int i = 0 ; i < min((int)v1.size(),(int)v2.size());i++)
    {
        if(v1[i] == v2[i])
        {
            count++;
        }
    }
    
    return count;
    
    
}

int main()
{
    
    string s1 = "HARRY";

    string s2 = "SALLY";

    int result = commonChild(s1, s2);

    cout << result << "\n";

    return 0;
}
