#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll A[n];
	vector<ll> v[n+1];
	for(ll i=0; i<n+1; i++){
		v[i].emplace_back(0);
	}
	for(ll i=0; i<n; i++){
		cin >> A[i];
		v[A[i]].emplace_back(i+1);
	}
	for(ll i=0; i<n+1; i++){
		v[i].emplace_back(n+2);
	}
	ll q;
	cin >> q;
	while(q--){
		ll a, b, c;
		cin >> a >> b >> c;
		if(v[c].size() == 2)
			cout << "0\n";
		else{
			ll f = -1, s = -1;
			ll lo = 0, hi = v[c].size()-1;
			while(lo <= hi){
				ll mid = lo + (hi-lo)/2;
				if(v[c][mid] < a){
					lo = mid+1;
				}
				else{
					hi = mid-1;
					f = mid;
				}
			}
			lo = 0;
			hi = v[c].size()-1;
			while(lo <= hi){
				ll mid = lo + (hi-lo)/2;
				if(v[c][mid] <= b){
					lo = mid+1;
				}
				else{
					hi = mid-1;
					s = mid;
				}
			}
			cout << s-f << "\n";
		}
	}
	return 0;
}