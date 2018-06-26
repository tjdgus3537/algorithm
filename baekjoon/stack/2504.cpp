#include <iostream>
#include <stack>
#include <string>
using namespace std;

int solution(string str);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    string str;
    
    cin >> str;
    
    int ans = solution(str);
    
    cout << ans << endl;
    
    return 0;
}

int solution(string str) {
    //괄호의 쌍이 완전한지 검사한다.
    stack<char> check;
    
    for(int i = 0 ; i < str.size(); i++) {
        if(str[i] == '(')
            check.push('(');
        else if(str[i] == '[')
            check.push('[');
        else if(str[i] == ')') {
            if(check.empty())
                return 0;
            if(check.top() != '(')
                return 0;
            check.pop();
        }
        else if(str[i] == ']'){
            if(check.empty())
                return 0;
            if(check.top() != '[')
                return 0;
            check.pop();
        }
    }
    
    if(!check.empty())
        return 0;

    //여기까지 왔으면 괄호 쌍의 문제는 없다. 따라서 (], [) 와 같은 경우는 배제한다.
    
    stack<string> str_stack;
    string top_value;
    
    for(int i = 0; i < str.size(); i++) {
        //여는 괄호면 스택에 넣는다.
        if(str[i] == '(')
            str_stack.push("(");
        else if(str[i] == '[')
            str_stack.push("[");
        //닫는 괄호일 경우
        else if(str[i] == ')') {
            top_value = str_stack.top();
            str_stack.pop();
            //top이 여는 괄호면 숫자를 넣는다.
            if(top_value == "(")
                str_stack.push("2");
            //top이 숫자이면 여는 괄호가 나올 때까지 숫자들을 더한 뒤 수를 곱해서 스택에 넣는다.
            else {
                int tmp = stoi(top_value);
                while(!str_stack.empty() && str_stack.top() != "(" && str_stack.top() != "[") {
                    top_value = str_stack.top();
                    tmp += stoi(top_value);
                    str_stack.pop();
                }
                str_stack.pop();
                str_stack.push(to_string(2 * tmp));
            }
        }
        else if(str[i] == ']'){
            top_value = str_stack.top();
            str_stack.pop();
            if(top_value == "[")
                str_stack.push("3");
            else {
                int tmp = stoi(top_value);
                while(!str_stack.empty() && str_stack.top() != "(" && str_stack.top() != "[") {
                    top_value = str_stack.top();
                    tmp += stoi(top_value);
                    str_stack.pop();
                }
                str_stack.pop();
                str_stack.push(to_string(3 * tmp));
            }
        }
    }
    
    int ans = stoi(str_stack.top());
    str_stack.pop();
    
    //남은 값들을 모두 더한다
    while(!str_stack.empty()) {
        ans += stoi(str_stack.top());
        str_stack.pop();
    }
    
    return ans;
}