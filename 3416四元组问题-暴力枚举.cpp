#include<bits/stdc++.h>
using namespace std;

const signed N = 1e6;
int nums[220]; 

bool solve() {
	int n; cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> nums[i];
	}
	for (int d = 0; d < n; d ++) {
		for (int c = 0; c < d; c ++) {
			for (int b = 0; b < c; b ++) {
				for (int a = 0; a < b; a ++) {
					if (nums[d]<nums[c]&&nums[c]<nums[a]&&nums[a]<nums[b]) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

signed main()
{
	if (solve()) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}
