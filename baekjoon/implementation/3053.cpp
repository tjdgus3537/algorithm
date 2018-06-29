#include <iostream>
#include <cstdio>

using namespace std;

//PI 정밀도 값을 3.1415926535 까지 쓰면 틀린다.

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    const double PI = 3.14159265358979;
    int r;
    
    scanf("%d", &r);
    
    printf("%.6lf\n", PI * r * r);
    printf("%.6lf\n", (double)2 * r * r);
}
