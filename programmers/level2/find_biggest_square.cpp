#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> board);

int main() {
    //test 생략
    return 0;
}

int solution(vector<vector<int>> board) {
    int ROW = board.size();
    int COL = board[0].size();
    int answer = 0;
    // ROW * COL 2차원 동적 배열 생성
    vector<vector<int>> dp(ROW, vector<int>(COL, 0));
    vector<vector<int>> dp2(ROW, vector<int>(COL, 0));

    for(int i = 0; i < ROW; i++) {
        dp[i][0] = board[i][0];
        answer = max(answer, dp[i][0]);
    }

    for(int i = 0; i < COL; i++) {
        dp[0][i] = board[0][i];
        answer = max(answer, dp[0][i]);
    }
    
    for(int i = 1 ; i < ROW; i++) {
        for(int j = 1; j < COL; j++) {
            if(board[i][j] == 1) {
                //위, 왼쪽, 대각선 왼쪽위 중 최솟 값 + 1
                dp[i][j] = min(dp[i - 1][j - 1] ,min(dp[i - 1][j], dp[i][j - 1])) + 1;
                answer = max(answer, dp[i][j]);
            }
        }
    }
    
    return answer * answer;
}