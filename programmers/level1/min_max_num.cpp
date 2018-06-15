#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

string solution(string s);

int main() {
    //test 생략    
    return 0;
}

string solution(string s) {
    string answer = "", delimiter = " ";
    int min_num = INT_MAX, max_num = INT_MIN;

    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());
        min_num = min(min_num, stoi(token));
        max_num = max(max_num, stoi(token));
    }
    
    //마지막 숫자 처리
    min_num = min(min_num, stoi(s));
    max_num = max(max_num, stoi(s));
    
    answer += to_string(min_num);
    answer += " ";
    answer += to_string(max_num);
    
    return answer;
}
