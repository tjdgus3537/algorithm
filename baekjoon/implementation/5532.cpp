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
    int l, a, b, c, d;
    int math, korean;
    
    cin >> l >> a >> b >> c >> d;
    
    if(a % c == 0)
        math = a / c;
    else
        math = (a / c) + 1;
        
    if(b % d == 0)
        korean = b / d;
    else
        korean = (b / d) + 1;
    
    cout << l - max(math, korean) << endl;    
}
