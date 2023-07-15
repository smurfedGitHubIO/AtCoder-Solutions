#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll x, y, a, b;
	cin >> x >> y >> a >> b;
	ll q = y - ((y-x)/b - ((y-x)%b == 0))*b - x;
	ll maxx = ((y-x)/b - ((y-x)%b == 0));
	while(q/a >= x){
		q /= a;
		maxx++;
	}
	ll cnt = 0;
	while(x*a < y){
		maxx = max((y-x)/b - ((y-x)%b == 0) + cnt, maxx);
		cnt++;
		x *= a;
	}
	cout << maxx;
	return 0;
}