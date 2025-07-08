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



