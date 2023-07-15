#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    ll x = 0;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        x += a[i] - (i&1 ? 1 : 0);
    }
    cout << (x <= m ? "Yes" : "No");
    return 0;
}
