#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	ll A[n+1];
	ll C[n+m+1];
	vector<ll> B(m+1, 0);
	ll ind = -1;
	for(ll i=0; i<=n; i++){
		cin >> A[i];
		if(A[i] != 0)
			ind = i;
	}
	for(ll i=0; i<=n+m; i++){
		cin >> C[i];
	}
	for(ll i=m; i>=0; i--){
		B[i] = C[n+i]/A[ind];
		for(ll j=n; j>=0; j--){
			C[i+j] -= A[j]*B[i];
		}
	}
	for(ll i=0; i<m+1; i++){
		cout << B[i] << " ";
	}
	return 0;
}