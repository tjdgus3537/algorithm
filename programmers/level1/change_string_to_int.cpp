#include <iostream>
#include <string>
#include <vector>

//문자열의 길이가 1 ~ 10000이라는데 10000은 어떻게 처리하는거지?

using namespace std;

int solution(string s);

int main() {
    string s;
    
    cin >> s;
    cout << solution(s) << endl;

    return 0;
}

int solution(string s) {
    return stoi(s);
}

