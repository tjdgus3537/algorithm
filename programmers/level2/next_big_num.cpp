#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n);
string dec2bin(int n);
int count_one(string s);

int main() {
    int n;
    
    cin >> n;
    
    cout << solution(n) << endl;
    
    return 0;
}

int solution(int n) {
    int n_one = count_one(dec2bin(n));
    
    for(int i = n + 1; i < 1000000; i++)
        if(n_one == count_one(dec2bin(i)))
            return i;
}

string dec2bin(int n) {
    string res;

    while (n)
    {
        res.push_back((n & 1) + '0');
        n >>= 1;
    }

    if (res.empty())
        res = "0";
    else
        reverse(res.begin(), res.end());
 
   return res;
}

int count_one(string s) {
    int count = 0;
    
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '1')
            count++;
            
    return count;
}