#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll Q[n];
    ll A[n];
    ll B[n];
    ll mn = 10000000000, maxi = 0;
    for(ll i=0; i<n; i++){
        cin >> Q[i];
    }
    for(ll i=0; i<n; i++){
        cin >> A[i];
        if(A[i] != 0){
            mn = min(Q[i]/A[i], mn);
            maxi = max(maxi, Q[i]/A[i]);
        }
    }
    for(ll i=0; i<n; i++){
        cin >> B[i];
        if(B[i] != 0){
            mn = min(Q[i]/B[i], mn);
            maxi = max(maxi, Q[i]/A[i]);
        }
    }
    ll mx = 0;
    for(ll i=mn; i<=maxi; i++){
        for(ll j=0; j<n; j++){
            
        }
    }
    return 0;
}