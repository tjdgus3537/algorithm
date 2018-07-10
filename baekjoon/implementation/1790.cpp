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
    long long n, k, total = 0, now = 0, x = 1, tmp, ten = 1, q, r;
    
    cin >> n >> k;
    
    tmp = n;
    while(tmp >= 10) {
        total += 9 * ten * x;
        x++;
        ten *= 10;
        tmp /= 10;
    }
    total += (n - ten + 1) * x;

    if(total < k) {
        cout << -1 << endl;
        return;
    }

    ten = 1;
    x = 1;
    now = 0;
    while(k > now + 9 * ten * x) {
        now += 9 * ten * x;
        x++;
        ten *= 10;
    }
    
    k-= now;
    k--;
    
    q = k / x;
    r = k % x;

    cout << to_string(q + ten)[r] << endl;

}