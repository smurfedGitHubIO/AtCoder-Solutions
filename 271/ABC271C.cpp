#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
  ll n;
  cin >> n;
  ll A[n];
  for(ll i=0; i<n; i++){
    cin >> A[i];
  }
  sort(A, A+n);
  map<ll, ll> mp;
  ll dump = 0;
  vector<ll> v;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    mp[A[i]] += 1;
    if(mp[A[i]] > 1){
      dump += 1;
    } else {
      v.emplace_back(A[i]);
    }
  }
  ll last = 1;
  ll ans = 0;
  for(ll i=0; i<v.size() and dump > 0; i++){
    if(last != v[i]){
      if (dump/2 <= v[i] - last){
        ans += v[i]-last;
        dump -= 2*(v[i]-last);
        last = v[i];
      } else {
        ans += dump/2;
        dump = 0;
      }
    }
  }
  cout << ans+v.size();
  return 0;
}