#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n);

int main() {
    //test 생략
    return 0;
}

string solution(int n) {
    string answer = "";
    char num124[3] = {'1', '2', '4'};
    
    while(n > 0) {
        n--;
        answer.push_back(num124[n % 3]);
        n -= (n % 3);
        n /= 3;
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}