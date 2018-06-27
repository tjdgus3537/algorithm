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
    int total, tmp;
    
    cin >> total;
    
    for(int i = 0; i < 9; i++) {
        cin >> tmp;
        total -= tmp;
    }
    
    cout << total << endl;
}