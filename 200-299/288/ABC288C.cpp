#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;


int main(){
  ll n, m;
  cin >> n >> m;
  vector<ll> v[n];
  for(ll i=0; i<m; i++){
    ll x, y;
    cin >> x >> y;
    --x, --y;
    v[x].emplace_back(y);
    v[y].emplace_back(x);
  }
  vector<bool> vis(n, false);
  ll cnt = 0;
  for(ll i=0; i<n; i++){
    if(!vis[i]){
      queue<ll> ql;
      ql.push(i);
      while(!ql.empty()){
        ll fr = ql.front();
        vis[fr] = 1;
        ql.pop();
        for(ll j=0; j<v[fr].size(); j++){
          if(!vis[v[fr][j]]){
            ql.push(v[fr][j]);
          } else {
            cout << fr << " " << v[fr][j] << "\n";
            cnt += 1;
          }
        }
      }
    }
  }
  cout << ((cnt-m)>>1);
  return 0;
}