#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll MAXN = 3e5+11;

struct triple{
    ll f, s, t;
};

vector<ll> ans(MAXN, 0);

int main(){
    ll h, w, c, q;
    cin >> h >> w >> c >> q;
    map<ll, bool> mbh;
    map<ll, bool> mbw;
    triple A[q];
    for(ll i=0; i<q; i++){
        cin >> A[i].f >> A[i].s >> A[i].t;
    }
    for(ll i=q-1; i>=0; i--){
        if(A[i].f == 1){
            if(mbw[A[i].s-1] == false){
                mbw[A[i].s-1] = true;
                ans[A[i].t-1] += w;
                h -= 1;
            }
        }
        else{
            if(mbh[A[i].s-1] == false){
                mbh[A[i].s-1] = true;
                ans[A[i].t-1] += h;
                w -= 1;
            }
        }
    }
    for(ll i=0; i<c; i++){
        cout << ans[i] << " ";
    }
    return 0;
}