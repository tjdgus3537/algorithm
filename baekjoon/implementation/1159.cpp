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
    int n;
    string player;
    int count[26] = {0,};
    bool is_exist = false;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> player;
        count[player[0] - 'a']++;
    }
    
    for(int i = 0; i < 26; i++)
        if(count[i] >= 5) {
            cout << (char)('a' + i);
            is_exist = true;
        }
    
    if(!is_exist)
        cout << "PREDAJA";
        
    cout << endl;
}
