#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>
#include <cstdio>

// 금메달, 은메달, 동메달로 나누면 if else문이 복잡해지니까
// 가중치를 줘서 하나의 변수로 해결

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
    vector< pair<long long, int> > nation;
    int no, tmp_g, tmp_s, tmp_b;
    long long tmp_score;
    int n, k, ans;
    
    scanf("%d %d", &n, &k);
    
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &no, &tmp_g, &tmp_s, &tmp_b);
        tmp_score = (long long)tmp_g * 10000000 * 10000000 + (long long)tmp_s * 10000000 + (long long)tmp_b;
        nation.push_back(make_pair(tmp_score, no));
    }
    
    sort(nation.begin(), nation.end(), greater< pair<long long, int > >());
    
    for(int i = 0; i < n; i++) {
        if(nation[i].second == k) {
            ans = i;
            break;
        }
    }
    
    for(int i = ans - 1; i >= 0; i--) {
        if(nation[ans].first == nation[i].first)
            ans = i;
        else
            break;
    }
    
    printf("%d\n", ans + 1);
}
