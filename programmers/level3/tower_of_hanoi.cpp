#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n);
void hanoi(int src, int aux, int des, int n, vector<vector<int>> &answer);

int main() {
    //test 생략
    return 0;
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    hanoi(1, 2, 3, n, answer);
    
    return answer;
}

//src : 1, aux : 2, des : 3
//src에서 des로 n개의 판을 옮긴다. 중간 막대 aux를 이용해서.
void hanoi(int src, int aux, int des, int n, vector<vector<int>> &answer) {
    vector<int> v;
    
    if(n == 1) {
        v.push_back(src);
        v.push_back(des);
        answer.push_back(v);
    }
    else {
        //n-1개를 aux에 옮긴다.
        hanoi(src, des, aux, n - 1, answer);
        //1개를 des에 옮긴다.
        hanoi(src, aux, des, 1, answer);
        //n-1개를 aux에서 des로 옮긴다.
        hanoi(aux, src, des, n - 1, answer);
    }
}