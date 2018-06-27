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
    int day, result = 0, tmp;
    
    cin >> day;
    
    for(int i = 0; i < 5; i++) {
        cin >> tmp;
        if(tmp % 10 == day)
            result++;
    }
    
    cout << result << endl;
}