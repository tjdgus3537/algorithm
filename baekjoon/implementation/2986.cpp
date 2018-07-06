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
    int n, count = 0, escape = 0;
    
    cin >> n;
    
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            escape = n / i;
            break;
        }
    }
    
    if(escape == 0)
        cout << n - 1 << endl;
    else
        cout << n - escape << endl;
}
