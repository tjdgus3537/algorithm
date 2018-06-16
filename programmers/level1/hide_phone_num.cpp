#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2);

int main() {
    //test 생략
    return 0;
}

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    // M * N 2차원 동적 배열 생성
    int M = arr1.size();
    int N = arr2[0].size();
    int C = arr1[0].size();
    vector<vector<int>> answer(M, vector<int>(N, 0));
    
    for(int row = 0; row < M; row++) {
        for(int col = 0; col < N; col++) {
            for(int i = 0; i < C; i++) {
                answer[row][col] += arr1[row][i] * arr2[i][col];
            }
        }
    }
    
    return answer;
}
