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

//반복문 밖에 있는 시작값을 처리 안해줘서 1번 틀림

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int sum[10] = {0,}, val;
    int dif[10] = {0,};
    int min_dif;
    
    cin >> sum[0];
    dif[0] = abs(100 - sum[0]);
    min_dif = dif[0];
    
    for(int i = 1; i < 10; i++) {
        cin >> val;
        sum[i] = sum[i - 1] + val;
        dif[i] = abs(100 - sum[i]);
        min_dif = min(min_dif, dif[i]);
    }
    
    for(int i = 9; i >= 0; i--) {
        if(dif[i] == min_dif) {
            cout << sum[i] << endl;
            break;
        }
    }
}
