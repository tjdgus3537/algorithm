#include <iostream>
#include <cmath>

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
    int min_buger = 2000, min_beverage = 2000, tmp;
    
    for(int i = 0; i < 3; i++) {
        cin >> tmp;
        min_buger = min(min_buger, tmp);
    }
    for(int i = 0; i < 2; i++) {
        cin >> tmp;
        min_beverage = min(min_beverage, tmp);
    }
    
    cout << min_buger + min_beverage - 50 << endl;
}