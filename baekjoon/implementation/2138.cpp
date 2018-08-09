#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>
#include <cstdio>
#include <string>

using namespace std;

void solution();
void toggle(char &c);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int n;
    string before, after;
    
    cin >> n >> before >> after;

    // 첫 번째를 눌렀을 때, 안 눌렀을 때에 대한 경우로 나눠서 문제를 푼다.
    // 스위치를 누르는 순서에는 상관이 없다(combination)
    // 1번 스위치를 배제하면, 1번 전구는 2번 스위치에만 영향을 받는다.
    // 1, 2번 스위치가 결정되면 2번 전구는 3번 전구에만 영향을 받는다.
    // 쭉 진행하면 N-1 번째 전구는 N 번째 스위치에 의해서만 영향을 받는다.
    
    string tmp = before;
    int count = 0;
    
    // 첫 번째 스위치를 누르지 않은 경우.
    for(int i = 1; i < tmp.size(); i++) {
        // i - 1 번째가 정답과 다르면 현재 스위치를 누른다.
        if(tmp[i - 1] != after[i - 1]) {
            count++;
            //인접한 세 개의 전구 상태가 변경된다.
            toggle(tmp[i - 1]);
            toggle(tmp[i]);
            toggle(tmp[i + 1]);
        }
    }
    if(tmp[n - 1] == after[n - 1]) {
        // 원하는 상태가 되었다.
        cout << count << endl;
        return;
    }
    
    //이 곳으로 넘어온 경우, 원하는 상태에 도달하지 못 한 것이다.
    count = 1;
    
    //함수가 중복되는 모양새라 코드가 예쁘지 않다.

    tmp = before;
    // 첫 번째 스위치를 누른 경우.
    toggle(tmp[0]);
    toggle(tmp[1]);
    
    for(int i = 1; i < tmp.size(); i++) {
        // i - 1 번째가 정답과 다르면 현재 스위치를 누른다.
        if(tmp[i - 1] != after[i - 1]) {
            count++;
            //인접한 세 개의 전구 상태가 변경된다.
            toggle(tmp[i - 1]);
            toggle(tmp[i]);
            toggle(tmp[i + 1]);
        }
    }
    if(tmp[n - 1] == after[n - 1]) {
        // 원하는 상태가 되었다.
        cout << count << endl;
        return;
    }
    
    //이곳 까지 온 경우, 원하는 상태에 도달할 수 없는 경우이다.
    
    cout << -1 << endl;
}

void toggle(char &c) {
    if(c == '0')
        c = '1';
    else
        c = '0';
}
