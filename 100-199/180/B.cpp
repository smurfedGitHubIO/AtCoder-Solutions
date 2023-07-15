#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	ll ar[n];
	ll a=0, c=0;
	double b=0;
	for(ll i=0; i<n ;i++){
		cin >> ar[i];
		a += abs(ar[i]);
		b += ar[i]*ar[i];
		c = max(c, ar[i]);
	}
	cout << a << "\n";
	cout << fixed << setprecision(10) << sqrt(b) << "\n";
	cout << c;
	return 0;
}