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
void solution(int n, long long k);
void solution(int n, vector<int> v);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int n, small;
    long long k;
    vector<int> v;
    
    cin >> n >> small;
    
    if(small == 1) {
        cin >> k;
        solution(n, k);
    }
    else if(small == 2) {
        int tmp;
        
        for(int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        solution(n, v);
    }
}

//프로그래머스 how_to_stand_line code
void solution(int n, long long k) {
    vector<int> answer;
    long long fact[21] = {0,};
    long long x;
    int N = n;
    vector<int> people;
    
    for(int i = 1; i <= n; i++)
        people.push_back(i);
        
    fact[0] = 1;
    
    for(int i = 1 ; i <= 20; i++)
        fact[i] = fact[i - 1] * i;
    
    while(k > 0) {
        
        //다 첫 번째 열거
        if(k == 1) {
            x = 0;
            while(!people.empty()) {
                answer.push_back(people[x]);
                people.erase(people.begin());
            }
            break;
        }
        
        x = (k - 1) / fact[n - 1];
        
        answer.push_back(people[x]);
        people.erase(people.begin() + x);

        k -= fact[n - 1] * x;
        n--;
    }
    
    for(int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
}

void solution(int n, vector<int> v) {
    long long fact[21] = {0,};
    long long answer = 1;
    
    fact[0] = 1;
    
    for(int i = 1 ; i <= 20; i++)
        fact[i] = fact[i - 1] * i;
    
    //answer 초깃값은 1
    //맨 앞이 x라고 하자
    //x가 1이면 1을 삭제하고, 다른 수를 1씩 뺀다.
    //x가 1이 아니면, 해당 수를 삭제하고, x 보다 큰 수를 1씩 뺀다.
    //그 후 (v.size() - 1)! * (x - 1)을 answer에 더한다.
    
    while(!v.empty()) {
        if(v[0] == 1) {
            v.erase(v.begin());
            if(v.empty())
                break;
            for(int i = 0; i < v.size(); i++)
                v[i]--;
        }
        else {
            answer += fact[v.size() - 1] * (v[0] - 1);
            for(int i = 1; i < v.size(); i++)
                if(v[i] > v[0])
                    v[i]--;
            v.erase(v.begin());
        }
    }

    cout << answer << endl;
}