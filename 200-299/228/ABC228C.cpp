#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	pair<ll, ll> A[n];
	for(ll i=0; i<n; i++){
		ll a, b, c;
		cin >> a >> b >> c;
		A[i].first = a+b+c;
		A[i].second = i+1;
	}
	sort(A, A+n);
	string ans[n];
	for(ll i=0; i<n; i++){
		if(A[n-m].first-A[i].first <= 300)
			ans[A[i].second-1] = "Yes\n";
		else
			ans[A[i].second-1] = "No\n";
	}
	for(ll i=0; i<n; i++)
		cout << ans[i];
	return 0;
}