#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> pl;

ll xs[] = {-1, 1, 0, 0};
ll ys[] = {0, 0, -1, 1};

bool issafe(ll i, ll j, ll h, ll w){
  return i >= 0 and i < h and j >= 0 and j < w;
}

int main(){
  ll h, w;
  cin >> h >> w;
  string st[h];
  ll si = -1, sj = -1;
  for(ll i=0; i<h; i++){
    cin >> st[i];
    if (si == -1 and sj == -1) {
      for(ll j=0; j<w; j++){
        if (st[i][j] == 'S') {
          si = i;
          sj = j;
          break;
        }
      }
    }
  }
  queue<pll> qpl;
  qpl.push(mp(si, sj));
  int bt[h][w];
  for(ll i=0; i<h; i++){
    for(ll j=0; j<w; j++){
      bt[i][j] = 0;
    }
  }
  pll par[h][w];
  ll dist[h][w];
  for(ll i=0; i<h; i++){
    for(ll j=0; j<w; j++){
      par[i][j] = mp(-1, -1);
      dist[i][j] = -1;
    }
  }
  bt[si][sj] = -1;
  dist[si][sj] = 0;
  bool ans = false;
  while(!qpl.empty()){
    pll fr = qpl.front();
    qpl.pop();
    if (ans) {
      break;
    }
    for(ll i=0; i<4; i++){
      ll ni = fr.f+xs[i], nj = fr.s+ys[i];
      if (issafe(ni, nj, h, w) and st[ni][nj] == '.' and (par[ni][nj].f != par[fr.f][fr.s].f or par[ni][nj].s != par[fr.f][fr.s].s) and par[ni][nj].f != -1 and par[ni][nj].s != -1 and dist[ni][nj] + dist[fr.f][fr.s] >= 3) {
        ans = true;
        break;
      } if(issafe(ni, nj, h, w) and bt[ni][nj] <= 0 and st[ni][nj] == '.'){
        bt[ni][nj] += 1;
        dist[ni][nj] = dist[fr.f][fr.s] + 1;
        if(fr.f == si and fr.s == sj)
          par[ni][nj] = mp(ni, nj);
        else
          par[ni][nj] = par[fr.f][fr.s];
        qpl.push(mp(ni, nj));
      }
    }
  }
  cout << (ans ? "Yes" : "No");
  return 0;
}