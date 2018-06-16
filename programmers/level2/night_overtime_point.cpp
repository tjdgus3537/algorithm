#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works);

int main() {
    //test 생략
    return 0;
}

long long solution(int n, vector<int> works) {
    long long answer = 0;
    long long work;
    priority_queue<long long> pq;
    
    for(int i = 0; i < works.size(); i++)
        pq.push(works[i]);
    
    while(n > 0 && !pq.empty()) {
        n--;
        work = pq.top();
        pq.pop();
        work--;
        if(work > 0)
            pq.push(work);
    }
    
    while(!pq.empty()) {
        answer += pq.top() * pq.top();
        pq.pop();
    }
    
    return answer;
}