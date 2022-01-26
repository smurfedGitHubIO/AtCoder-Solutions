#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll x = (n*(n+1)*2);
    ll ct = 0, nm;
    for(ll i=0; i<4*n-1;i++){
        cin >> nm;
        ct += nm;
    }
    cout << x-ct;
    return 0;
}