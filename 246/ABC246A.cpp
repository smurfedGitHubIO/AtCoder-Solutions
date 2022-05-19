#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll a, b;
	ll x = 0, y = 0;
	for(int i=0; i<3; i++){
		cin >> a >> b;
		x ^= a;
		y ^= b;
	}
	cout << x << " " << y;
	return 0;
}