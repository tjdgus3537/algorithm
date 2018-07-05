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
    int n, m, ans = 0;
    vector<int> list[501];
    bool invitation_target[501] = {0,};
    int a, b;
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        
        list[a].push_back(b);
        list[b].push_back(a);
    }
 
    for(int i = 0; i < list[1].size(); i++)
        invitation_target[list[1][i]] = true;
        
    for(int i = 0 ; i < list[1].size(); i++) {
        for(int j = 0; j < list[list[1][i]].size(); j++) {
            invitation_target[list[list[1][i]][j]] = true;
        }
    }
    
    for(int i = 2; i <= n; i++)
        if(invitation_target[i])
            ans++;
            
    cout << ans << endl;
}
