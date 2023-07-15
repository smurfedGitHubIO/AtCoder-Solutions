#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> A[n];
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        A[i].push_back(x);
        for(ll j=0; j<x; j++){
            ll p;
            cin >> p;
            A[i].push_back(p);
        }
    }
    ll ans = 1;
    sort(A, A+n);
    for(ll i=1; i<n; i++){
        if(A[i][0] == A[i-1][0]){
            ll sz = A[i][0];
            bool check = false;
            for(ll j=1; j<sz+1; j++){
                if(A[i][j] != A[i-1][j]){
                    check = true;
                    break;
                }
            }
            ans += check;
        }
        else{
            ans += 1;
        }
    }
    cout << ans;
    return 0;
}