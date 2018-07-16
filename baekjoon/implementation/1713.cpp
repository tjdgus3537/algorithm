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
    int n, recommend, student;
    //추천수, 시간, 학생번호
    vector< pair<int, pair<int , int> > > frame;
    
    cin >> n >> recommend;
    
    while(recommend--) {
        cin >> student;
        
        if(frame.empty()) {
            frame.push_back(make_pair(1, make_pair(-recommend, student) ));
            continue;
        }
        
        int idx;
        for(idx = 0; idx < frame.size(); idx++) {
            if(frame[idx].second.second == student) {
                frame[idx].first++;
                break;
            }
        }
        if(idx == frame.size()) {
            if(frame.size() == n)
                frame[frame.size() - 1] = make_pair(1, make_pair(-recommend, student) );
            else
                frame.push_back(make_pair(1, make_pair(-recommend, student) ));
        }
        
        sort(frame.begin(), frame.end(), greater< pair<int, pair<int , int> > >());
    }
    
    vector<int> ans;
    
    for(int i = 0; i < n; i++)
        ans.push_back(frame[i].second.second);
    
    sort(ans.begin(), ans.end());
    
    for(int i = 0; i < frame.size(); i++)
        cout << ans[i] << " ";
}