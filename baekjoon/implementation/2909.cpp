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
    long long c, k, money = 1;
    
    cin >> c >> k;
    
    while(k--)
        money *= 10;
    
    if(abs(c / money * money - c) < abs((c / money + 1) * money - c))
        cout << c / money * money << endl;
    else
        cout << (c / money + 1) * money << endl;
}
