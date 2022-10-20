#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define eb emplace_back
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> pl;

ll xs[] = {-1, 1, 0, 0, 1, -1, 1, -1};
ll ys[] = {0, 0, -1, 1, -1, -1, 1, 1};

bool valid(ll x, ll y, ll n){
  return x >= 0 and x < n and y >= 0 and y < n;
}

int main(){
  ll n, m;
  cin >> n >> m;
  ll A[n][n];
  for(ll i=0; i<n; i++){
    for(ll j=0; j<n; j++){
      if(i == 0 and j == 0){
        A[i][j] = 0;
      } else {
        A[i][j] = -1;
      }
    }
  }
  vector<pll> vals;
  for(ll i=0; i<m; i++){
    int q = sqrt(m-i*i);
    if(q*q == m-i*i){
      vals.eb(mp(i, q));
    }
  }
  queue<pl> qpl;
  qpl.push(mp(0,mp(0,0)));
  while(qpl.size() != 0){
    pl fr = qpl.front();
    qpl.pop();
    for(ll k=0; k<vals.size(); k++){
      for(ll i=4; i<8; i++){
        ll nx = fr.s.f+xs[i]*vals[k].f;
        ll ny = fr.s.s+ys[i]*vals[k].s;
        if(valid(nx, ny, n) and A[nx][ny] == -1){
          A[nx][ny] = fr.f+1;
          A[ny][nx] = fr.f+1;
          qpl.push(mp(A[nx][ny], mp(nx, ny)));
        }
      }
      for(ll i=4; i<8; i++){
        ll nx = fr.s.f+xs[i]*vals[k].s;
        ll ny = fr.s.s+ys[i]*vals[k].f;
        if(valid(nx, ny, n) and A[nx][ny] == -1){
          A[nx][ny] = fr.f+1;
          A[ny][nx] = fr.f+1;
          qpl.push(mp(A[nx][ny], mp(nx, ny)));
        }
      }
    }
  }
  for(ll i=0; i<n; i++){
    for(ll j=0; j<n; j++){
      cout << A[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}