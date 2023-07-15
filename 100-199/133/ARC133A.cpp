#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll A[n];
	ll mx = -1;
	map<ll, ll> touched;
	vector<ll> v;
	for(ll i=0; i<n; i++){
		cin >> A[i];
		if(!touched[A[i]]){
			touched[A[i]] = 1;
			v.emplace_back(A[i]);
		}
	}
	for(ll i=0; i<v.size()-1; i++){
		if(v[i] > v[i+1]){
			mx = v[i];
			break;
		}
	}
	if(mx == -1){
		mx = v[v.size()-1];
	}
	for(ll i=0; i<n; i++){
		if(A[i] != mx){
			cout << A[i] << " ";
		}
	}
	return 0;
}