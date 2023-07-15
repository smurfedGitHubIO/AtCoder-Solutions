#include <bits/stdc++.h>
#define mp make_pair
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> pl;

ll xs[] = {-1,1,0,0};
ll ys[] = {0,0,-1,1};

bool issafe(ll x,ll y,ll n,ll m){
  return x >= 0 and y >= 0 and x < n and y < m;
}

int main(){
  ll n, m;
  cin >> n >> m;
  char s[n][m];
  bool vis[n][m];
  for(ll i=0; i<n; i++){
    for(ll j=0; j<m; j++){
      cin >> s[i][j];
      vis[i][j] = false;
    }
  }
  queue<pl> qp;
  if(s[0][0] != 's'){
    cout << "No";
    return 0;
  }
  string st = "snuke";
  qp.push(mp(0, mp(0,0)));
  while(!qp.empty()){
    pl fr = qp.front();
    qp.pop();
    if(fr.s.f == n-1 and fr.s.s == m-1){
      cout << "Yes\n";
      return 0;
    }
    for(ll i=0; i<4; i++){
      if(issafe(fr.s.f+xs[i],fr.s.s+ys[i],n,m) and s[fr.s.f+xs[i]][fr.s.s+ys[i]] == st[(fr.f+1)%5] and !vis[fr.s.f+xs[i]][fr.s.s+ys[i]]){
        qp.push(mp(fr.f+1,mp(fr.s.f+xs[i],fr.s.s+ys[i])));
        vis[fr.s.f+xs[i]][fr.s.s+ys[i]] = true;
      }
    }
  }
  cout << "No\n";
  return 0;
}