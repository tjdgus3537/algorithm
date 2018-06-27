#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>

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
    int N, M;
    vector<string> no_hear, no_hear_and_see;
    char name[21];
    string str_name;
    
    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < N; i++) {
        scanf("%s", name);
        str_name = name;
        no_hear.push_back(str_name);
    }
    
    sort(no_hear.begin(), no_hear.end());
    
    for(int i = 0; i < M; i++) {
        scanf("%s", name);
        str_name = name;
        if(binary_search(no_hear.begin(), no_hear.end(), str_name))
            no_hear_and_see.push_back(str_name);
    }
    
    sort(no_hear_and_see.begin(), no_hear_and_see.end());
    
    printf("%d\n", (int)no_hear_and_see.size());
    
    for(int i = 0; i < no_hear_and_see.size(); i++) {
        strcpy(name, no_hear_and_see[i].c_str());
        printf("%s\n", name);
    }
}
