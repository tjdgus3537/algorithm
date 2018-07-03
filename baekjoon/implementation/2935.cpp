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
    string a, b, op;
    //0의 개수
    int zero_a, zero_b;
    
    cin >> a >> op >> b;
    
    zero_a = a.size() - 1;
    zero_b = b.size() - 1;
    
    if(op == "*") {
        cout << "1";
        for(int i = 0; i < zero_a + zero_b; i++)
            cout << "0";
    }
    else {
        if(zero_a == zero_b) {
            cout << "2";
            for(int i = 0; i < zero_a; i++)
                cout << "0";
        }
        else {
            int big = max(zero_a, zero_b);
            int small = min(zero_a, zero_b);
            cout << "1";
            for(int i = 0; i < big; i++) {
                if(big - small == i + 1)
                    cout << "1";
                else
                    cout << "0";
            }
        }
    }
}
