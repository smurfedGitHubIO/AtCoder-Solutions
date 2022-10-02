#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  vector<ll> A[n];
  for(ll i=0; i<n; i++) {
    ll k;
    ll val;
    cin >> k;
    for(ll j=0; j<k; j++) {
      cin >> val;
      A[i].emplace_back(val);
    }
  }
  while(m--) {
    ll a, b;
    cin >> a >> b;
    --a, --b;
    cout << A[a][b] << "\n";
  }
  return 0;
}