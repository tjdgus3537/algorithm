#include <iostream>
#include <cstdio>
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
    int T, N;
    //dp[i][0]은 fibo(i)를 호출할 때 fibo(0)이 호출되는 횟수
    //dp[i][1]은 fibo(i)를 호출할 때 fibo(1)이 호출되는 횟수
    int dp[41][2] = {0,};
    
    cin >> T;
    
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;
    
    for(int i = 2; i <= 40; i++) {
        dp[i][0] = dp[i - 2][0] + dp[i - 1][0];
        dp[i][1] = dp[i - 2][1] + dp[i - 1][1];
    }
    
    while(T--) {
        cin >> N;
        
        cout << dp[N][0] << " " << dp[N][1] << endl;
    }
}
