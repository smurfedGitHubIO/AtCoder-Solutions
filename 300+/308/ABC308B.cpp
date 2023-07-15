#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  map<string, ll> msl;
  string st[n];
  for(ll i=0; i<n; i++){
    cin >> st[i];
  }
  for(ll i=0; i<m; i++){
    string s;
    cin >> s;
    msl[s] = i+1;
  }
  ll p[m+1];
  for(ll i=0; i<m+1; i++){
    cin >> p[i];
  }
  ll ans = 0;
  for(ll i=0; i<n; i++){
    ans += p[msl[st[i]]];
  }
  cout << ans;
  return 0;
}