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
    int a[1000], b[1000], vote[1000] = {0,}, n, m;
    int max_vote = 0;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(b[i] >= a[j]) {
                vote[j]++;
                break;
            }
        }
    }
    
    max_vote = vote[0];
    for(int i = 0; i < n; i++)
        max_vote = max(max_vote, vote[i]);
    
    for(int i = 0; i < n; i++) {
        if(max_vote == vote[i]) {
            cout << i + 1 << endl;
            break;
        }
    }
}