#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

map<ll, ll> mpl;

ll solve(ll x){
  if(mpl[x] != 0)
    return mpl[x];
  ll s = x/2;
  ll t = x/3;
  mpl[x] = solve(s) + solve(t);
  return mpl[x];
}

int main(){
  ll x;
  cin >> x;
  mpl[0] = 1; 
  ll ans = solve(x);
  cout << ans;
  return 0;
}