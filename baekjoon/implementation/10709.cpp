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
void p(char c, char ans[5][62]);
void w(char c, char ans[5][62]);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int h, w, joi[101][101];
    char tmp;
    
    cin >> h >> w;
    
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            joi[i][j] = -1;
            cin >> tmp;
            if(tmp == 'c') {
                joi[i][j] = 0;
            }
        }
    }
    
    for(int col = 2; col <= w; col++) {
        for(int row = 1; row <= h; row++) {
            if(joi[row][col] == -1) {
                if(joi[row][col - 1] != -1)
                    joi[row][col] = joi[row][col - 1] + 1;
            }
        }
    }
    
    for(int row = 1; row <= h; row++) {
        for(int col = 1; col <= w; col++) {
            if(col == 1)
                printf("%d", joi[row][col]);
            else
                printf(" %d", joi[row][col]);
        }
        printf("\n");
    }
}