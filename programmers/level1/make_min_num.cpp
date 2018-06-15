#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B);

int main() {
    //test 생략
    return 0;
}

int solution(vector<int> A, vector<int> B) {
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), [](const int &a, const int &b) -> bool { 
        return a > b; });
    
    for(int i = 0; i < A.size(); i++)
        answer += A[i] * B[i];

    return answer;
}