#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul);

int main() {
    //test 생략

    return 0;
}

string solution(vector<string> seoul) {
    int pos;
    char buff[100];
    
    for(int i = 0; i < seoul.size(); i++) {
        if(seoul[i] == "Kim") {
            pos = i;
            break;
        }
    }
    
    snprintf(buff, sizeof(buff), "김서방은 %d에 있다", pos);
    
    string answer = buff;
    
    return answer;
}