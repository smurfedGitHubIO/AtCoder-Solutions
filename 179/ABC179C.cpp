#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=1; i<n; i++){
        ans += (n-1)/i;
    }
    cout << ans;
    return 0;
}