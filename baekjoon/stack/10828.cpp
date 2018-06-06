#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    int N;
    string command;
    stack<int> stack;
    
    cin >> N;
 
    while(N--) {
        cin >> command;
        if(command == "push") {
            int n;
            cin >> n;
            stack.push(n);
        }
        else if(command == "pop") {
            if(stack.empty())
                cout << "-1" << endl;
            else {
                cout << stack.top() << endl;
                stack.pop();
            }
        }
        else if(command == "size") {
            cout << stack.size() << endl;
        }
        else if(command == "empty") {
            if(stack.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if(command == "top") {
            if(stack.empty())
                cout << "-1" << endl;
            else {
                cout << stack.top() << endl;
            }
        }
    }
}
