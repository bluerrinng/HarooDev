# STL의 알고리즘

## count() 함수로 횟수 세기
- ``count()``함수는 컨테이너 내에서 특정 값이 나타나는 횟수를 세고 반환한다. 
- 인수는 3개 
  - 시작 반복자
  - 끝 반복자
  - 나타나는 횟수를 확인할 값
  - 시간 복잡도는 범위로 지정한 원소의 개수가 N개 일 경우 O(N)


```c++
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1,3,4,5,6,5,2,3};

    int mycount = count(v.begin(),v.end(),5);

    cout << mycount << endl;

    return 0;
}

```

## sort() 함수로 정렬하기
- ``sort()``는 컨테이너를 정렬하는 함수 
- ``sort(시작 반복자, 끝 반복자)
- ``sort(시작 반복자, 끝 반복자, 비교 함수)
- 시간 복잡도는 O(logN)

인수를 두개 받을때는 시작 반복자부터 끝 반복자까지 범위를 받아 원소들을 오름차순으로 정렬한다. 
인수를 세개 받을때는 시작 반복자, 끝 반복자에 추가로 비교함수를 받는다 -> 비교 함수를 기준으로 범위 내 원소를 정렬한다. 

