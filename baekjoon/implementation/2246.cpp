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

//후보지 보다 가깝고 싼 콘도가 있는 경우만 불가능 하다.
void solution() {
    vector<pair <int, int> > condo;
    int n, ans = 0, d, c;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> d >> c;
        condo.push_back(make_pair(d, c));
    }
        
    ans = n;
    for(int i = 0; i < condo.size(); i++) {
        for(int j = 0; j < condo.size(); j++) {
            if(i == j)
                continue;
            if(condo[i].first >= condo[j].first && condo[i].second >= condo[j].second) {
                ans--;
                break;
            }
        }
    }
    
    cout << ans << endl;
}