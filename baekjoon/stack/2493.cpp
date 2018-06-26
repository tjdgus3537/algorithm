#include <iostream>
#include <stack>
#include <string>
#include <utility>
#include <cstdio>

using namespace std;

//O(N)으로 해결.
//주의 : 입출력 양이 많기 때문에 cin과 cout을 사용할 경우 시간초과.

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
    
    return 0;
}

void solution() {
    int N;
    //<위치, 높이>
    stack<pair<int, int>> tops;
    int h;
    
    scanf("%d", &N);
    
    scanf("%d", &h);
    //첫 번째는 무조건 답이 0
    printf("%d ", 0);
    tops.push(make_pair(1, h));
    
    for(int i = 2 ; i <= N; i++) {
        scanf("%d", &h);
        
        //현재 높이 보다 stack top()의 높이가 높은 경우 stack top()의 위치를 출력
        if(tops.top().second > h) {
            printf("%d ", tops.top().first);
        }
        //현재 높이 보다 stack top()의 높이가 낮은 경우 현재 보다 높은 것이 나타날 때까지 pop()
        //이 때 스택이 비게 되면 0을 출력
        else {
            while(!tops.empty() && tops.top().second < h)
                tops.pop();
            
            if(tops.empty())
                printf("%d ", 0);
            else
                printf("%d ", tops.top().first);
        }
        //현재 위치와 높이를 스택에 저장
        tops.push(make_pair(i, h));
    }
}