# 7월 8일 배운 내용!

``vector``는 내부적으로 배열과 유사하고 
뒤에서 삽입, 삭제는 O(1)의 시간 복잡도를 가지지만, 
앞에서 삽입, 삭제는 O(N)의 시간 복잡도를 가진다. (한칸 씩 이동해야함)

또한 원소 탐색은 `` include <algorithm>``의 ``find``메서드를 통해서 O(N)의 시간 복잡도를 가진다.

``set``은 정렬 기능, 중복 미허용 을 가지는 컨테이너로 
앞과 뒤에서의 삽입, 삭제 모두 O(log N)의 시간 복잡도를 가진다. 
삽입과 삭제는 각각 ``insert``와 ``erase``를 사용함
특히 ``erase``의 경우에는 원소 그 자체 혹은 원소의 주소를 인수로 받을 수 있다.

또한 원소 탐색은 ``set``자체의 ``find`` 메서드를 사용하며 이는 위의 ``algorithm``헤더 의 ``find`` 메서드와 다르며 O(logN)의 시간 복잡도를 가진다. 
둘다 목표를 찾지 못하면 ``end``의 ``iterator``를 반환한다.

```c++
#include <algorithm>
#include <set>

set<int> s1 = {3,7,3,2,4};

int target = 30;

auto result = find(s1.begin(),s1.end(),30);

```

```c++
#include <set>
set<int> s1 = {3,7,3,2,4};
int target = 20;
auto result = s1.find(30);
```