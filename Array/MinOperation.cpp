#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n); for(int &i : v) cin >> i;

	sort(rbegin(v), rend(v));
	int res = 0;

	for(int i = 0; i < n; ++i) {
		res += v[i];

		int ops = v[i] * (n - i - 1);
		int cur = 0;

		while(i < n && cur + v[i] <= ops)
			cur += v[i++];
	}

	cout << res << '\n';
}

signed main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int tc = 1;
	cin >> tc;

	while (tc--)
		solve();
}