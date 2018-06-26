#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int n);

int main() {
    int n;
    
    cin >> n;
    
    cout << solution(n) << endl;

    return 0;
}

string solution(int n) {
    string answer = "";
    
    for(int i = 1; i <=n ; i++) {
        if(i % 2 == 1)
            answer.append("수");
        else
            answer.append("박");
    }
    
    return answer;
}