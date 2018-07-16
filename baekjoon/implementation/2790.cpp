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
    int n, score, ans = 0, first = 1, max_num = 0;
    vector<int> scores;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> score;
        scores.push_back(score);
    }
    sort(scores.begin(), scores.end());
    reverse(scores.begin(), scores.end());
 
    max_num = scores[0] + 1;
    for(int i = 1; i < scores.size(); i++)
        max_num = max(max_num, scores[i] + i + 1);

    ans = 1;
    for(int i = 1; i < scores.size(); i++)
        if(scores[i] + n >= max_num)
            ans++;
    
    cout << ans << endl;
}