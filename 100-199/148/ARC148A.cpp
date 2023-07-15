#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXX = 1e4+11;

vector<ll> primes;
map<ll, ll> primesMap;
vector<bool> isprime(MAXX, true);

void init(){
  isprime[0] = isprime[1] = false;
  for(ll i=2; i<MAXX; i++){
    if(isprime[i]){
      primes.emplace_back(i);
      primesMap[i] = 0;
    }
    for(ll j=0; j<primes.size() && i*primes[j] < MAXX; j++){
      isprime[i*primes[j]] = false;
    }
  }
}

int main(){
  init();
  ll n;
  cin >> n;
  ll arr[n];
  ll mx = 0;
  ll ind = 0;
  for(ll i=0; i<n; i++){
    cin >> arr[i];
    for(ll j=0; j<primes.size(); j++){
      if(arr[i]%primes[j] == 0){
        primesMap[primes[j]] += 1;
        if(primesMap[primes[j]] >= mx){
          ind = j;
          mx = primesMap[primes[j]];
          cout << mx << "\n";
        }
      }
    }
  }
  map<ll, ll> cnt;
  ll ans = 0;
  for(ll i=0; i<n; i++){
    if(cnt[arr[i]%primes[ind]] == 0){
      ans += 1;
      cnt[arr[i]%primes[ind]] += 1;
    }
  }
  cout << primes[ind];
  return 0;
}