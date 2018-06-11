#include <string>
#include <vector>
#include <iostream>

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
    
    if(s.size() % 2 == 0)
        answer = s.substr((s.size() / 2) - 1, 2);
    else
        answer = s.substr(s.size() / 2, 1);
    
    return answer;
}
