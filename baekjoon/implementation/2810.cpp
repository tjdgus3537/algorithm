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
//gcd 제공
#include <numeric>

using namespace std;

//컵홀더의 개수가 아니라 컵을 컵홀더에 놓을 수 있는 최대 사람의 수이다.
//문제를 잘 읽자
void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int ans = 1, n;
    string s;
    
    cin >> n >> s;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == 'S')
            ans++;
        else {
            ans++;
            i++;
        }
    }
    cout << min(ans, n) << endl;
}