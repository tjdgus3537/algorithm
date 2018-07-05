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

//바꿔 먹은걸 또 새로 바꿔 먹을 수 있다는 것이 포인트.
//그리고 새로 생긴 병을 기존 병이랑 더해야 함.
//생각 없이 대충했다가 4번 틀림. 잘 생각해서 구현해야 함

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int e, f, c;
    int ans = 0, bottle, new_bottle;
    
    cin >> e >> f >> c;
    
    bottle = e + f;
    
    while(bottle >= c) {
        new_bottle = bottle / c;
        
        ans += new_bottle;
        //병 - 사라진 병 + 새로 생긴 병
        bottle = bottle - (new_bottle * c) + new_bottle;
    }
    
    cout << ans << endl;
}
