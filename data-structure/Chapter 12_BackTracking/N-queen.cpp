#include <iostream>
#include <vector>
using namespace std;

bool is_safe(const vector<vector<bool>>& board, int row, int col, int n);
void solveNqueen(int n, int row, vector<vector<bool>>& board, int& count);

int solution(int n)
{
    vector<vector<bool>> board(n, vector<bool>(n, false));
    int count = 0;
    solveNqueen(n, 0, board, count);
    return count;
}

void solveNqueen(int n, int row, vector<vector<bool>>& board, int& count)
{
    if (row == n) {
        count += 1;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (is_safe(board, row, col, n)) {
            board[row][col] = true;            // 놓기
            solveNqueen(n, row + 1, board, count); // 다음 행
            board[row][col] = false;           // 되돌리기 (백트래킹)
        }
    }
}

bool is_safe(const vector<vector<bool>>& board, int row, int col, int n)
{
    // 같은 열(위쪽 행만)
    for (int i = 0; i < row; i++)
        if (board[i][col]) return false;

    // 왼쪽 위 대각선
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;

    // 오른쪽 위 대각선
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j]) return false;

    return true;
}

int main()
{
    cout << solution(4) << endl; // 2
    return 0;
}
