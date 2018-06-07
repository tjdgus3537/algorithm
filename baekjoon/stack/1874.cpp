#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//input의 reverse에 대해 stack을 사용하여 역순정렬 출력이 가능한지 살펴보는 문제와 같다.
//주의 : endl을 사용하면 버퍼를 비우기 때문에 느리다. "\n"을 사용하여 출력해야 한다.

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif

    stack<int> stack;
    vector<char> ans;
    //n과 input은 입력되는 수
    //N은 현재 역순으로 정렬해야 할 값들 중 최댓값
    int n, N, input[100001] = {0,};
 
    cin >> n;
    
    N = n;

    for(int i = n; i >= 1; i--)
        cin >> input[i];


    for(int i = 1; i <= n; i++) {
        //input이 현재 출력해야할 값과 동일할 경우 push후 바로 pop
        //그리고 정렬해야 하는 최댓값은 1 감소
        if(input[i] == N) {
            N--;
            ans.push_back('-');
            ans.push_back('+');
            while(!stack.empty() && stack.top() == N) {
                N--;
                ans.push_back('+');
                stack.pop();
                if(stack.empty())
                    break;
            }
        }
        else {
            ans.push_back('-');
            stack.push(input[i]);
        }
    }
    if(stack.empty()) {
        for(int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i] << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
}