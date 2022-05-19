#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

const ll MAXN = 2e5 + 11;

int main(){
	pll P[MAXN];
	for(int i=0; i<MAXN; i++){
		P[i].f = P[i].s = 0;
	}
	ll ci = 0, li=0;
	ll n;
	cin >> n;
	while(n--){
		ll a, b, c;
		cin >> a;
		if(a == 1){
			cin >> b >> c;
			P[ci].f = c;
			P[ci++].s = b;
		}
		else{
			cin >> b;
			ll ans = 0;
			while(b > 0){
				if(P[li].f >= b){
					P[li].f -= b;
					ans += P[li].s*b;
					b = 0;
					if(P[li].f == 0){
						li += 1;
					}
				}
				else{
					b -= P[li].f;
					ans += P[li].f*P[li].s;
					li += 1;
				}
			}
			cout << ans << "\n";
		}
	}
	return 0;
}