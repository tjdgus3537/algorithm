#include <iostream>

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
    int coins[6] = {500, 100, 50, 10, 5, 1};
    int cost, ans = 0;
    
    cin >> cost;
    
    cost = 1000 - cost;
    
    for(int i = 0; i < 6; i++) {
        if(cost / coins[i] > 0) {
            ans += cost / coins[i];
            cost -= (cost / coins[i]) * coins[i];
        }
    }
    
    cout << ans << endl;
}
