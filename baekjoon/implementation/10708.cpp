#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>
#include <cstdio>
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
    int n, m, a[101], b[101], scroe[101], wrong, sum[101] = {0,};
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++)
        cin >> a[i];
    
    for(int i = 0; i < m; i++) {
        int target = a[i];
        wrong = 0;
        
        for(int j = 1; j <= n; j++) {
            scroe[j] = 0;
            cin >> b[j];
            if(b[j] == target)
                scroe[j]++;
            else
                wrong++;
        }
        
        scroe[target] += wrong;
        
        for(int j = 1; j <= n; j++)
            sum[j] += scroe[j];
    }
    
    for(int i = 1; i <=n; i++)
        cout << sum[i] << endl;
}