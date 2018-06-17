#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n);

int main() {
    //test 생략
    return 0;
}

int solution(int n) {
    long long dp[60001] = {0,};
    
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i = 3; i <= n; i++)
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000007;
    
    return dp[n];
}