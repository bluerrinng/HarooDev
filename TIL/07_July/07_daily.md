# 7월 7일 배운 내용!

``find`` 는 메서드 함수로 ``map`` ,``unordered_map``, ``set``, ``unordered_set``등의 컨테이너에 정의된 멤버 함수
범위 기반 일반 알고리즘으로 대부분의 모든 알고리즘에서 사용 가능

```c++
auto it = std::find(vec.begin(),vec.end(),"target");
```
위의 방식으로 사용

- 선형 탐색으로 O(n)의 속도를 가짐 
- 순차적 탐색 

``map``에서는 그렇기에 더 빠른 속도를 가지는 ``map``의 전용 find``를 사용한다. 
```c++
auto it = map.find("Key");
```
- 이진 탐색 트리으로 O(log n) 속도를 가짐
- 범위 필요 없다 

또한 Map 은 {key,value}로 가지고, key를 오름차순으로 정렬한다.
