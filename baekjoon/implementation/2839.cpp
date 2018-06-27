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
    int N, three = 0, five = 0;
    
    cin >> N;
    
    //i는 five[5kg]의 개수
    for(int i = N / 5; i >= 0; i--) {
        for(int j = 0; 5 * i + 3 * j <= N; j++) {
            if(5 * i + 3 * j == N) {
                five = i;
                three = j;
                break;
            }
        }
        if(five != 0 || three != 0)
            break;
    }
    
    if(five + three == 0)
        cout << -1 << endl;
    else
        cout << five + three << endl;
}