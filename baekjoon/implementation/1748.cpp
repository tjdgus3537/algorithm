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

//등호 안 넣어서 1번 틀림;

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int n, ans = 0, len = 1, ten = 1;
    
    cin >> n;
    
    int tmp = n;
    
    while(tmp >= 10) {
        ans += 9 * len * ten;
        len++;
        ten *= 10;
        tmp /= 10;
    }
    
    ans += (n - ten + 1) * len;
    
    cout << ans << endl;
}
