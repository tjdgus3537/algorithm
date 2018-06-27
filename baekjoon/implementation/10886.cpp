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
    int N, count_cute = 0, value;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> value;
        
        if(value == 1)
            count_cute++;
    }
    
    if(count_cute > N - count_cute)
        cout << "Junhee is cute!" << endl;
    else
        cout << "Junhee is not cute!" << endl;
}
