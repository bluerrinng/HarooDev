# 7월 12일 배운 것!

## STL Container Methods
1. ``count()``
2. ``sort()``

``count()``는 컨테이너에서 찾고자 하는 원소의 갯수를 알려주는 함수
- 인수를 받는 것은 ``시작 반복자`` & ``끝 반복자`` & ``찾고자 하는 원소``
- 시간 복잡도: O(logN)


``sort()``는 컨테이너를 오름차순으로 정렬하는 함수
- 인수를 2가지로 받을 수 있게 오버로딩 됨
  - ``시작 반복자`` & ``끝 반복자``
  - ``시작 반복자`` & ``끝 반복자`` & ``특정 함수 기준으로 정렬`` -> 특정함수를 기준으로 하면 내림차순 정렬과 같은 것도 가능 
  - 시간 복잡도: O(NlogN)


ex)
```c++
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

vector<int> solution(vector<int> lst)
{
    sort(lst.begin(), lst.end(), compare);
    return lst;
}

```


