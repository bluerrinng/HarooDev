# 7월 13일 배운것 !

## STL Container Methods

1. ``unique()``
2. ``binary_search()``
3. ``max_element(), min_element()``
4. ``next_permutation()``


### ``unique()``
- 이미 정렬된 컨테이너에서 중복 값들을 뒤로 보내버리고 새로운 끝 반복자를 만드는 함수
- 시간 복잡도: O(N)

### ``binary_search()``
- 이진 탐색으로 컨테이너에서 특정 원소를 찾을때 사용
- 만약 해당 값이 있으면 ``true`` 반환 , 없으면 ``false``
- O(logN)
- 순차 탐색보다 빠르다 

### ``max_element(), min_element()``
- 최댓값 및 최솟값 위치를 반환하는 반복자
- 시간 복잡도 : O(N)
  


### ``next_permutation()``
- 특정 컨테이너에서 가능한 모든 조합을 반환한다.
- 내림차순일 경우 끝난걸로 간주 그렇기에 오름차순으로 먼저 정렬해야 한다
- 시간 복잡도: O(N*N!)