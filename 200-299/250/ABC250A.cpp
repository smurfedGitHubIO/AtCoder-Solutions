#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool check(ll x, ll y, ll a, ll b){
	return x > 0 and x <= a and y > 0 and y <= b;
}

int main(){
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll ans = check(c, d-1, a, b) + check(c+1, d, a, b) + check(c, d+1, a, b) + check(c-1, d, a, b);
	cout << ans;
	return 0;
}