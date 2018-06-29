#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>

//방어력은 음수 여부에 상관하지 않는다! 문제를 잘 읽자

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
    int hp, mp, att, def, T;
    int item_hp, item_mp, item_att, item_def;
    
    cin >> T;
    
    while(T--) {
        cin >> hp >> mp >> att >> def >> item_hp >> item_mp >> item_att >> item_def;
        
        hp += item_hp;
        mp += item_mp;
        att += item_att;
        def += item_def;
        
        if(hp <= 1)
            hp = 1;
        if(mp <= 1)
            mp = 1;
        if(att <= 0)
            att = 0;

        cout << hp + 5 * mp + 2 * att + 2  * def << endl;
    }
}
