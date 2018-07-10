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
    int n, begin, end, count, ans = 0;
    
    cin >> n >> count;
    ans = count;
    
    while(n--) {
        cin >> begin >> end;
        
        count += begin;
        count -= end;
        ans = max(ans, count);
        if(count < 0) {
            cout << 0 << endl;
            return;
        }
    }
    
    cout << ans << endl;
}