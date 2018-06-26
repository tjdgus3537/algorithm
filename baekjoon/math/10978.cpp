#include <iostream>
#include <string>
using namespace std;

//수학적으로 경우의 수를 따지면서 풀었다.
//N명이 있을 때 아무도 중복 되지 않는 경우의 수는 {전체 경우의 수 - for(i = 2; i <= n -1; i++) i명이 그대로고 나머지가 중복되지 않는 경우의 수}.
//1명만 중복되지 않는 경우는 불가능함.

long long combi(int a, int b, long long fact[21]);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    int T, N;
    long long fact[21] = {0,};
    long long dp[21] = {0,};
    
    fact[0] = 1;
    dp[1] = 0;
    dp[2] = 1;
 
    for(int i = 1; i <= 20; i++)
        fact[i] = fact[i - 1] * i;
    
    for(int i = 3; i <= 20; i++) {
        dp[i] = fact[i];
        
        for(int j = 2; j <= i - 1; j++)
            dp[i] -= combi(i, i - j, fact) * dp[j];
        
        dp[i]--;
    }
    
    cin >> T;
 
    while(T--) {
        cin >> N;
        
        cout << dp[N] << endl;
    }
}

long long combi(int a, int b, long long fact[21]) {
    return fact[a] / fact[b] / fact[a - b];
}