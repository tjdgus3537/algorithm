#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b);

int main() {
    int a, b;
    
    cin >> a >> b;

    cout << solution(a, b) << endl;
    
    return 0;
}

string solution(int month, int day) {
    string answer = "";
    
    string dayOfWeek[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int months[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;
    //시작이 금요일
    int ans = 5;
    
    // 해당 월일이 1월 1일을 기준으로 며칠이나 지났는지 계산
    // 예를 들어 1월 31일은 30
    // 이전 월까지의 일수를 더한다.
    for(int i = 0; i < month; i++)
        days += months[i];
    
    // 1을 빼는 이유는 1월 1일을 0으로 만들기 위해
    days += day - 1;
    
    answer = dayOfWeek[(ans + days) % 7];
 
    return answer;
}
