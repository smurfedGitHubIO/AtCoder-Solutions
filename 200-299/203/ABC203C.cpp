#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
    ll n, k;
    cin >> n >> k;
    pll A[n];
    ll ans = 0;
    for(ll i=0; i<n; i++){
        cin >> A[i].f >> A[i].s;
    }
    sort(A, A+n);
    ans += k;
    for(ll i=0; i<n; i++){
        if(ans >= A[i].f){
            ans += A[i].s;
        }
        else{
            break;
        }
    }
    cout << ans;
    return 0;
}