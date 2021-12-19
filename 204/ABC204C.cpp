#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	vector<ll> A[n];
	ll x, y;
	for(ll i=0; i<m; i++){
		cin >> x >> y;
		--x, --y;
		A[x].emplace_back(y);
	}
	ll ans = 0;
	for(ll i=0; i<n; i++){
		vector<bool> vis(n, false);
		ll cnt = 1;
		queue<ll> q;
		q.push(i);
		vis[i] = 1;
		while(!q.empty()){
			ll fr = q.front();
			q.pop();
			for(ll j=0; j<A[fr].size(); j++){
				if(!vis[A[fr][j]]){
					cnt ++;
					vis[A[fr][j]] = 1;
					q.push(A[fr][j]);
				}
			}
		}
		ans += cnt;
	}
	cout << ans;
	return 0;
}