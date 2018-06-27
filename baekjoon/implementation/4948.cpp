#include <iostream>

using namespace std;

void solution(int n);
bool is_prime(int n);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    int n;
    
    do {
        cin >> n;
        solution(n);
    } while(n > 0);
        
    return 0;
}

void solution(int n) {
    int result = 0;
    
    if(n == 0)
        return;
    
    for(int i = n + 1; i <= 2 * n; i++)
        if(is_prime(i))
            result++;
    
    cout << result << endl;
}

bool is_prime(int n) {
    if(n == 1)
        return false;
        
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    
    return true;
}