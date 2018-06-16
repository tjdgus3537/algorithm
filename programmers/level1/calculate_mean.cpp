#include <iostream>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr);

int main() {
    //test 생략
    return 0;
}

double solution(vector<int> arr) {
    double answer = 0;
    
    for(int i = 0; i < arr.size(); i++)
        answer += arr[i];
    
    return answer / arr.size();
}