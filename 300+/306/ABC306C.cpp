#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll t;
  cin >> t;
  ll A[t*3];
  map<ll, ll> mp;
  for(ll i=0; i<t*3; i++){
    cin >> A[i];
    mp[A[i]] += 1;
    if(mp[A[i]] == 2){
      cout << A[i] << " ";
    }
  }
  return 0;
}