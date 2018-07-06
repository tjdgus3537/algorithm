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

//문제의 범위를 잘 읽자. n이 100인줄 알고 한참 삽질했다.

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int count[101], tmp;
    vector<int> input;
    int n, ans[201] = {0,};
    
    cin >> n;
    
    for(int i = 0 ; i < n; i++) {
        cin >> tmp;
        input.push_back(tmp);
        cin >> tmp;
        input.push_back(tmp);
        cin >> tmp;
        input.push_back(tmp);
    }
    
    for(int i = 0; i < 3; i++) {
        //초기화
        for(int j = 1; j <= 100; j++)
            count[j] = 0;
        
        //중복 찾기
        for(int j = 0; j < input.size(); j++) {
            if(j % 3 == i)
                count[input[j]]++;
        }
        
        //플레이어별 점수 계산 더하기
        for(int j = 0; j < input.size(); j++) {
            //게임 회차
            if(j % 3 == i) {
                if(count[input[j]] == 1)
                    ans[(int)(j / 3)] += input[j];
            }
        }
    }
    
    for(int i = 0; i < n; i++)
        cout << ans[i] << endl;
}
