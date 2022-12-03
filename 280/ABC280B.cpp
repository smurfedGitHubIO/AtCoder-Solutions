#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  for(ll i=0; i<n; i++){
    cin >> A[i];
  }
  ll cur = 0;
  for(ll i=0; i<n; i++){
    if(i == 0){
      cout << A[i];
    }
    else {
      cout << A[i]-A[i-1];
    }
    if(i != n-1){
      cout << " ";
    }
    cur += A[i];
  }
  return 0;
}