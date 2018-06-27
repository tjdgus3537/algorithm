#include <iostream>

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
    string result[5] = {"E", "A", "B", "C", "D"};
    int bae;
    int tmp;
    
    for(int i = 0; i < 3; i++) {
        bae = 0;
        for(int j = 0; j < 4; j++) {
            cin >> tmp;
            if(tmp == 0)
                bae++;
        }
        cout << result[bae] << endl;
    }
}