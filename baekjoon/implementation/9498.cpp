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
    int grade;
     
    cin >> grade;
     
    if(grade >= 90)
        cout << "A";
    else if(grade >= 80)
        cout << "B";
    else if(grade >= 70)
        cout << "C";
    else if(grade >= 60)
        cout << "D";
    else
        cout << "F";
}