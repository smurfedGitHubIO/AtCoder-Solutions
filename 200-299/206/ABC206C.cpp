#include <bits/stdc++.h>
#include <math.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    map<ll, ll> mpl;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        mpl[A[i]] += 1;
    }
    ll ans =0;
    for(ll i=0; i<n; i++){
        mpl[A[i]] -= 1;
        ans += n-i-1-mpl[A[i]];
    }
    cout << ans;
}
