/*
5.cpp
2차원 배열 arr1 과 arr2를 입력받아 행렬 곱한 결과를 반환하는 solution
*/
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> result (arr1.size(),vector<int>(arr2[0].size(),0));

    for(int i = 0; i < arr1.size(); i++)
    {
        for(int j = 0; j< arr2[0].size();j++)
        {
            for(int k = 0; k< arr2.size();k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> arr1 = {{1,2},{3,4},{5,6}};
    vector<vector<int>> arr2 = {{7,8},{9,10}};

    auto result = solution(arr1,arr2);

    for(int i = 0; i< result.size();i++)
    {
        for(int j = 0; j<result[0].size();j++)
        {
            cout << result[i][j] << endl;
        }
    }

    return 0;
}



