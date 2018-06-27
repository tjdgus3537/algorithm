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
    int total = 0, tmp;
    
    for(int i = 0 ; i < 5; i++) {
        cin >> tmp;
        if(tmp >= 40)
            total += tmp;
        else
            total += 40;
    }
    
    cout << total / 5 << endl;
}