#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int n);

int main() {
    //test 생략
    return 0;
}

long long solution(int n) {
    long long dp[2001] = {0,};
    
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i = 2; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1234567;
    
    return dp[n];
}