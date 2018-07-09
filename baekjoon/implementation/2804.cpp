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
    string a, b;
    char common;
    int a_pos = -1, b_pos = -1;
    
    cin >> a >> b;
    
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if(a[i] == b[j]) {
                common = a[i];
                a_pos = i;
                b_pos = j;
                break;
            }
        }
        if(a_pos != -1 && b_pos != -1)
            break;
    }
    
    for(int i = 0; i < b.size(); i++) {
        for(int j = 0; j < a.size(); j++) {
            if(i == b_pos)
                break;
            if(j == a_pos)
                cout << b[i];
            else
                cout << ".";
        }
        if(i == b_pos)
            cout << a;
        
        cout << endl;
    }
}
