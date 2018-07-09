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
//gcd 제공
#include <numeric>

using namespace std;
unsigned int gcd (unsigned int n1, unsigned int n2);

//자세한 해설 : https://www.acmicpc.net/board/view/15979

void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int n, m;
    
    cin >> n >> m;
    
    cout << m - gcd(n, m) << endl;
}

unsigned int gcd (unsigned int n1, unsigned int n2) {
    return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
}