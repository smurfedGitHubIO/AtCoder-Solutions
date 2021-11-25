#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll sz[n];
	vector<ll> v[n];
	ll ans = 0;
	vector<bool> checked(n, false);
	for(ll i=0; i<n; i++){
		cin >> sz[i];
		ll x, k;
		cin >> x;
		for(ll j=0; j<x; j++){
			cin >> k;
			v[i].push_back(k-1);
		}
	}
	stack<ll> st;
	st.push(n-1);
	while(!st.empty()){
		ll tp = st.top();
		st.pop();
		if(!checked[tp])
			ans += sz[tp];
		checked[tp] = 1;
		for(ll i=0; i<v[tp].size(); i++){
			if(!checked[v[tp][i]]){
				st.push(v[tp][i]);
			}
		}
	}
	cout << ans;
	return 0;
}