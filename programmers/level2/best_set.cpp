#include <iostream>
#include <string>
#include <vector>

//반올림은 0.5 더해서 floor 사용
//참고 : http://gurumee92.tistory.com/47?category=739599
//O(NlogN)으로 풀어도 시간초과 뜸. O(N)으로 풀어야 함.

using namespace std;

vector<int> solution(int n, int s);

int main() {
    //test 생략
    return 0;
}

vector<int> solution(int n, int s) {
    vector<int> answer;
   
    if(n > s) {
        answer.push_back(-1);
        return answer;
    }
    
    // s/n을 n개 만큼 넣어주고
    for(int i = 0 ; i < n; i++)
        answer.push_back(s / n);
    
    s -= (s / n) * n;
    // 합과의 차이만큼 뒤에서 부터 1을 더한다.
    for(int i = answer.size() - 1; s-- ; i--)
        answer[i]++;
  
    return answer;
}