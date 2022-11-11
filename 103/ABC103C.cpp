#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll lcm = 0;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        ans += A[i]-1;
    }
    cout << ans;
    return 0;
}