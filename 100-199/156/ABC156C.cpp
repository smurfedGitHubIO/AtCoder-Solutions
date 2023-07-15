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
    ll ans = 10000000000;
    for(ll i=1; i<=100; i++){
        ll q = 0;
        for(ll j=0; j<n; j++){
            q += (i-A[j])*(i-A[j]);
        }
        ans = min(q, ans);
    }
    cout << ans;
    return 0;
}