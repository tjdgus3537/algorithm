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
    int n, cmp = 10;
    
    cin >> n;
    
    while(n > cmp) {
        if(n % cmp >= 5 * cmp / 10) {
            n /= cmp;
            n++;
            n *= cmp;
        }
        else {
            n /= cmp;
            n *= cmp;
        }
        
        cmp *= 10;
    }
    
    cout << n << endl;
}
