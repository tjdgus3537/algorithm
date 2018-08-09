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

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

// (1차 시도)단순 구현 --> 시간 초과. 
// (2차 시도)각 인덱스까지의 최소 반지름 값을 저장한 뒤, 뒤에서 부터 탐색한다. --> 80%에서 오답 발생.
// (3차 시도)반죽의 크기가 오븐의 최대 크기 보다 큰 경우를 생각해서 예외 처리. --> 시간 초과 --> 구현 실수였음.
// (4차 시도)위의 구현 실수를 수정. --> 성공
void solution() {
    int d, n, oven[300001], dough[300001], min_radius[300001];
    int ans;
    
    cin >> d >> n;
    ans = d;
    
    for(int i = 1; i <= d; i++)
        cin >> oven[i];
    
    for(int i = 1; i <= n; i++)
        cin >> dough[i];
    
    min_radius[0] = oven[0] = 1000000001;
    min_radius[1] = oven[1];
    
    for(int i = 2; i <= d; i++)
        min_radius[i] = min(min_radius[i - 1], oven[i]);
    
    // 각 반죽에 대한 순회
    for(int i = 1; i <= n; i++) {
        //반죽 크기가 오븐의 최대 크기 보다 큰 경우.
        if(dough[i] > min_radius[1]) {
            cout << 0 << endl;
            return;
        }
        for(; ans >= 1; ans--) {
            // 반죽이 들어가는 시점.
            if(dough[i] <= min_radius[ans]) {
                // 현재 위치에는 반죽이 들어갔으니까 하나 줄여준다.
                ans--;
                break;
            }
        }
        // 반죽이 아직 다 안 들어 갔는데 오븐이 꽉 찬 경우
        if(i < n && ans <= 0) {
            cout << 0 << endl;
            return;
        }
    }
    
    // 반죽이 다 들어간 경우
    cout << ans + 1 << endl;
}