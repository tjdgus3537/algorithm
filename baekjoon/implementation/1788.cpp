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
    //-1000000 ~ 1000000 --> 0 ~ 20000000 (1000000이 0)
    long long f[3];
    int n;
    
    cin >> n;
    
    f[0] = 0;
    f[1] = 1;
    
    //f[2]에 답을 유지
    
    if(n == 0)
        f[2] = 0;
    else if(n == 1)
        f[2] = 1;
    
    for(int i = 2; i <= n; i++) {
        f[2] = (f[0] + f[1]) % 1000000000;
        f[0] = f[1];
        f[1] = f[2];
    }
    
    for(int i = -1; i >= n; i--) {
        f[2] = (f[1] - f[0]) % 1000000000;
        f[1] = f[0];
        f[0] = f[2];
    }
    
    if(f[2] > 0)
        cout << 1 << endl;
    else if(f[2] == 0)
        cout << 0 << endl;
    else
        cout << -1 << endl;
        
    cout << abs(f[2]) << endl;
}