#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> pl;

bool comp(pl A, pl B){
  if(A.s.f*(B.s.f+B.s.s) == B.s.f*(A.s.f+A.s.s))
    return A.f < B.f;
  return A.s.f*(B.s.f+B.s.s) > B.s.f*(A.s.f+A.s.s);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  pl A[n];
  for(ll i=0; i<n; i++){
    cin >> A[i].s.f >> A[i].s.s;
    A[i].f = i+1;
  }
  sort(A, A+n, comp);
  for(ll i=0; i<n; i++){
    cout << A[i].f << " ";
  }
  return 0;
}