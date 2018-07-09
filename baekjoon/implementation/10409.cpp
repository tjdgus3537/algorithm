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
    int n, t;
    int work[500], sum[500], ans = -1;
    
    cin >> n >> t;
    
    cin >> work[0];
    sum[0] = work[0];
    
    for(int i = 1; i < n; i++) {
        cin >> work[i];
        sum[i] = sum[i - 1] + work[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(sum[i] > t) {
            ans = i;
            break;
        }
    }
    
    if(ans == -1)
        ans = n;
    
    cout << ans << endl;
}
