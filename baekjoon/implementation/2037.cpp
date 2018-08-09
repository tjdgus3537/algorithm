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

// (1차 시도) --> 오답
// (2차 시도)버퍼 문제인가 싶어서 cin.ignore()를 추가해주었다. --> 오답
// (3차 시도) 첫 번째는 무조건 누르는데, 가중치를 주지 않아서 수정함. --> 정답
void solution() {
    int p, w, ans = 0, num[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    int count[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    string s;
    
    cin >> p >> w;
    // 공백까지 읽는 함수.
    // 위에서 cin을 쓰고 개행이 버퍼에 남아있으므로 제거해준다.
    cin.ignore();
    getline(cin, s);
    // 첫 번째는 무조건 누른다.
    ans = count[s[0] - 'A'] * p;
    for(int i = 1; i < s.size(); i++) {
        // 공백은 한 번 누르고 끝
        if(s[i] == ' ') {
            ans += p;
            continue;
        }
        // 내 바로 앞이 나랑 같은 것을 눌러야 할 때는 w를 추가.
        if(num[s[i - 1] - 'A'] == num[s[i] - 'A'])
            ans += w;

        ans += count[s[i] - 'A'] * p;
    }
    
    cout << ans << endl;
}