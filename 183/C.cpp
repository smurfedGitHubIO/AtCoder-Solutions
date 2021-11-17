#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n, k;
	cin >> n >> k;
	vector< vector<ll> > tb(n, vector<ll>(n, 0));
	for(ll i=0; i<n; i++)
		for(ll j=0; j<n; j++)
			cin >> tb[i][j];
	ll ans = 0;
	vector<ll> perms;
	for(ll i=1; i<n; i++)
		perms.emplace_back(i);
	do{
		ll cur = 0;
		for(ll i=0; i<perms.size(); i++){
			if(i == 0)
				cur += tb[0][perms[i]];
			else{
				cur += tb[perms[i]][perms[i-1]];
			}
		}
		cur += tb[perms[perms.size()-1]][0];
		if(cur == k)
			ans++;
	}while(next_permutation(begin(perms), end(perms)));
	cout << ans;
	return 0;
}