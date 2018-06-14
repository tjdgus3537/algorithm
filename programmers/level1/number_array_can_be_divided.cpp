#include <vector>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor);

int main() {
    //test 생략

    return 0;
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    priority_queue <int, vector<int>, greater<int> > pq;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % divisor == 0)
            pq.push(arr[i]);
    }

    if(pq.empty())
       pq.push(-1);

    while(!pq.empty()) {
        answer.push_back(pq.top());
        pq.pop();
    }

    return answer;
}