#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 2e5 + 11;

ll par[MAXN];
vector<ll> siz(MAXN, 1);

void init(){
	for(ll i=0; i<MAXN; i++)
		par[i] = i;
}

ll find(ll x){
	return (x == par[x] ? x : par[x] = find(par[x]));
}

void merge(ll a, ll b){
	ll pA = find(a);
	ll pB = find(b);
	if(siz[pA] < siz[pB]){
		par[pB] = par[pA];
		siz[pA] += siz[pB];
	}
	else{
		par[pB] = par[pA];
		siz[pA] += siz[pB];
	}
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n, m;
	init();
	cin >> n >> m;
	ll ar[i];
	return 0;
}

//union find pero mas complex