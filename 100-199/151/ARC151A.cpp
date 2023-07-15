#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  string s, t;
  cin >> n >> s >> t;
  ll q = 0;
  for(ll i=0; i<n; i++){
    if(s[i] != t[i]) {
      q ++;
    }
  }
  if (q & 1) {
    cout << "-1";
  } else {
    vector<ll> a;
    vector<ll> b;
    for(ll i=0; i<n; i++){
      if(s[i] != t[i]) {
        if (s[i] == '0') {
          a.emplace_back(i);
        } else {
          b.emplace_back(i);
        }
      }
    }
    string ans = "";
    for(ll i=0; i<n; i++){
      ans += '0';
    }
    ll as = a.size(), bs = b.size();
    if (as > bs) {
      ll qs = as - bs;
      ll pt = (qs+1)>>1;
      for(ll i=as-pt; i<as; i++){
        ans[a[i]] = '1';
      }
    } else if (bs > as) {
      ll qs = bs - as;
      ll pt = (qs+1)>>1;
      for(ll i=bs-pt; i<bs; i++){
        ans[b[i]] = '1';
      }
    }
    cout << ans;
  }
  return 0;
}