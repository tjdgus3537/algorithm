#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>
#include <cstdio>
#include <string>

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
    int n, wine[10001] = {0,};
    //dp[i][k]는 i번째 잔을 연속 k번째로 마셨을 때
    int dp[10001][3] = {0,};
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        cin >> wine[i];
    
    dp[1][0] = 0;
    dp[1][1] = wine[1];
    dp[1][2] = 0;
    
    dp[2][0] = wine[1];
    dp[2][1] = wine[2];
    dp[2][2] = wine[1] + wine[2];
    
    for(int i = 3; i <= n; i++) {
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        dp[i][1] = max(dp[i - 2][0], max(dp[i - 2][1], max(dp[i - 1][0], dp[i - 2][2]))) + wine[i];
        dp[i][2] = dp[i - 1][1] + wine[i];
    }

    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
}
