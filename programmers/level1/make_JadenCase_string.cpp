#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s);

int main() {
    //test 생략
    return 0;
}

string solution(string s) {
    for(int i = 1; i < s.size(); i++)
        s[i] = s[i] = tolower(s[i]);
        
    s[0] = toupper(s[0]);
        
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    
    return s;
}
