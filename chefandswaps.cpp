/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡖⠁⠀⠀⠀⠀⠀⠀⠈⢲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣼⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⢀⣀⣤⣤⣤⣤⣀⡀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣔⢿⡿⠟⠛⠛⠻⢿⡿⣢⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣀⣤⣶⣾⣿⣿⣿⣷⣤⣀⡀⢀⣀⣤⣾⣿⣿⣿⣷⣶⣤⡀⠀⠀⠀⠀
⠀⠀⢠⣾⣿⡿⠿⠿⠿⣿⣿⣿⣿⡿⠏⠻⢿⣿⣿⣿⣿⠿⠿⠿⢿⣿⣷⡀⠀⠀
⠀⢠⡿⠋⠁⠀⠀⢸⣿⡇⠉⠻⣿⠇⠀⠀⠸⣿⡿⠋⢰⣿⡇⠀⠀⠈⠙⢿⡄⠀
⠀⡿⠁⠀⠀⠀⠀⠘⣿⣷⡀⠀⠰⣿⣶⣶⣿⡎⠀⢀⣾⣿⠇⠀⠀⠀⠀⠈⢿⠀
⠀⡇⠀⠀⠀⠀⠀⠀⠹⣿⣷⣄⠀⣿⣿⣿⣿⠀⣠⣾⣿⠏⠀⠀⠀⠀⠀⠀⢸⠀
⠀⠁⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⢇⣿⣿⣿⣿⡸⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠈⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠐⢤⣀⣀⢀⣀⣠⣴⣿⣿⠿⠋⠙⠿⣿⣿⣦⣄⣀⠀⠀⣀⡠⠂⠀⠀⠀
⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠉⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠋⠁⠀⠀
            _.ashwatthama007._
*/
#include<bits/stdc++.h>
#define int long long
#define w(t) int t;cin>>t;while(t--)
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define pb push_back
#define pf push_front
#define mp make_pair
#define s second
#define f first
#define p pair<int,int>
#define vi vector<int>
#define space " "
#define endl "\n"
#define mod 1000000007
#define all(v) (v).begin(),(v).end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
// void buildsegment(vi &arr, vi &tree, int node, int start, int end) {
// 	if (start == end) {
// 		tree[node] = arr[start];
// 		return;
// 	}
// 	int mid = (start + end) / 2;
// 	buildsegment(arr, tree, 2 * node + 1, start, mid);
// 	buildsegment(arr, tree, 2 * node + 2, mid + 1, end);
// 	tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
// }
// void updatesegment(vi &arr, vi &tree, int node, int start, int end, int idx, int val) {
// 	if (start == end) {
// 		arr[idx] = val;
// 		tree[node] = val;
// 	}
// 	else {
// 		int mid = (start + end) / 2;
// 		if (start <= idx && idx <= mid) {
// 			updatesegment(arr, tree, 2 * node + 1, start, mid, idx, val);
// 		}
// 		else {
// 			updatesegment(arr, tree, 2 * node + 2, mid + 1, end, idx, val);
// 		}
// 		tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
// 	}
// }
// int rmquery(vi &tree, int node, int start, int end, int l, int r) {
// 	if (l > end || start > r) {
// 		return INT_MAX;
// 	}
// 	if (l <= start && r >= end) {
// 		return tree[node];
// 	}
// 	int mid = (start + end) / 2;
// 	int p1 = rmquery(tree, 2 * node + 1, start, mid, l, r);
// 	int p2 = rmquery(tree, 2 * node + 2, mid + 1, end, l, r);
// 	// cout << min(p1, p2) << endl;
// 	return (min(p1, p2));
// }
int fn(int sm) {
	long double a = sqrtl(1ul + 4 * (sm));
	a = a - 1.0;
	a = a / 2.0;
	long long fs = a;
	return fs;
}
void solve() {
	int n;
	cin >> n;
	if (n < 3) {
		cout << 0 << endl;
		return;
	}
	int t1 = (n * (n + 1)) / 2;
	if (t1 % 2 != 0) {
		cout << 0 << endl;
		return;
	}
	int indx = fn(t1);
	int ss = indx * (indx + 1) / 2;
	if (t1 / 2 == ss) {
		int out = (indx * (indx - 1ul)) / 2l + ((n - indx) * (n - indx - 1ul)) / 2l + (n - indx);
		cout << out  << endl;
	}
	else {
		cout << n - indx  << endl;
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