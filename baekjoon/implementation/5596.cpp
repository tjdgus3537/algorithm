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
    int S, T, i, m, s, e;
    
    cin >> i >> m >> s >> e;
    S = i + m + s + e;
    cin >> i >> m >> s >> e;
    T = i + m + s + e;
    
    cout << max(S, T) << endl;
}
