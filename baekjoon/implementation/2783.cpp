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

//1g씩도 살 수 있다.

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    double ans, min_price;
    double w, g;
    int n;
    
    cin >> w >> g;
    min_price = w / g;
    cin >> n;
    while(n--) {
        cin >> w >> g;
        min_price = min(min_price, w / g);
    }
    
    cout << min_price * 1000 << endl;
}