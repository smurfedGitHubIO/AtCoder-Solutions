#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
  ll r,c,sx,sy;
  cin >> c >> r >> sx >> sy;
  ll n;
  pll A[n];
  pll B[n];
  for(ll i=0; i<n; i++){
    cin >> A[i].f >> A[i].s;
    B[i] = A[i];
  }
  sort(A, A+n);
  sort(B, B+n);
  ll q, l;
  char d;
  cin >> q;
  while(q--){
    cin >> d >> l;
    if (d == 'L' or d == 'R') {

    } else {
      
    }
  }
  return 0;
}