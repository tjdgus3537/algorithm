#include <iostream>

using namespace std;

//cout이 printf에 비해 압도적으로 느림!

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
    
    return 0;
}

void solution() {
    int N, X;
    int tmp;
    
    cin >> N >> X;
    
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        if(X > tmp)
            cout << tmp << " ";
    }
    
}