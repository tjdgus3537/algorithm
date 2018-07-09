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
//gcd 제공
#include <numeric>

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
    int n, b[101], sum[101] = {0,};
    
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cin >> b[i];
        sum[i] = b[i] * i;
    }
    
    for(int i = 1; i <= n; i++)
        cout << sum[i] - sum[i - 1] << " ";
}