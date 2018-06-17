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
    if(n % 2 == 1)
        return 0;
    
    long long dp[60001] = {0,};
    
    dp[0] = 1;
    dp[2] = 3;
    dp[4] = 11;
    
    for(int i = 6; i <= n; i += 2) {
        dp[i] += dp[i - 2] * 3;
        //아래 부분이 반복되므로 이 부분을 저장하면 O(N)으로 줄일 수 있음
        for(int j = 4; j <= n; j += 2)
            dp[i] += dp[i - j] * 2;
            
        dp[i] %= 1000000007;
    }
    
    return dp[n];
}