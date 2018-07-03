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
    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    cout << (a + b + c + d) / 60 << endl;
    cout << (a + b + c + d) % 60 << endl;
}
