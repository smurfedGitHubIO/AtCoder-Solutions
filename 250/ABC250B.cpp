#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, a, b;
	cin >> n >> a >> b;
	for(ll i=0; i<n; i++){
		ll cnt = i;
		for(ll j=0; j<a; j++){
			for(ll k=0; k<n; k++){
				for(ll l=0; l<b; l++){
					cout << (cnt&1 ? "#" : ".");
				}
				cnt += 1;
			}
			cnt = i;
			cout << "\n";
		}
	}
	return 0;
}