#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 1e3 + 11;

ll A[MAXN];
ll n;

int s[501][5001];
bool checkx = 0, checky = 0;

void init(){
  for(ll i=0; i<501; i++){
    for(ll j=0; j<5001; j++){
      s[i][j] = -1;
    }
  }
}

bool solve(ll t, ll i, ll cur, ll topup){
  if (cur == topup) {
    s[i][cur] = 1;
    if (t == 0) {
      checkx = 1;
    } else {
      checky = 1;
    }
    return 1;
  }
  if (s[i][cur] != -1) {
    return s[i][cur];
  }
  bool check = false;
  if (i == t) {
    bool a = solve(t, i+2, cur+A[i], topup), b = solve(t, i+2, cur, topup);
    if (a or b) {
      check = 1;
    }
    check |= 0;
  } else if (i < n) {
    bool b = solve(t, i+2, cur, topup);
    if (cur + A[i] <= topup) {
      bool a = solve(t, i+2, cur+A[i], topup);
      if (a == topup) {
        check = 1;
      }
    }
    check |= b;
  }
  s[i][cur] = check;
  return check;
}

int main(){
  init();
  ll x, y;
  cin >> n >> x >> y;
  ll odds = 0, evens = 0;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    if (i&1) {
      evens += A[i];
    } else if (i != 0) {
      odds += A[i];
    }
  }
  x -= A[0];
  bool yb = solve(1, 1, 0, evens-abs(y));
  init();
  bool xb = solve(0, 0, 0, odds-abs(x));
  cout << (checkx&checky ? "Yes" : "No");
  return 0;
}