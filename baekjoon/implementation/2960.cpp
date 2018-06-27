#include <iostream>

using namespace std;

void solution();
bool is_prime(int n);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int N, K;
    bool sieve[1001] = {0,};
    
    cin >> N >> K;
    
    for(int i = 2; i <= N; i++) {
        if(is_prime(i)) {
            for(int j = 1; j <= N / i; j++) {
                if(!sieve[i * j]) {
                    sieve[i * j] = true;
                    K--;
                    if(K == 0) {
                        cout << i * j << endl;
                        return;
                    }
                }
            }
        }
    }
}

bool is_prime(int n) {
    if(n == 1)
        return false;
        
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    
    return true;
}