#include <iostream>

using namespace std;

//개행 안 넣었다가 한 번 틀림.

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int n, r, e, c;
    
    cin >> n;
    
    while(n--) {
        cin >> r >> e >> c;
        
        if(r < e - c)
            cout << "advertise" << endl;
        else if(r == e - c)
            cout << "does not matter" << endl;
        else
            cout << "do not advertise" << endl;
    }
}
