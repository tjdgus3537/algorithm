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
    int w[10], k[10];
    
    for(int i = 0; i < 10; i++)
        cin >> w[i];
    for(int i = 0; i < 10; i++)
        cin >> k[i];
        
    sort(w, w + 10);
    sort(k, k + 10);
    
    cout << w[9] + w[8] + w[7] << " " << k[9] + k[8] + k[7] << endl;
}
