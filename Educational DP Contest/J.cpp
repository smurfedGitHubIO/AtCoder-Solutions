#include <bits/stdc++.h>
#define eb emplace_back
#define all(c) begin(c),end(c)
using namespace std;

typedef long long int ll;
typedef long double ld;
const ld INF = 1'000'000'000'000'000'000.00000;
const ll MAXN = 3e2 + 1;
ll n;

vector< vector< vector<ld> > > dp(MAXN, vector< vector<ld> >(MAXN, vector<ld>(MAXN, INF))); //number nung buhay pa sa kada lalagyan

ld recur(ll a, ll b, ll c){
	if(a == 0 and b == 0 and c == 0)
		return 0.0000;
	if(dp[a][b][c] != INF)
		return dp[a][b][c];
	ld ans = (double)(n)/(double)(a+b+c), q=0;
	if(a > 0)
		q += a*recur(a-1,b,c);
	if(b > 0)
		q += b*recur(a+1,b-1,c);
	if(c > 0)
		q += c*recur(a,b+1,c-1);
	q /= (a + b + c);
	return dp[a][b][c] = ans+q;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	ll a=0,b=0,c=0,x;
	for(ll i=0; i<n; i++){
		cin >> x;
		a += (x == 1);
		b += (x == 2);
		c += (x == 3);
	}
	ld ans = recur(a,b,c);
	cout << fixed << setprecision(10) << ans;
	return 0;
}