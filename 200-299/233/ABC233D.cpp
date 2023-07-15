#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, k;
    cin >> n >> k;
    ll A[n];
    vector<ll> store(n, 0);
    map<ll, ll> mpl;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        if(i == 0){
            store[i] += A[i];
        }
        else{
            store[i] += A[i] + store[i-1];
        }
        mpl[store[i]] += 1;
    }
    ll ans = 0, last = 0;
    for(ll i=0; i<n; i++){
        last += A[i];
        mpl[last] -= 1;
        if(A[i] == k){
            ans ++;
        }
        ll cur = k-A[i]+last;
        if(mpl[cur] != 0){
            ans += mpl[cur];
        }
    }
    cout << ans;
    return 0;
}