#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(long long n);

int main() {
    long long n;
    
    cin >> n;
    
    cout << solution(n) << endl;
    
    return 0;
}

long long solution(long long n) {
    long long answer = 0;
    int num[10] = {0,};
    
    while(n > 0) {
        num[n % 10]++;
        n /= 10;
    }
    
    for(long long i = 9; i >= 0; i--) {
        for(long long j = 0; j < num[i]; j++) {
            answer += i;
            answer *= 10;
        }
    }
     
    return answer / 10;
}
