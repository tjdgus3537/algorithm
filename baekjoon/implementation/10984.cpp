#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>
#include <cstdio>

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
    int T, N, c;
    double g, GPA;
    int total_c;
    
    cin >> T;
    
    while(T--) {
        total_c = 0;
        GPA = 0;
        
        cin >> N;
        
        for(int i = 0; i < N; i++) {
            cin >> c >> g;
            total_c += c;
            GPA += c * g;
        }
        
        printf("%d %.1lf\n", total_c, (GPA / total_c));
    }
}
