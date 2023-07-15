#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> acounter(n+1,0);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        acounter[x] += 1;
    }
    ll B[n];
    for(ll i=0; i<n; i++){
        cin >> B[i];
    }
    vector<ll> ccounter(n+1,0);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        ccounter[x] += 1;
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ans += ccounter[i+1]*acounter[B[i]];
    }
    cout << ans;
    return 0;
}