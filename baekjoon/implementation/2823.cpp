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
    int r, c;
    int map[12][12] = {0,};
    char tmp;
    bool is_ans = true;
    int count;
    
    cin >> r >> c;
    
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            cin >> tmp;
            if(tmp == '.')
                map[i][j] = 1;
        }
    }
    
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            count = 0;
            if(map[i][j] == 1) {
                if(map[i + 1][j] == 0)
                    count++;
                if(map[i - 1][j] == 0)
                    count++;
                if(map[i][j + 1] == 0)
                    count++;
                if(map[i][j - 1] == 0)
                    count++;
            }
            if(count >= 3)
                is_ans = false;
        }
    }
    
    if(is_ans)
        cout << 0 << endl;
    else
        cout << 1 << endl;
}