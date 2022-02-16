#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	ll A[n];
	ll B[n];
	for(ll i=0; i<n; i++){
		cin >> A[i];
		B[A[i]-1] = i+1;
	}
	for(ll i=0; i<n; i++)
		cout << B[i] << " ";
	return 0;
}