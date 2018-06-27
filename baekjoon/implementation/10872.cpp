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
    int N, result = 1;

    cin >> N;
    
    if(N == 0) {
        cout << "1" << endl;
        return;
    }
    
    for(int i = 2; i <= N; i++)
        result *= i;
    cout << result << endl;
}