#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct MinHeapComparator{
    bool operator()(const int&a , const int& b)
    {
        return a > b;
    }
};

int addQueue(vector<int> v1, int repeat)
{
    priority_queue<int, vector<int>, MinHeapComparator> minHeap;
    long long result = 0; 

    for(auto &c : v1)
    {
        minHeap.push(c);
    }

    for(int i = 0; i < repeat; i++)
    {
        int num1  = minHeap.top();
        minHeap.pop();
        int num2 = minHeap.top();
        minHeap.pop();

        int sum = num1+ num2;
        minHeap.push(sum);

        minHeap.push(sum);

    }

    while(!minHeap.empty())
        {
            result += minHeap.top();
            minHeap.pop();
        }

    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    int repeat;
    cin >> repeat;

    vector<int> arr;
    for(int i = 0; i < num ; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    long long  result = addQueue(arr,repeat);

    cout << result;

    return 0;
}