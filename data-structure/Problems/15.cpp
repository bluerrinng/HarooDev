#include <iostream>
#include <queue>

using namespace std;

int solution (int n, int k)
{
    queue<int> josephus;

    int result = 0;

    for(int i = 1; i <= n ; i++)
    {
        josephus.push(i);
    }

    while(!josephus.empty())
    {
        for(int i = 0; i< k-1 ; i++)
        {
            josephus.push(josephus.front());
            josephus.pop();
        }

        result = josephus.front();
        josephus.pop();
    }

    return result;
}

int main()
{
    int n = 5;
    int k = 2;

    int result = solution(n,k);

    cout << result;

    return 0;
}