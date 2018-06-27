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
    int A, B, C, mul;
    int digits[10] = {0,};
    
    cin >> A >> B >> C;
    
    mul = A * B * C;
    
    while(mul > 0) {
        digits[mul % 10]++;
        mul /= 10;
    }
    
    for(int i = 0 ; i <= 9; i++)
        cout << digits[i] << endl;
}