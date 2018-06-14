#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//c++의 정렬과 람다함수, 캡쳐 등 공부할 필요를 느낌

using namespace std;

vector<string> solution(vector<string> strings, int n);

int main() {
    //test 생략

    return 0;
}

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [&n](const string &a, const string &b) -> bool { 
        if(a[n] != b[n])
            return a[n] < b[n];
        
        return a.compare(b) < 0;
    });
    
    return strings;
}