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
    int n, p[1001] = {0,}, dp[1001] = {0,};

    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cin >> p[i];
        dp[i] = p[i];
    }
    
    for(int i = 1; i <= n; i++)
        for(int j = i; j <= n; j++)
            dp[j] = max(dp[j], dp[j - i] + p[i]);
            
    cout << dp[n] << endl;
}
