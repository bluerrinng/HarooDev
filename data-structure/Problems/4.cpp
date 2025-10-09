/*
4.cpp

수포자는 수학을 포기한 사람을 줄인 표현이다.
수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 한다
수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍는다

1: 1 2 3 4 5 1 2 3 4 5
2: 2 1 2 3 2 4 2 5 2 1 2 3 2 4 2 5
3: 3 3 1 1 2 2 4 4 5 5 3 3 1 1 2 2 

1번 문제부터 마지막 문제까지 정답이 순서대로 저장된 배열 answers가 주어졌을 때 가장 많이 문제를 맞힌 사람이 누구인지 배열에 담아 반환

*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


vector<int> solution(vector<int> answers)
{
    vector<int> matchCnt(3);

    vector<int> result;

    //guess pattern of each student
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {2,1,2,3,2,4,2,5};
    vector<int> v3 = {3,3,1,1,2,2,4,4,5,5};

    for(int i = 0; i<answers.size();i++)
    {
        if(answers[i] == v1[i%v1.size()])
        {
            matchCnt[0]++;
        }

        if(answers[i] == v2[i%v2.size()])
        {
            matchCnt[1]++;
        }

        if(answers[i] == v3[i%v3.size()])
        {
           matchCnt[2]++;
        }
    }

    //많이 맞췄을때 몇개인지
    int maxVal = *max_element(matchCnt.begin(),matchCnt.end());

    for(int i = 0; i<matchCnt.size();i++)
    {
        if(matchCnt[i] == maxVal)
        {
            result.push_back(i+1);
        }
    }
    
    return result;
}


int main()
{
   
    vector<int> answers = {1,2,3,4,5};

    vector<int> v = solution(answers);

    for(int i : v)
    {
        cout << i << endl;        
    }

    return 0;


}