#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=1; i*i <= n; i++){
        ll hi = n/i, lo = n/(i+1)+1;
        ans += (hi-lo+1)*i;
        if(i != n/i){
            ll q = (n/i);
            hi = n/q, lo = n/(q+1)+1;
            ans += (hi-lo+1)*q;
        }
    }
    cout << ans;
    return 0;
}
