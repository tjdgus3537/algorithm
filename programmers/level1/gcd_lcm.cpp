#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m);
int gcd(int a, int b);

int main() {
    //test 생략
    return 0;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int g = gcd(n, m);
    
    answer.push_back(g);
    answer.push_back(n * m / g);
    
    return answer;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}