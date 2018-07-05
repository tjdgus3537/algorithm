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
    int n, num[3] = {0,}, max_sqrt = 0;
    bool is_cd;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> num[i];
        max_sqrt = max(max_sqrt, num[i]);
    }
    
    for(int i = 1; i <= max_sqrt; i++) {
        is_cd = true;
        for(int j = 0; j < n; j++)
            if(num[j] % i != 0)
                is_cd = false;
        
        if(is_cd)
            cout << i << endl;
    }
}
