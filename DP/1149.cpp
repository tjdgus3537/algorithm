#include <iostream>
#include <cstdio>
#include <cmath>

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
    int N;
    int costs[1000][3] = {0,};
    int result[3], tmp[3];
    int answer;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &costs[i][j]);
    
    for(int i = 0; i < 3; i++) {
        result[i] = costs[0][i];
        tmp[i] = result[i];
    }
    
    for(int house = 1; house < N; house++) {
        result[0] = min(tmp[1], tmp[2]) + costs[house][0];
        result[1] = min(tmp[0], tmp[2]) + costs[house][1];
        result[2] = min(tmp[0], tmp[1]) + costs[house][2];
        
        for(int i = 0; i < 3; i++)
            tmp[i] = result[i];
    }
    
    answer = min(min(result[0], result[1]), result[2]);
    
    printf("%d\n", answer);
}
