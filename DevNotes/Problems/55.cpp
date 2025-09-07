/*
55.cpp
정렬이 완료된 두 배열 합치기

병합정렬 사용해서 정렬해보기
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr1, vector<int> arr2)
{

    vector<int> merged;
    int i = 0;
    int j = 0;
    
    while(i < arr1.size()&& j < arr2.size())
    {
        if(arr1[i] < arr2[j])
        {
            merged.push_back(arr1[i]);
            i++;
        }
        else
        {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while(i < arr1.size())
    {
        merged.push_back(arr1[i]);
        i++;
    }
    while(j< arr2.size())
    {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main()
{
    vector<int> arr1 = {1,3,3,5};
    vector<int> arr2 = {2,4,5};

    vector<int> result = solution(arr1,arr2);

    for(auto& i : result)
    {
        cout << i << endl;
    }

    return 0;
}