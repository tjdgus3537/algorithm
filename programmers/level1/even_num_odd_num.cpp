#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int num);

int main() {
    int n;
    
    cin >> n;
    
    cout << solution(n) << endl;
    
    return 0;
}

string solution(int num) {
    if(num % 2 == 0)
        return "Even";
    else
        return "Odd";
}
