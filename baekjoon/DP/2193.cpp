#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

//int를 쓰니까 오답이 나옴. long long을 써야 함
//90을 넣으면 정답이 880067194370816120

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    //dp[n][0]은 n자리 이친수 중, 0으로 끝나는 수의 개수
    //dp[n][1]은 n자리 이친수 중, 1로 끝나는 수의 개수
    int N;
    long long dp[91][2];
    
    dp[1][0] = 0;
    dp[1][1] = 1;
    dp[2][0] = 1;
    dp[2][1] = 0;
    
    cin >> N;
    
    for(int i = 3; i <= N; i++) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
    }
    
    cout << dp[N][0] + dp[N][1];
}
