#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXX = 2e5 + 11;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	ll ar[n];
	map<ll, ll> mpl;
	ll mx = 0, ans = 0;
	for(ll i=0; i<n; i++){
		cin >> ar[i];
		mpl[ar[i]] += 1;
		for(ll j=2; j<=ar[i]/2; j++){
			if(ar[i]%j == 0){
				mpl[j] += 1;
				if(mx < mpl[j]){
					ans = j;
					mx = mpl[j];
				}
			}
		}
	}
	cout << ans;
	return 0;
}