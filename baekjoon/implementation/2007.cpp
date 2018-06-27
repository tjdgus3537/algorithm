#include <iostream>

using namespace std;


void solution();

int main() {
    #ifdef _DEBUG
        freopen("/home/ubuntu/workspace/input", "r", stdin);
    #endif
    
    solution();
    
    return 0;
}

void solution() {
    int month, day;
    string day_of_the_week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count = 0;
    
    cin >> month >> day;
    
    for(int i = 1; i < month; i++)
        count += months[i];
    count += day;
    
    //1월 1일과의 차이
    count--;
    
    cout << day_of_the_week[count % 7] << endl;
}