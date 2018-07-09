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
    int go_h, go_m, go_s, leave_h, leave_m, leave_s;
    int total;
    
    for(int i = 0; i < 3; i++) {
        cin >> go_h >> go_m >> go_s >> leave_h >> leave_m >> leave_s;
        total = (leave_h - go_h) * 3600 + (leave_m - go_m) * 60 + (leave_s - go_s);
        
        cout << total / 3600 << " ";
        total %= 3600;
        cout << total / 60 << " ";
        total %= 60;
        cout << total << endl;
    }
}
