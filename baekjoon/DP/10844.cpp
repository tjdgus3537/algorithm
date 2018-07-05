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
    int n;
    long long dp[101][10] = {0,};
    long long ans = 0;
    
    cin >> n;
    
    for(int i = 1; i <= 9; i++)
        dp[1][i] = 1;
    
    for(int i = 2; i <= n; i++) {
        for(int j = 0; j <= 9; j++) {
            if(j == 0)
                dp[i][0] = dp[i - 1][1];
            else if(j == 9)
                dp[i][9] = dp[i - 1][8];
            else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
        }
    }

    for(int i = 0; i <= 9; i++)
        ans += dp[n][i];
    
    cout << ans % 1000000000 << endl;
}
