#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll k;
  cin >> k;
  vector<ll> v;
  for(ll i=2; i*i <= k; i++){
    if(k%i == 0){
      
      while(k%i == 0){
        k /= i;
        v.emplace_back(i);
      }
    }
  }
  v.emplace_back(k);
  map<ll, ll> mpl;
  for(ll i=0; i<v.size(); i++){
    mpl[v[i]] += 1;
  }
  ll mx = 0;
  for(auto x : mpl){
    ll cur = 1;
    ll i =0;
    ll p = x.second;
    while(p > 0){
      p -= (i%x.first == 0 ? max(i/x.first, 0LL)+1 : 1);
      i += 1;
    }
    mx = max(i*x.first, mx);
  }
  cout << mx;
  return 0;
}