#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=k; j++){
            ans += i*100+j;
        }
    }
    cout << ans;
    return 0;
}