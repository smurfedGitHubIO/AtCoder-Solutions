#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
const ll INF = 1e9;

void solve(){
    ll n;
    cin >> n;
    pair<ll, ll> A[n];
    map<ll, ll> mpl;
    for(ll i=0; i<n; i++){
        ll t, l, r;
        cin >> t >> l >> r;
        if(t == 1){
            A[i].f = l*INF;
            A[i].s = r*INF;
        }
        else if(t == 2){
            A[i].f = l*INF;
            A[i].s = r*INF-1;
        }
        else if(t == 3){
            A[i].f = l*INF+1;
            A[i].s = r*INF;
        }
        else{
            A[i].f = l*INF+1;
            A[i].s = r*INF-1;
        }
        mpl[A[i].f] += 1;
    }
    sort(A, A+n);
    ll ans = 0;
    for(ll i=0; i<n; i++){
        mpl[A[i].f] -= 1;
        for(auto x : mpl){
            if(x.f <= A[i].s){
                ans += x.s;
            }
            else{
                break;
            }
        }
    }
    cout << ans;
}

int main(){
    solve();
    return 0;
}
