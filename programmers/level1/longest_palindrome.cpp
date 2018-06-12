/* 
    Manacher's algorithm 구현
    
    시간 복잡도 : O(N)
    
    참고 : http://blog.myungwoo.kr/56
    참고 : http://www.crocus.co.kr/1075
    위에 블로그 기준으로 코드의 변수명을 설정함.
    추가적으로 곁들일 말.
    r은 현재 알고자 하는 위치(i) 이전의 위치들에 대해서 회문(palindrome)을 만들었을 때,
    그 회문의 가장 오른쪽 지점을 의미하고, 그 중심은 p가 된다.
    
    문자열의 길이가 홀수 일때만 동작하므로 짝수일 때는 문자 사이 사이에 '#'을 추가해서 홀수 길이로 만들어준다.
    단, 이 때 가장 긴 회문의 길이가 1일 때를 주의하자. abcd와 같이 답은 1이어야 하는데 #때문에 3이 나온다.
    
    i_sym은 i'의 의미로 사용했다. i' = 2p - i
    i <= r 일 때, A[i] = min(r - i, A[i'])의 의미는 완전히 이해하지는 못 했다.
    다만 A[i']의 경우는 회문인 문자열 S에서 S = V[i']XY[i]Z 일 때 X=Y이고, V=Z이니까 [i']의 길이는 VX에 따라
    결정된다. 따라서 YZ에 의해서 결정되는 [i]의 길이의 최솟값이 되어 줄 수 있다.(더 길어질 수 있는 이유는
    전체 문자열이 SX일 경우 [i]의 최대 길이는 XY[i]ZX가 될 수 있기 때문이다.
    
    스스로도 완벽히 이해하지는 못 해서 이해한게 틀렸을 수도 있고, 설명을 잘 못하기도 하고
    완전하게 표현하지도 못했다.
    
    추후에 기회가 되면 더 이해해서 코드도 리팩토링 해보자!
    2018-06-12
*/

#define MAX_LEN 2500
#include <vector>
#include <iostream>
#include <cstring>
#include <cmath>
#include <string>

using namespace std;

int solution(string s);

int main() {
    string s;
    
    cin >> s;
    
    cout << solution(s) << endl;
    
    return 0;
}

int solution(string s_input) {
    char s[MAX_LEN * 2] = {0,};
    int answer = 0;
    int len;
    //홀수 일 때는 #을 넣어야 하므로 2배.
    int A[MAX_LEN * 2] = {0,};
    bool is_odd;
    char tmp_s[MAX_LEN * 2] = {0,};
    int r, p, i_sym;
    
    strcpy(s, s_input.c_str());
    len = strlen(s);

    if(len % 2 == 1) {
        is_odd = true;
        strcpy(tmp_s, s);
    }
    else {
        is_odd = false;
        
        for(int i = 0 ; i < len; i++)
            tmp_s[i * 2] = s[i];
        for(int i = 0 ; i < len - 1; i++)
            tmp_s[i * 2 + 1] = '#';
        
        len = strlen(tmp_s);
    }
    
    for(int i = 1; i <= len; i++) {
        r = -1;
        for(int j = 1; j < i; j++) {
            if(r < j + A[j]) {
                r = j + A[j];
                p = j;
            }
        }
        i_sym = 2 * p - i;
        
        if(i > r)
            A[i] = 0;
        else
            A[i] = min(r - i, A[i_sym]); 
          
        while(i - A[i] - 1 >= 0 && i + A[i] - 1 < len && tmp_s[i - A[i] - 1] == tmp_s[i + A[i] - 1])
            A[i]++;
        
        A[i]--;
        
        //짝수 예외 처리. 예를들어 abcd면 길이가 1이어야 하는데 #까지 대칭으로 인식해버림;
        if(tmp_s[i - A[i] - 1] == '#')
            A[i]--;
        
        if(is_odd)
            answer = max(answer, 2 * A[i] + 1);
        else
            answer = max(answer, A[i] + 1);
    }
    
    return answer;
}
