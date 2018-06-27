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
    long long S;
    int N = 0, element = 1;
    
    cin >> S;
    
    while(S > 0) {
        if(S < element)
            break;
        
        S -= element;
        element++;
        N++;
    }
    
    cout << N << endl;
}
