#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n);

int main() {
    //test 생략
    return 0;
}

int solution(int n) {
    int answer = 0;
    int count[10001] = {0,};
    int sum;
    
    for(int i = 1 ; i <= n; i++) {
        sum = 0;
        for(int j = i; j <= n; j++) {
            sum += j;
            if(sum > n)
                break;
            count[sum]++;
        }
    }
    
    return count[n];
}