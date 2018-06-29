#include <iostream>

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
    int dp[11] = {0,};
    int T, n;
    
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    //1개 전 값에 1 더하기, 2개 전 값에 2더하기, 3개 전 값에 3 더하기
    for(int i = 4; i < 11; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    
    cin >> T;
    
    while(T--) {
        cin >> n;
        
        cout << dp[n] << endl;
    }
}
