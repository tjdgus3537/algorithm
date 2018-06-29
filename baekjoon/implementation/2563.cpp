#include <iostream>

using namespace std;

//플레인 스위핑 알고리즘을 사용하면 더 큰 경우에 대해서도 처리 가능하다.
//플레인 스위핑 소개 : http://codedoc.tistory.com/421
//하지만 구현 문제니까 단순하게 풀어보자.

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int n;
    bool paper[100][100] = {0,};
    int x, y, ans = 0;
    
    cin >> n;
    
    while(n--) {
        cin >> x >> y;
        
        for(int i = x; i < x + 10; i++)
            for(int j = y; j < y + 10; j++)
                paper[i][j] = true;
    }
    
    for(int i = 0; i < 100; i++)
        for(int j = 0 ; j < 100; j++)
            if(paper[i][j])
                ans++;
    
    cout << ans << endl;
}
