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
    string answer = "";
    int idx = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            answer.push_back(' ');
            idx = 0;
            continue;
        }
        if(idx % 2 == 0) {
            answer.push_back(toupper(s[i]));
            idx++;
        }
        else {
            answer.push_back(tolower(s[i]));
            idx++;
        }
    }
    
    return answer;
}
