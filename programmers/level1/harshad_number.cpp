#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(int x);

int main() {
    int n;
    
    cin >> n;
    
    cout << solution(n) << endl;
    
    return 0;
}

bool solution(int x) {
    int sum_of_pos_nums = 0, tmp = x;
    
    while(tmp > 0) {
        sum_of_pos_nums += tmp % 10;
        tmp /= 10;
    }
    
    return x % sum_of_pos_nums == 0 ? true : false;
}
