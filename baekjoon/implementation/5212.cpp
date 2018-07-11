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
    int r, c, rb, re, cb, ce;
    int map[12][12] = {0,}, new_map[12][12] = {0,};
    char tmp;
    
    cin >> r >> c;
    
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            cin >> tmp;
            if(tmp == 'X') {
                map[i][j] = 1;
                new_map[i][j] = map[i][j];
            }
        }
    }
    
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            int sea = 0;
            
            if(map[i + 1][j] + map[i - 1][j] + map[i][j + 1] + map[i][j - 1] <= 1)
                new_map[i][j] = 0;
        }
    }
    
    rb = re = cb = ce = -1;
    
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            if(new_map[i][j] == 1) {
                if(rb == - 1)
                    rb = i;
                re = i;
            }        
        }
    }
    
    for(int i = 1; i <= c; i++) {
        for(int j = 1; j <= r; j++) {
            if(new_map[j][i] == 1) {
                if(cb == -1)
                    cb = i;
                ce = i;
            }
        }
    }
    
    for(int i = rb; i <= re; i++) {
        for(int j = cb; j <= ce; j++) {
            if(new_map[i][j] == 1)
                cout << 'X';
            else
                cout << '.';
        }
        cout << endl;
    }
}