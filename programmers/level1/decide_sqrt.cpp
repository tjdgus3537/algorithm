#include <iostream>
#include <string>
#include <vector>
#include <cmath>

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

    if(abs((double)sqrtl(n) - (long long)sqrtl(n)) < 0.00000001)
        answer = pow((sqrtl(n) + 1), 2);
    else
        answer = -1;
        
    return answer;
}
