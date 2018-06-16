#include <iostream>
#include <string>
#include <vector>

using namespace std;

//오버플로우가 날 수 있으므로 long long을 
//정석대로라면 dp로 1부터 채우면 되는데, 500이하 반복이므로
//쭉 올라가는 방식으로 구현

int solution(int num);

int main() {
    int n;
    
    cin >> n;
    
    cout << solution(n) << endl;
    
    return 0;
}

int solution(int n) {
    int answer = 0;
    long long num = n;
    
    while(num > 1) {
        if(num % 2 == 0)
            num /= 2;
        else
            num = (3 * num) + 1;
        
        answer++;
        if(answer > 500) {
            answer = -1;
            break;
        }
    }
    
    return answer;
}