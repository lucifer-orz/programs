#include<bits/stdc++.h>
#define int long long
#define w(t) int t;cin>>t;while(t--)
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define p pair<int,int>
#define vi vector<int>
#define space " "
#define endl "\n"
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void solve() {
	int s, n, ans = 0;
	cin >> s >> n;
	if (s <= n && (s % 2 == 0 || s == 1)) {
		cout << 1 << endl;
	}
	else {
		if (s % 2 == 1) {
			s--; ans++;
		}
		if (s % n != 0) {
			ans++;
		}
		ans += s / n;
		cout << ans << endl;
	}
}
int32_t main() {
#ifndef ONLINE_JUDGE
	//read input into input.txt
	freopen("input.txt", "r", stdin);
	//write output into output.txt
	freopen("output.txt", "w", stdout);
#endif
	fastio;
	w(t) {
		solve();
	}
	return 0;
}