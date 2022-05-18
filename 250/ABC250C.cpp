#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	ll inds[n+1];
	ll q[n+1];
	for(ll i=0; i<n; i++){
		inds[i+1] = i+1;
		q[i+1] = i+1;
	}
	ll x;
	while(m --){
		cin >> x;
		if(inds[x] == n){
			ll pt = inds[x];
			ll qt = q[inds[x]-1];
			inds[x] = inds[qt];
			inds[qt] = pt;
			swap(q[pt], q[pt-1]);
		}
		else{
			ll pt = inds[x];
			ll qt = q[inds[x]+1];
			inds[x] = inds[qt];
			inds[qt] = pt;
			swap(q[pt], q[pt+1]);
		}
	}
	for(ll i=0; i<n; i++){
		cout << q[i+1] << " ";
	}
	return 0;
}