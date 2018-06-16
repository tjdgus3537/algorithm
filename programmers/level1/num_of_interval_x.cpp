#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n);

int main() {
    //test 생략
    return 0;
}

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    for(int i = 0; i < n; i++)
        answer.push_back(x + x * i);
    
    return answer;
}
