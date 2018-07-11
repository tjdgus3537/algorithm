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
//unsigned int gcd (unsigned int n1, unsigned int n2);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    /* 틀림
    int n, c, ans = 0, a, b, lcm;
    int period[100];
    
    cin >> n >> c;
    
    for(int i = 0; i < n; i++)
        cin >> period[i];
    
    ans = c / period[0];
    a = period[0];
    
    for(int i = 1; i < n; i++) {
        b = period[i];
        ans += c / b;
        
        lcm = a * b / gcd(a, b);
        ans -= c / lcm;
        a = b;
    }
    
    cout << ans << endl;
    */
    
    int n, c, ans = 0;
    bool is_bang[2000001] = {0,};
    int period;
    
    cin >> n >> c;
    for(int i = 0; i < n; i++) {
        cin >> period;
        for(int j = period; j <= c; j += period)
            is_bang[j] = true;
    }
    
    for(int i = 0; i <= c; i++)
        if(is_bang[i])
            ans++;
            
    cout << ans << endl;
}

//unsigned int gcd (unsigned int n1, unsigned int n2) {
//    return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
//}