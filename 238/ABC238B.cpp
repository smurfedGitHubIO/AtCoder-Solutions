#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll A[n];
	ll cur = 0;
	vector<ll> v;
	v.emplace_back(0);
	v.emplace_back(360);
	for(ll i=0; i<n; i++){
		cin >> A[i];
		cur += A[i];
		v.emplace_back(cur%360);
	}
	sort(begin(v),end(v));
	ll mx = 0;
	for(ll i=0; i<v.size()-1; i++){
		mx = max(v[i+1]-v[i], mx);
	}
	cout << mx;
	return 0;
}