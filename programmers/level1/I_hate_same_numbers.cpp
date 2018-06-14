#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr);

int main() {
    //test 생략
    
    return 0;
}

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int history = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(history != arr[i]) {
            answer.push_back(arr[i]);
            history = arr[i];
        }
    }

    return answer;
}
