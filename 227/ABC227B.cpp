#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll ar[n];
	ll ans = 0;
	for(ll i=0; i<n; i++){
		cin >> ar[i];
		bool br = true;
		for(ll j=1; j*j <= ar[i]; j+=1){
			if((ar[i]-3*j)%(4*j+3) == 0){
				br = false;
				break;
			}
		}
		ans += br;
	}
	cout << ans;
	return 0;
}