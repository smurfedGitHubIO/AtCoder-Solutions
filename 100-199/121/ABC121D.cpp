#include <bits/stdc++.h>
#define mp make_pair
#define f first
#define s second
using namespace std;

typedef unsigned long long ll;
typedef pair<ll, ll> pll;

const ll MAXN = 1e12+11;

int main(){
	ll n, m;
	cin >> n >> m;
	ll ans = 0, cur = 4, cnt = 0, p = 0;
	if((m/2+m%2-(n-1)/2+(n-1)%2)&1){
		ans ^= 1;
	}
	while((1LL<<cnt+1) <= m){
		ll q = ((m+1)/cur)*(cur/2)+((m+1)%cur >= cur/2 ? (m+1)%cur-cur/2 : 0);
		if(cur/2 <= n%cur){
			q -= (((n/cur)*(cur/2))+((n)%cur >= cur/2 ? (n)%cur-cur/2 : 0));
		}
		if(q&1){
			ans ^= (1LL<<(cnt+1));
		}
		cur *= 2;
		cnt += 1;
	}
	cout << ans;
    return 0;
}