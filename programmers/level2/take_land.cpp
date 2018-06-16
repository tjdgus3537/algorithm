#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int> > land);

int main() {
    //test 생략
    return 0;
}

int solution(vector<vector<int> > land) {
    int score[4] = {0,};
    int N = land.size();
    int answer = 0;

    for(int i = 0; i < 4; i++)
        score[i] = land[0][i];
    
    for(int i = 1; i < N; i++) {
        land[i][0] += max(score[1], max(score[2], score[3]));
        land[i][1] += max(score[0], max(score[2], score[3]));
        land[i][2] += max(score[0], max(score[1], score[3]));
        land[i][3] += max(score[0], max(score[1], score[2]));
        
        for(int j = 0; j < 4; j++)
            score[j] = land[i][j];
    }
    
    for(int i = 0; i < 4; i++)
        answer = max(answer, score[i]);

    return answer;
}