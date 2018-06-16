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
    int ROW = arr1.size(), COL = arr1[0].size();
    // ROW * COL 2차원 동적 배열 생성
    vector<vector<int>> answer(ROW, vector<int>(COL, 0));
    
    for(int row = 0; row < ROW; row++)
        for(int col = 0; col < COL; col++)
            answer[row][col] = arr1[row][col] + arr2[row][col];
    
    return answer;
}
