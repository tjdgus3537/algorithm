#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    int T;
    string str;
    stack<char> stack;
    bool is_ans;

    cin >> T;
 
    while(T--) {
        //초기화
        is_ans = true;
        cin >> str;
        while(!stack.empty())
            stack.pop();
        
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == '(')
                stack.push('(');
            else if(str[i] == ')'){
                // '('가 들어온 상태로 ')'가 들어와서 짝이 맞는 경우
                if(!stack.empty())
                    stack.pop();
                // '('가 들어오지 않은 상태로 ')'가 들어온 경우               
                else {    
                    is_ans = false;
                    break;
                }
            }
        }
        
        // '('가 들어왔지만 ')'가 들어오지 않은 경우
        if(!stack.empty())
            is_ans = false;
            
        if(is_ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
