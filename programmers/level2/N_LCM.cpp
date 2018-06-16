#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr);
int gcd(int a, int b);

int main() {
    //test 생략
    return 0;
}

int solution(vector<int> arr) {
    int answer = arr[0];
    int g;
    
    for(int i = 1; i < arr.size(); i++) {
        g = gcd(answer, arr[i]);
        answer = answer * arr[i] / g;
    }
    
    return answer;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}