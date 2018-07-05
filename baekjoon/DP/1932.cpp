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
    int input[501][501] = {0,}, dp[501][501] = {0,};
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            scanf("%d", &input[i][j]);
    
    for(int i = 1; i <= n; i++)
        dp[n][i] = input[n][i];
    
    for(int i = n - 1; i >= 1; i--)
        for(int j = 1; j <= i; j++)
            dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + input[i][j];
    
    cout << dp[1][1] << endl;

}
