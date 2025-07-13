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
- 시간 복잡도는 O(NlogN)

인수를 두개 받을때는 시작 반복자부터 끝 반복자까지 범위를 받아 원소들을 오름차순으로 정렬한다. 
인수를 세개 받을때는 시작 반복자, 끝 반복자에 추가로 비교함수를 받는다 -> 비교 함수를 기준으로 범위 내 원소를 정렬한다. 


## next_permutation() 함수로 순열 생성 
- 컨테이너의 가능한 모든 순열을 생성 
- 인수 : 시작 반복자, 끝 반복자
- 가능한 순열이 있으면 ``true`` 반환, 없으면 ``false``를 반환 
- 시간 복잡도 O(N*N!)
- ``algorithm`` 헤더 파일
- 내림차순일때 마지막 가능한 조합이라고 판단한다, 그렇기에 하기전에 먼저 오름차순으로 정렬을 해놓을 필요가 있다

아래의 예시처럼 ``while``내에서 함수를 호출하는 패턴이 많다

```c++
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1,2,3};

    do{
        for(int i : v)
        {
            cout << i <<" ";
        }
        cout << endl;
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}
```


## unique() 함수로 중복 정리하기 
- 컨테이너 내 중복되는 원소들을 뒤로 밀어내고 중복되지 않는 원소들만 남겨 새로운 범위의 끝 반복자를 반환
- 핵심은 새로운 끝 반복자를 반환한다는 것!
- 시간 복잡도는 : O(N)
- 인수: 시작 반복자, 끝 반복자 

```c++
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {2,3,5,6,5,4,2,1,4};

    sort(v.begin(),v.end());

    //unique() function
    auto newEnd = unique(v.begin(),v.end());

    for(auto it = v.begin(); it!= newEnd; ++it)
    {
        cout << (*it) << endl;
    }

    return 0;
}
```

## binary_search() 함수로 이진 탐색하기 
- 주어진 범위 내 원소에 이진 탐색을 수행한다. 
- 인수 : 시작 반복자, 끝 반복자, 찾을 값
- 탐색을 수행하고 원소가 있으면 ``true``, 없으면 ``false``
- 시간 복잡도 : O(logN)
- 정렬되어 있어야 함
- 정렬/ 원소 탐색을 자주 : 이진 탐색 > 순차 탐색

```c++
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {2,4,5,7,1,3,5,9};

    sort(v.begin(),v.end());
    cout << binary_search(v.begin(),v.end(),3) << endl;
    cout << binary_search(v.begin(),v.end(),12) << endl;
    
    return 0;
}
```


## max_element(), min_element() 함수로 최댓값, 최솟값 위치 구하기 

- ``max_element()``와 ``min_element()``는 컨테이너 내에서 최댓값, 최솟값의 위치를 반환한다. 
- 인수 : 시작 반복자, 끝 반복자
- 시간 복잡도: O(N)

```c++
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1,3,5,2,7,9,1,8,6};

    auto max_it = max_element(v.begin(),v.end());
    auto min_it = min_element(v.begin(),v.end());

    cout << (*max_it) << endl;
    cout << (*min_it) << endl;

    return 0;
}

```