#include <vector>
#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int a, int b);

int main() {
    long long a, b;
    
    cin >> a >> b;

    cout << solution(a, b) << endl;

    return 0;
}

long long solution(int a, int b) {
    long long answer = 0;
    long long sig_a, sig_b, sum_a, sum_b;
    
    sum_a = ((long long)abs(a) * ((long long)abs(a) + 1)) / 2;
    sum_b = ((long long)abs(b) * ((long long)abs(b) + 1)) / 2;
    
    if(a > 0)
        sig_a = 1;     
    else if(a == 0)
        sig_a = 0;
    else
        sig_a = -1;

    if(b > 0)
        sig_b = 1;
    else if(b == 0)
        sig_b = 0;
    else
        sig_b = -1;    
    
    if(sig_a * sig_b <= 0)
        answer = sum_a * sig_a + sum_b * sig_b;
    else
        answer = abs(sum_a - sum_b) * sig_a + min(abs(a), abs(b)) * sig_a;
    
    return answer;
}