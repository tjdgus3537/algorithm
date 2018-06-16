#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long k);

int main() {
    int n;
    long long k;
    vector<int> v;
    
    cin >> n >> k;
    
    v = solution(n, k);
    
    for(int i = 0 ; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
    return 0;
}

vector<int> solution(int n, long long k) {
    vector<int> answer;
    long long fact[21] = {0,};
    long long x;
    int N = n;
    vector<int> people;
    
    for(int i = 1; i <= n; i++)
        people.push_back(i);
        
    fact[0] = 1;
    
    for(int i = 1 ; i <= 20; i++)
        fact[i] = fact[i - 1] * i;
    
    while(k > 0) {
        
        //다 첫 번째 열거
        if(k == 1) {
            x = 0;
            while(!people.empty()) {
                answer.push_back(people[x]);
                people.erase(people.begin());
            }
            break;
        }
        
        x = (k - 1) / fact[n - 1];
        
        answer.push_back(people[x]);
        people.erase(people.begin() + x);

        k -= fact[n - 1] * x;
        n--;
    }
    
    return answer;
}