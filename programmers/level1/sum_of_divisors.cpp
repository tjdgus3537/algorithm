#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n);

int main() {
    int n;
    
    cin >> n;
    
    cout << solution(n) << endl;

    return 0;
}

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            answer += i;
            if(i != (n / i))
                answer += (n / i);
        }
    }
    
    return answer;
}
