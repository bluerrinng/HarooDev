#include <iostream>
using namespace std;

int backtracking(int result, int val)
{
    // 목표에 도달했으면 방법 1개
    if (result == val)
        return 1;

    // 목표를 넘었으면 방법 없음
    if (result > val)
        return 0;

    // 현재 위치에서 +1, +2, +3 가는 모든 경우의 수 합산
    return backtracking(result + 1, val)
         + backtracking(result + 2, val)
         + backtracking(result + 3, val);
}

int main()
{
    cout << backtracking(0, 4) << endl; // 예: 4일 때
    cout << backtracking(0, 7) << endl; // 예: 7일 때
    cout << backtracking(0, 10) << endl; // 예: 10일 때
    return 0;
}
