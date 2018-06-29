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
    int n;
    int dp[1001] = {0,};
    
    cin >> n;
    
    dp[1] = 1;
    dp[2] = 2;
    
    //세로 한개 놓는 경우, 가로 두개 놓는 경우
    for(int i = 3; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
        
    cout << dp[n];
}
