#include <iostream>
#include <string>

using namespace std;

void combination(string word, string initial, int length)
{
    if(initial.size() == length)
    {
        cout << initial << endl;
    }
    else
    {
        for(int i = 0; i< word.size();i++)
        {
            combination(word.substr(i+1), initial+word[i],length);
        }
    }
}

int main()
{
    string test = "abcdef";
    combination(test, "", 2);

    return 0;
}