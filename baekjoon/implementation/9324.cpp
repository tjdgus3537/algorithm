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
    int ts;
    string m;
    int count[26];
    bool is_ok;
    
    cin >> ts;
    
    while(ts--) {
        cin >> m;
        
        is_ok = true;
        for(int i = 0; i < 26; i++)
            count[i] = 0;
        
        for(int i = 0; i < m.size(); i++) {
            count[m[i] - 'A']++;
            
            if(count[m[i] - 'A'] > 0 && count[m[i] - 'A'] % 3 == 0) {
                if(i == m.size() - 1) {
                    is_ok = false;
                    break;
                }
                if(m[i + 1] != m[i]) {
                    is_ok = false;
                    break;
                }
                else
                    i++;
            }
        }
        
        if(is_ok)
            cout << "OK" << endl;
        else
            cout << "FAKE" << endl;
    }
}