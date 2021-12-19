#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	ll ans = 0, x;
	cin >> n;
	while(n--){
		cin >> x;
		ans += (x-10 < 0 ? 0 :x-10);
	}
	cout << ans;
	return 0;
}