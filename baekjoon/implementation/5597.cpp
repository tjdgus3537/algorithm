#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
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
    bool submission[31] = {0,};
    int tmp;
    vector<int> criminal;
    
    for(int i = 0; i < 28; i++) {
        cin >> tmp;
        submission[tmp] = true;
    }
    
    for(int i = 1; i <= 30; i++)
        if(!submission[i])
            criminal.push_back(i);
    
    cout << min(criminal[0], criminal[1]) << endl;
    cout << max(criminal[0], criminal[1]) << endl;
}
