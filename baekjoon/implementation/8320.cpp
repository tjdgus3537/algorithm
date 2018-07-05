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
    int n, ans = 0;
    
    cin >> n;
    
    ans = n;
    
    for(int i = 2; i <= n / 2; i++)
        for(int j = i * i; j <= n; j++)
            if(j % i == 0)
                ans++;
                
    cout << ans << endl;
}
