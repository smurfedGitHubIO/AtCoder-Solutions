#include <bits/stdc++.h>
#define mp make_pair
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

const ll MAXN = 1e5 + 11;

ll par[MAXN];
ll siz[MAXN];

void init(){
    for(ll i=0; i<MAXN; i++){
        par[i] = i;
        siz[i] = 1;
    }
}

ll find(ll x){
    if(x == par[x]){
        return x;
    }
    return par[x] = find(par[x]);
}

int main(){
    init();
    ll n, m;
    cin >> n >> m;
    pll A[m];
    for(ll i=0; i<m; i++){
        cin >> A[i].f >> A[i].s;
    }
    ll cur = n*(n-1)/2;
    vector<ll> ans(m);
    for(ll i=m-1; i>=0; i--){
        ans[i] = cur;
        ll pa = find(A[i].f);
        ll pb = find(A[i].s);
        if(pa != pb){
            if(siz[pa] < siz[pb]){
                swap(pa,pb);
            }
            par[pb] = pa;
            cur -= siz[pa]*siz[pb];
            siz[pa] += siz[pb];
        }
    }
    for(ll i=0; i<m; i++){
        cout << ans[i] << "\n";
    }
    return 0;
}