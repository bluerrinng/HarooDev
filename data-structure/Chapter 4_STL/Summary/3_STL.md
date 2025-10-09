# STL Container

STL의 컨테이너는 데이터를 저장하는 객체를 의미

``vector``
``set``
``map``
``priority_queue`` 는 꼭 알아두는 것이 좋다. 


## 벡터 (Vector)
배열과 매우 유사한 컨테이너

**데이터를 순차적으로 저장**
**인덱스를 통해 특정 위치의 원소에 접근**

다음을 통해서 ``vector`` 값들을 선언 혹은 초기화할 수 있음

```c++
vector<int> v1;
vector<int> v2 = {1,2,3,4,5};
vector<int> v3 = (4,3);
vector<int> v4 = (v3);
```

여기서 주목할 것은 ``v3``이다. 이거는 크기 4의 배열을 만들고 해당 배열의 원소를 모두 3으로 초기화한다는 내용이다. 

2차원 배열

```c++
vector<vector<int>> v1;             //2차원 배열 선언

int rows = 3;
int columns = 4;

vector<vector<int>> v2(rows,vector<int>(columns));

vector<vector<int>> v3(rows,vector<int>(columns,9));

vector<vector<int>> v4 ={{1,2,3},{4,5,6},{7,8,9}};
```

벡터의 내부는 배열로 구성됨
- 맨 뒤에서는 삽입, 삭제 연산을 효율적으로 할 수 있다
- 맨 앞에서 삽입, 삭제는 매우 비효율적 (한칸씩 이동해야함)


맨 뒤에서 삽입할때는 ``push_back()`` 메서드 활용
맨 뒤에서 삭제할때는 ``pop_back()`` 메서드 활용

둘 다 시간 복잡도는 O(1) : 다른 값에 영향을 미치지 않는다

**앞에서 삭제할일이 있으면 다른 컨테이너 사용하자** 

``find`` 는 O(N) 의 시간 복잡도를 가짐


## 셋 (Set)
- 중복을 허용하지 않음
- 자동으로 정렬해줌
- ``set``헤더 파일

원소 탐색 : O(logN)
``find`` 메서드를 사용
찾는 원소가 있으면 위치를 반환하고, 없으면 ``end iterator`` 반환 

```c++
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s1 = {3,2,4,5,6,3};

    int targets[2] = {3,7};

    for(int target : targets)
    {
        auto result = find(s1.begin(),s2.end(),target);
        if(result != s2.end())
        {
            cout << "Target Found : " << (*result) << endl;
        }
        else
        {
            cout << "Target Missing! << endl;
        }
    }

    return 0;
}

```

원소의 삽입과 삭제 : O log(N)
-> 삽입, 삭제 후에도 정렬된 상태를 유지

삽입은 ``insert()``, 삭제는 ``erase()``
``erase``는 원소의 값이 or 원소의 주소

``set``에서는 원소의 값 혹은 원소의 주소(``iterator``)를 활용해서 지울 수 있다


## map
- 키와 값을 쌍으로 갖는 컨테이너
- 키와 값의 쌍을 ``Entry``라고 한다 
- 이진 탐색 트리로 구성 -> 키 값을 기준으로 자동 정렬
- 검색,삽입,삭제 -> ``O(logN)`` : ``Set``와 똑같음
  

``map``에서 특정 키에 접근하는 방법은 두 가지가 있다.
- ``[]``를 통해 -> 만약 해당 키가 없으면 해당 키를 생성한다. 
- ``map``의 ``find``함수를 사용해서 구한다. -> O(logN)


삽입과 삭제 

삽입 : O(logN) 
- ``insert()`` : ``make_pair()`` 함수를 쓰거나 {}를 사용한다, ``pair`` 객체를 받는다
- [] 방법 활용


삭제 
- erase
- 인수로 키 값 혹은 키의 위치
- 인수로 값을 넘길 때 시간 복잡도는 O(logN)
- 위치를 넘길때 시간 복잡도는 O(1)


``Set`` & ``map``은 기본적으로 이진 탐색 트리 구조를 가지기 때문에 정렬을 유지한다. 
하지만 이는 성능 저하로 이루어진다. 
이럴때 사용할 수 있는 것이 다음과 같다: 

## unordered_Set & unordered_map
이 둘은 앞서 배운 방식과 같이 ``set``과 ``map``처럼 사용할 수 있다.
하지만 이진 탐색 트리 방식이 아닌 해시 방식을 사용하여 데이터가 정렬되어 있지 않다 

- 시간 복잡도는 : O(1)

위의 배웠던 방식처럼 사용가능 
- ``insert``
- ``erase``
- ``find``
