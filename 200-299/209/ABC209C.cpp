#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

const ll MOD = 1e9 + 7;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    ll ans = 1, cur = 0;
    for(ll i=0; i<n; i++){
        ans = (ans*(A[i]-cur))%MOD;
        cur += 1;
    }
    cout << ans;
    return 0;
}
