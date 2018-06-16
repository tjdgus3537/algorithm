#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n);

int main() {
    //test 생략
    return 0;
}

string solution(string s, int n) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ')
            continue;
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = ((s[i] - 'a' + n) % ('z' - 'a' + 1)) + 'a';
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = ((s[i] - 'A' + n) % ('Z' - 'A' + 1)) + 'A';        
    }
    
    return s;
}