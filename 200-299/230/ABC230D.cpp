#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;

int main(){
    ll n, d;
    cin >> n >> d;
    pair<ll, ll> A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i].s >> A[i].f;
    }
    sort(A, A+n);
    ll lst = -1, ans = 0, curd = d;
    for(ll i=0; i<n; i++){
        if(i == 0){
            lst = A[i].f+d-1;
        }
        else if(A[i].s <= lst){
            continue;
        }
        else{
            ans ++;
            lst = A[i].f+d-1;
        }
    }
    cout << ans+1;
    return 0;
}
