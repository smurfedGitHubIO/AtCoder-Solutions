#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF = 1e18 + 11;

int main() {
  ll x, k;
  cin >> x >> k;
  ll z = 1;
  for(ll i=1; i<=k; i++){
    z *= 10;
    ll cur = x/z;
    ll md = x%z;
    ll y = (cur + (md != 0))*z;
    ll w = (cur)*z;
    if (abs(y-x) > abs(w-x)) {
      x = w;
    } else {
      x = y;
    }
  }
  cout << x;
  return 0;
}