#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solution(string s);

int main() {
    string s;

    cin >> s;

    cout << solution(s) << endl;
    
    return 0;
}

bool solution(string s) {
    int check = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(')
            check++;
        else {
            if(check <= 0)
                return false;
            else
                check--;
        }
    }
    
    if(check != 0)
        return false;

    return true;
}
