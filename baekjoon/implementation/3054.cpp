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
    string s;
    char ans[5][62];
    
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 62; j++)
            ans[i][j] = '.';
    
    ans[0][2] = ans[1][1] = ans[1][3] = ans[2][0] = ans[2][4] = ans[3][1] = ans[3][3] = ans[4][2] = '#';
    
    cin >> s;
    
    ans[2][2] = s[0];
    
    for(int i = 1; i < s.size(); i++) {
        if((i + 1) % 3 == 0) {
            ans[2][2 + 4 * i - 2] = ans[2][2 + 4 * i + 2] = ans[1][2 + 4 * i - 1] = ans[1][2 + 4 * i + 1] = ans[3][2 + 4 * i - 1] = ans[3][2 + 4 * i + 1] = ans[0][2 + 4 * i] = ans[4][2 + 4 * i] = '*';
            ans[2][2 + 4 * i] = s[i];
        }
        else {
            ans[2][2 + 4 * i + 2] = ans[1][2 + 4 * i - 1] = ans[1][2 + 4 * i + 1] = ans[3][2 + 4 * i - 1] = ans[3][2 + 4 * i + 1] = ans[0][2 + 4 * i] = ans[4][2 + 4 * i] = '#';
            ans[2][2 + 4 * i] = s[i];
        }
    }
    
    for(int i = 0; i < 5; i++) {
        ans[i][2 + 4 * (s.size() - 1) + 3] = 0;
        printf("%s\n", ans[i]);
    }
}