#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//참고 : http://gurumee92.tistory.com/64
// ########## 보충 설명을 더 적도록 하자!! #############################

using namespace std;

int solution(int n, vector<int> money);

int main() {
    //test 생략
    return 0;
}

//개념적으로 2차원 배열을 사용, 실제 구현에는 1차원 배열로 사용
//행은 money의 액수, 열에는 총 금액을 의미한다.
//예를 들어 동전을 2,3,5원을 쓴다면 1행은 2원만 사용, 2행은 2,3원을 사용
//3행은 2,3,5원을 모두 사용
int solution(int n, vector<int> money) {
    int dp[100001] = {0,};
    
    //동전을 크기순으로 사용하기 위해 정렬
    sort(money.begin(), money.end());
    
    //문제를 풀기 위해 초기화. 0만 더해지지 않게 1로 설정.
    dp[0] = 1;
    
    for(int i = 1; i <= n; i++) {
        if(i % money[0] == 0)
            dp[i] = 1;
    }
    
    for(int i = 1; i < money.size(); i++) {
        for(int j = 1 ; j <= n; j++) {
            // 가진 동전이 현재 계산하는 총액보다 클 경우 해당 동전은 사용 의미가 없기 때문에
            // 동전의 액면가가 총액보다 같거나 작은 경우에만 계산한다.
            if(j >= money[i]) {
                // 새로운 동전을 고려 안 했을 때 + 고려 했을 떄
                dp[j] = (dp[j] + dp[j - money[i]]) % 1000000007; 
            }
        }
    }
    
    return dp[n];
}