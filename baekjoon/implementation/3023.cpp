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

//scanf로 문자 하나씩 받는게 어려워서 결국 cin씀.

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    char input[51][51] = {0,}, card[101][101] = {0,};
    int r, c, a, b;
    
    cin >> r >> c;
    
    for(int i = 1; i <= r; i++)
        for(int j = 1; j <= c; j++)
            cin >> input[i][j];
    
    cin >> a >> b;
    
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            card[i][j] = input[i][j];
            card[i][2 * c - (j - 1)] = input[i][j];
            card[2 * r - (i - 1)][j] = input[i][j];
            card[2 * r - (i - 1)][2 * c - (j - 1)] = input[i][j];
        }
    }
    
    if(card[a][b] == '#')
        card[a][b] = '.';
    else if(card[a][b] == '.')
        card[a][b] = '#';

    for(int i = 1; i <= 2 * r; i++) {
        for(int j = 1; j <= 2 * c; j++) {
            printf("%c", card[i][j]);
        }
        printf("\n");
    }
}
