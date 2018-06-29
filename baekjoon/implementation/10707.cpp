#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>

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
    int a, b, c, d, p;
    int x, y;
    
    cin >> a >> b >> c >> d >> p;
    
    x = a * p;
    
    if(p <= c)
        y = b;
    else
        y = b + (p - c) * d;
        
    cout << min(x, y) << endl;
}
