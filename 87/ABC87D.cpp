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
  vector<pll> A[n+1];
  map<ll, ll> cnt;
  vector<ll> dst(n+1, -1);
  ll l, r, d;
  ll mx = 0, cur = 0;
  for(ll i=0; i<m; i++){
    cin >> l >> r >> d;
    cnt[l] += 1;
    A[l].emplace_back(mp(r, d));
    A[r].emplace_back(mp(l, -d));
    if(cnt[l] > mx){
      cur = l;
      mx = cnt[l];
    }
  }
  dst[cur] = 0;
  queue<ll> q;
  q.push(cur);
  bool check = true;
  while(!q.empty()){
    ll fr = q.front();
    q.pop();
    for(ll i=0; i<(ll)A[fr].size(); i++){
      ll pt = A[fr][i].f;
      if(dst[pt] == -1){
        dst[pt] = A[fr][i].s + dst[fr];
        q.push(pt);
      } else if (dst[pt] != A[fr][i].s + dst[fr]) {
        check = false;
      }
    }
  }
  cout << (check ? "Yes" : "No");
  return 0;
}