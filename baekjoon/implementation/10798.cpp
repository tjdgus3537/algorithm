#include <iostream>
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

void solution() {
    string words[5];
    
    for(int i = 0; i < 5; i++)
        cin >> words[i];
        
    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 5; j++) {
            if(words[j].size() - 1 >= i) {
                cout << words[j][i];
            }
        }
    }
}