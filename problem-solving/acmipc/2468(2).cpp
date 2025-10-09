#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void dfs(int x, int y, const vector<vector<int>>& grid, vector<vector<bool>>& visited, int h) {
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
            if (!visited[nx][ny] && grid[nx][ny] > h) {
                dfs(nx, ny, grid, visited, h);
            }
        }
    }
}

int findMax(const vector<vector<int>>& grid) {
    int maxVal = 0;
    for (int i = 0; i < grid.size(); i++) {
        maxVal = max(maxVal, *max_element(grid[i].begin(), grid[i].end()));
    }
    return maxVal;
}

int solution(const vector<vector<int>>& grid) {
    int maxVal = findMax(grid);
    int answer = 1; // 최소 안전 영역은 1 이상
    int N = grid.size();

    for (int h = 0; h < maxVal; h++) {
        vector<vector<bool>> visited(N, vector<bool>(N, false));
        int count = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (!visited[i][j] && grid[i][j] > h) {
                    dfs(i, j, grid, visited, h);
                    count++;
                }
            }
        }
        answer = max(answer, count);
    }
    return answer;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    cout << solution(grid);
}
