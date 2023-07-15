#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  ll ans = 0;
  for(ll i=0; i<n; i++){
    for(ll j=0; j<m; j++){
      char x;
      cin >> x;
      ans += (x == '#');
    }
  }
  cout << ans;
  return 0;
}