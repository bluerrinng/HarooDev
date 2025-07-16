/*
5.cpp
2차원 배열 arr1 과 arr2를 입력받아 행렬 곱한 결과를 반환하는 solution
*/
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> result;
    for(int i = 0; i < arr1.size();i++)
    {
        for(int j = 0; j< arr2[0].size();j++)
        {
            for(int k = 0; k < arr2.size();k++)
            {
                
            }
        }
        

    }
}

/*
a11 a12              b11  b12
a21 a22              b21  b22
a31 a32


= a11 * b11 + a12 *b21         
  a21* b11 + a22 * b21
  a31* b11 + a32 * b21
*/