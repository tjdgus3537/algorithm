#include <iostream>
#include <algorithm>
#include <vector>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>

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
    vector<pair<int, int> > score;
    int total = 0, tmp;
    vector<int> no;

    for(int i = 1; i <= 8; i++) {
        cin >> tmp;
        score.push_back(make_pair(tmp, i));
    }
    
    sort(score.begin(), score.end(), greater< pair<int, int> >());

    for(int i = 0; i < 5; i++) {
        total += score[i].first;
        no.push_back(score[i].second);
    }
    
    cout << total << endl;
    
    sort(no.begin(), no.end());
    
    for(int i = 0; i < 5; i++)
        cout << no[i] << " ";
}
