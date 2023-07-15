#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	ll ar[n];
	vector<ll> sums(n, 0);
	vector<ll> prefsum(n, 0);
	ll mxs = 0, mxp = 0;
	for(ll i=0; i<n; i++){
		cin >> ar[i];
		if(i == 0){
			sums[i] = ar[i];
			prefsum[i] = ar[i];
		}
		else{
			sums[i] += ar[i] + sums[i-1];
			prefsum[i] += sums[i] + prefsum[i-1];
		}
		mxs = max(mxs, sums[i]);
		mxp = max(mxp, prefsum[i]);
	}
	cout << max(mxs+mxp, 0LL);
	return 0;
}