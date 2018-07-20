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
    int n, b, h, w;
    int admit_people, max_admit, cost;
    int ans = 123456789;
    
    cin >> n >> b >> h >> w;
    
    for(int i = 0; i < h; i++) {
        max_admit = 0;
        cin >> cost;
        for(int j = 0; j < w; j++) {
            cin >> admit_people;
            max_admit = max(max_admit, admit_people);
        }
        if(max_admit < n)
            continue;
        
        if(n * cost <= b)
            ans = min(ans, n * cost);
    }
    
    if(ans == 123456789)
        cout << "stay home" << endl;
    else
        cout << ans << endl;
}