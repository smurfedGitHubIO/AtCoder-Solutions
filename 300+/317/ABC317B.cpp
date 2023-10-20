#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll func(ll x){
    return (x*(x+1))/2;
}

int main(){
    ll n;
    cin >> n;
    ll x = 0;
    ll b;
    vector<ll> a;
    for(ll i=0; i<n; i++){
        cin >> b;
        x += b;
        a.emplace_back(b);
    }
    sort(begin(a), end(a));
    ll q = func(n+1) + (n+1)*(a[0]-1);
    cout << q-x;
    return 0;
}