#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n);
bool is_prime(int n);

int main() {
    int n;
    
    cin >> n;
    
    cout << solution(n) << endl;

    return 0;
}

int solution(int n) {
    int answer = 0;
    bool check[1000001] = {0,};
    
    for(int i = 2; i <= n; i++) {
        if(!check[i]) {
            if(is_prime(i)) {
                for(int j = 2; j * i <= n ; j++) {
                    check[j * i] = true;
                }
            }
        }
    }
    
    for(int i = 2; i <= n; i++) {
        if(!check[i])
            answer++;
    }
    
    return answer;
}

bool is_prime(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    
    return true;
}