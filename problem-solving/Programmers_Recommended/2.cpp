/*
2.cpp
배열 뒤집기
정수가 있는 배열이 매개변수로 주어질때, 원소의 순서를 거꾸로 뒤집는 배열
을 return 하는 solution
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list)
{
    vector<int>result (num_list.rbegin(),num_list.rend());

    return result;
}

int main()
{
    vector<int> num_list = {1,2,3,4,5};

    vector<int> result = solution(num_list);

    for (const auto& num: result)
    {
        cout << num << endl;
    }

    return 0;
}