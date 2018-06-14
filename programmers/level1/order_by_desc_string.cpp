#include <vector>
#include <iostream>
#include <string>

//그냥 정렬해도 되는 문제

using namespace std;

string solution(string s);

int main() {
    string s;
    
    cin >> s;
    
    cout << solution(s) << endl;

    return 0;
}

string solution(string s) {
    string answer = "";
    int lower_case[26] = {0,}, upper_case[26] = {0,};
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            lower_case[s[i] - 'a']++;
        if(s[i] >= 'A' && s[i] <= 'Z')
            upper_case[s[i] - 'A']++;
    }    
    
    for(int i = 'z' - 'a'; i >= 0; i--) {
        for(int j = 0; j < lower_case[i]; j++) {
            answer.push_back('a' + i);
        }
    }
   
    for(int i = 'Z' - 'A'; i >= 0; i--) {
        for(int j = 0; j < upper_case[i]; j++) {
            answer.push_back('A' + i);
        }
    }
    
    return answer;
}