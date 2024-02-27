#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N =  1e6;
int nums[N], min_r[N];

signed solve() {
	int n; cin >> n;
	int a, b, c, d;
	stack<int> st;
	int k = -1e9;
	for (int i = 1; i <= n; i ++) {
		cin >> nums[i];
	}
	min_r[n] = nums[n];
	for (int i = n - 1; i >= 1; i --) {		//第i+1到第n个元素的最小值 
		min_r[i] = min(min_r[i + 1], nums[i]);
	}
	for (int i = 1; i <= n; i ++) {
		if (!st.empty() && nums[i] > st.top()) {
			k = max(k, st.top());
			st.pop();
		}
		st.push(nums[i]);
		if (nums[i] < k && min_r[i] < nums[i]) {
			cout << "YES" << '\n';
			return 0;
		}
	}
	cout << "NO" << '\n';
	return 0;
}

signed main()
{
	solve();
	return 0;
}
