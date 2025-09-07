#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    int N, K;
    cin >> N >> K;   // 영웅 수, 창고 크기 입력

    vector<vector<int>> weapons(N); // 각 영웅의 무기 저장
    vector<int> results;

    for (int i = 0; i < N; i++) {
        int M; 
        cin >> M;    // i번째 영웅의 무기 개수
        weapons[i].resize(M);
        for (int j = 0; j < M; j++) {
            cin >> weapons[i][j];   // 무기 강함 입력
        }
    }

    priority_queue<int> pq;
    for(auto& t : weapons)
    {
        for(auto & c : t)
        {
            pq.push(c);
        }
    }

    for(int i = 0; i < K;i++)
    {
        int val = pq.top();
        results.push_back(val);
        pq.pop();
    }

    for(auto &c : results)
    {
        cout << c << endl;
    }

    return 0;
}
