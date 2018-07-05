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
    int val[3];
    
    while(true) {
        cin >> val[0] >> val[1] >> val[2];
        
        if(val[0] + val[1] + val[2] == 0)
            break;
                
        sort(val, val + 3);
        
        if(val[0] * val[0] + val[1] * val[1] == val[2] * val[2])
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
}
