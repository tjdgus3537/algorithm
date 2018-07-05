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

//다시 풀었는데 틀렸음.
//dp[i]는 i번째 값을 포함한 연속합 중 최대.

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int n, input[100001], dp[100001] = {0,};
    int ans;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        cin >> input[i];

    dp[1] = input[1];
    
    for(int i = 2; i <= n; i++)
        dp[i] = max(dp[i - 1] + input[i], input[i]);
    
    ans = dp[1];
    for(int i = 2; i <= n; i++)
        ans = max(ans, dp[i]);
    
    cout << ans << endl;
}
