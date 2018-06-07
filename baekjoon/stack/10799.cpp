#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
 
    string str;
    stack<char> stack;
    int ans = 0;

    cin >> str;
    
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(')
            stack.push('(');
        else if(str[i] == ')'){
            //레이저인 경우
            //레이저인 경우 아직 끝나지 않은 쇠막대를 모두 자르기 때문에(stack size - 1 만큼) 쇠막대의 끝이 갱신된다고 생각하면 된다.
            if(str[i - 1] == '(') {
                ans += stack.size() - 1;
            }
            //쇠막대의 끝인 경우 해당 쇠막대를 세어주어야 한다.
            else {
                ans++;
            }
            stack.pop();
        }
    }
    
    cout << ans << endl;
}