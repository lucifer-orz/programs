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
	string s;
	unordered_map<char, int> u;
	cin >> s;
	for (const auto &a : s) {
		if (u.find(a) != u.end()) {
			continue;
		}
		else {
			u[a]++;
		}
	}
	if (!(u.size() % 2)) {
		cout << "CHAT WITH HER!" << endl;
	}
	else {
		cout << "IGNORE HIM!" << endl;
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
	// w(t) {
	// 	solve();
	// }
	solve();
	return 0;
}