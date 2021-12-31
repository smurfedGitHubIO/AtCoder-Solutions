#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;

int main(){
    ll n, k;
    cin >> n >> k;
    pair<ll, ll> A[n];
    vector<ll> ans(n, 0);
    for(ll i=0; i<n; i++){
        cin >> A[i].f;
        A[i].s = i;
    }
    sort(A, A+n);
    ll x = k/n, rem = k%n;
    for(ll i=0; i<n; i++){
        if(i < rem){
            ans[A[i].s] = x+1;
        }
        else{
            ans[A[i].s] = x;
        }
    }
    for(ll i=0; i<n; i++){
        cout << ans[i] << "\n";
    }
    return 0;
}
