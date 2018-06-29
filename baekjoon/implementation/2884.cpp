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
    int h, m;
    
    cin >> h >> m;
    
    m -= 45;
    if(m < 0) {
        m += 60;
        h--;
    }
    if(h < 0)
        h += 24;
        
    cout << h << " " << m << endl;
}
