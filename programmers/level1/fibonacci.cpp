#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n);

int main() {
    int n;
    
    cin >> n;
    
    cout << solution(n) << endl;
    
    return 0;
}

int solution(int n) {
    int answer = 0;
    int f[100001] = {0,};
    
    f[0] = 0;
    f[1] = 1;
    
    for(int i = 2; i <= n; i++)
        f[i] = (f[i - 1] + f[i - 2]) % 1234567;
    
    return f[n];
}

/*
정답자 중 Curookie 님의 코드를 가져옴.
행렬로 푸는데 시간이 굉장히 단축된다고 함.
아직 읽어 보진 않음

#include<iostream>
#include<vector>
using namespace std;

typedef vector<vector<long long>> matrix;

matrix operator* (matrix &a, matrix &b) {
  int n = a.size();
  matrix c(n, vector<long long>(n));
  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
      for(int k=0; k<n; k++)
        c[i][j] += a[i][k] * b[k][j];
  return c;
}

long long fibonacci(int n)
{
  matrix res = {{1, 0},{0, 1}};
  matrix fib = {{1, 1},{1, 0}};
  while(n) {
    if(n%2==1) res = res * fib;
    fib = fib * fib;
    n *= 0.5;
  }
  return res[0][1];
}

int main()
{
    int testCase = 10;
    long long testAnswer = fibonacci(testCase);

    cout<<testAnswer;
}

*/
