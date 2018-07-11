#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
//greater 제공
#include <functional>
//make_pair 제공
#include <utility>
#include <cstdio>
#include <string>
#include <set>

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
    //hint : a + b + c = k  ==> a + b = k - c
    //a + b를 set에 넣음.
    int n, arr[5000], ans = 0;
    set<int> two_sum;
    set<int>::iterator iter;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++)
            two_sum.insert(arr[i - 1] + arr[j]); 

        for(int k = 0; k < i; k++) {
            iter = two_sum.find(arr[i] - arr[k]);
            if(iter != two_sum.end()) {
                ans++;
                break;
            }
        }
    }
    
    cout << ans << endl;
}

/* 빠른 풀이
다른 배열에 적절히 저장해두고 이를 활용.
난 400000을 다 보게 될 줄 알았는데 그럴 필요 없이 O(N^2)만 참조하면 되는거였음.
#include<cstdio>

bool two_sum[400001];
int arr[5000];

int main()
{
	int n, result = 0, a;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", arr+i);
		for(int j = 0; j < i; j++)
		{
			if(two_sum[arr[i]-arr[j]+200000])
			{
				result++;
				break;
			}
		}

		two_sum[arr[i]+arr[i]+200000] = true;
		for(int j = 0; j < i; j++)
			two_sum[arr[i]+arr[j]+200000] = true;
	}
	printf("%d", result);
}
*/