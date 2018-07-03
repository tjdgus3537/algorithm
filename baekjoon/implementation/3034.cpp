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
    int n, w, h, dia, len;
    
    cin >> n >> w >> h;
    
    dia = sqrt(w * w + h * h);
    
    while(n--) {
        cin >> len;
        if(len <= dia)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }
}
