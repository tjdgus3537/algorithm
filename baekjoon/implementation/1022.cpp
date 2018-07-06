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

// printf("%*d", 출력자리수, 출력값) 

void solution();
int find(int r, int c);

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
        
    return 0;
}

void solution() {
    int r1, c1, r2, c2;
    int max_num = 0;
    int num;
    int cipher[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int cipher_idx = -1;
    
    cin >> r1 >> c1 >> r2 >> c2;
    
    for(int r = r1; r <= r2; r++) {
        for(int c = c1; c <= c2; c++) {
            num = find(r, c);
            max_num = max(max_num, num);
        }
    }
    
    while(max_num > 0) {
        cipher_idx++;
        max_num /= 10;
    }
    
    for(int r = r1; r <= r2; r++) {
        for(int c = c1; c <= c2; c++) {
            num = find(r, c);
            printf("%*d", cipher[cipher_idx], num);
            if(c < c2)
                printf(" ");
        }
        if(r < r2)
            printf("\n");
    }    
}

//k = max(abs(r), abs(c))
//d = 2*k + 1
// if(c > r) then (d - 2)^2 + ((k - r) + (k - c))
// if(c <= r) then d^2 - ((k - r) + (k - c))
int find(int r, int c) {
    int k = max(abs(r), abs(c));
    int d = 2 * k + 1;

    if(c > r)
        return (d - 2) * (d - 2) + ((k - r) + (k - c));
    else
        return d * d - ((k - r) + (k - c));
}