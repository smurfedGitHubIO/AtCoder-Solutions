#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXX = 2e3+1;
const ll INF = 1e18+11;

ll arr[MAXX];
vector<ll> mx(MAXX, -1);

ll solve(ll n, ll m, ll ind, ll cur){
  if (ind >= n) {
    return -INF;
  }
}

int main(){
  ll n,m;
  cin >> n >> m;
  for(ll i=0; i<n; i++){
    cin >> arr[i];
  }
  return 0;
}