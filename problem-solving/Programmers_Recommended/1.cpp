/*
추천문제 1번 : 배열의 평균값
정수 배열이 매개변수로 주어졌을때 해당 정수들의 평균 값을 return 하는 Solution()

*/

#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> numbers)
{
    double answer = 0;
    int sum = 0;

    for(int i = 0; i < numbers.size();i++)
    {
        sum += numbers[i];
    }

    answer = double(sum) / double(numbers.size());

    return answer;
}

int main()
{
    vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};

    cout << solution(numbers);

    return 0;
}