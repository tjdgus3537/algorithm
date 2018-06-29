#include <iostream>
#include <cmath>

using namespace std;

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    //dp[i][1]은 i번째 계단을 i - 1번째 계단에서 온 것.
    //dp[i][2]은 i번째 계단을 i - 2번째 계단에서 온 것.
    int N, dp[301][3] = {0,};
    int stairs[301] = {0,};
    
    cin >> N;
    
    for(int i = 1 ; i <= N; i++)
        cin >> stairs[i];
    
    //바닥
    dp[0][1] = 0;
    dp[0][2] = 0;
    //1번 계단
    dp[1][1] = 0;
    dp[1][2] = stairs[1];
    //2번 계단
    dp[2][1] = dp[1][2] + stairs[2];
    dp[2][2] = stairs[2];
    
    for(int i = 3; i <= N; i++) {
        dp[i][1] = dp[i - 1][2] + stairs[i];
        dp[i][2] = max(dp[i - 2][1], dp[i - 2][2]) + stairs[i];
    }
    
    cout << max(dp[N][1], dp[N][2]);
}
