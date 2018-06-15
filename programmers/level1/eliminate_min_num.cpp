#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>

//algorithm 헤더에 min_element라는 함수가 있음.

using namespace std;

vector<int> solution(vector<int> arr);

int main() {
    //test 생략
    return 0;
}

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_num = INT_MAX;
    
    for(int i = 0; i < arr.size(); i++)
        min_num = min(min_num, arr[i]);
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != min_num)
            answer.push_back(arr[i]);
    }
    
    if(answer.empty())
        answer.push_back(-1);
    
    return answer;
}
