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
    int n, m, val, ans = 0;
    vector<int> cards;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        cin >> val;
        cards.push_back(val);
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(i == j || j == k || k == i)
                    continue;
                if(cards[i] + cards[j] + cards[k] <= m)
                    ans = max(ans, cards[i] + cards[j] + cards[k]);
            }
        }
    }
    
    cout << ans << endl;
}
