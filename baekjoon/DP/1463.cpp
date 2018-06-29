#include <iostream>
#include <climits>

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
    int N;
    int dp[1000001];
    
    cin >> N;
    
    for(int i = 0; i <= N; i++)
        dp[i] = INT_MAX;
    
    dp[1] = 0;
    
    for(int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1;
        
        if(i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if(i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }
    
    cout << dp[N] << endl;
}
